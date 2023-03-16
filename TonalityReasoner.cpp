#include "TonalityReasoner.h"
#include <vector>
#include <algorithm>

namespace TONALITY_REASONER
{
    const std::vector<MusicalInterval> Major = {
        MusicalInterval::MajorSecond, MusicalInterval::MajorSecond, MusicalInterval::MinorSecond,
        MusicalInterval::MajorSecond, MusicalInterval::MajorSecond, MusicalInterval::MajorSecond,
        MusicalInterval::MinorSecond
        };
    
    const std::vector<MusicalInterval> Minor = {
        MusicalInterval::MajorSecond, MusicalInterval::MinorSecond, MusicalInterval::MajorSecond,
        MusicalInterval::MajorSecond, MusicalInterval::MinorSecond, MusicalInterval::MajorSecond,
        MusicalInterval::MajorSecond
    };

    TonalityReasoner::TonalityReasoner()
    {
        lr_root = "";
        lr_tonality = true;
    }

    void TonalityReasoner::add(const MusicalNote& note, bool ifUpdate)
    {
        lr_data[note.getSignature()]++;
        if(ifUpdate)
            update();
    }

    bool TonalityReasoner::update()
    {
        bool finish = false;

        std::vector<std::pair<const MusicalSignature, int>*> sortedData;
        for(auto it : lr_data)
            sortedData.push_back(&it);
        sort(sortedData.begin(), sortedData.end(),
            [](std::pair<const MusicalSignature, int>* x, std::pair<const MusicalSignature, int>* y) -> bool
            {
                return x->second > y->second;
            }
        );
        std::vector<MusicalSignature> topSeven;
        for(int i = 0; i < 7; i++)
            topSeven.push_back(sortedData[i]->first);
        
        MusicalSignature root;
        bool tonality = true;
        double ratio = 0;
        double cInterval = 7;
        for(int i = 0; i < 7; i++)
        {
            MusicalSignature currentSig = topSeven[i];
            MusicalInterval tmpInterval = MusicalInterval::PerfectUnison;
            for(int position = 0; position < 7; position++)
            {
                //Calculate Major
                int cMajor = Major.size();
                double tRatio = 0, cRight = 0;
                tmpInterval = Major[position];
                for(int j = (position + 1) % 7, iteartion = cMajor - position, tPosition = position + 1;
                    iteartion;
                    j = (j + 1) % 7, iteartion--, tPosition++)
                {
                    if(MusicalNote::getInterval(currentSig, topSeven[j]) == tmpInterval)
                    {
                        cRight++;// counting
                        tmpInterval = MusicalInterval(int(tmpInterval) + int(Major[tPosition]));//update interval
                    }
                    else break;
                }
                tRatio = cRight / cInterval;// calculate ratio
                if(tRatio > ratio)
                {
                    ratio = tRatio;//update ratio
                    tonality = true;//Major

                }
            }
        }

        return finish;
    }

    void TonalityReasoner::clear()
    {
        lr_data.clear();
        lr_root = "";
        lr_tonality = true;
    }
}