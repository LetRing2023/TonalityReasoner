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

    bool TonalityReasoner::add(const MusicalNote& note, bool ifUpdate)
    {
        lr_data[note.getSignature()]++;
        if(ifUpdate)
            return update();
        else return false;
    }

    bool TonalityReasoner::update()
    {
        bool finish = false;

        std::vector<std::pair<MusicalSignature, int>> sortedData;
        for (auto it : lr_data)
        {
            std::pair<MusicalSignature, int> item = it;
            sortedData.push_back(item);
        }
        sort(sortedData.begin(), sortedData.end(),
            [](const std::pair<const MusicalSignature, int>& x, 
                const std::pair<const MusicalSignature, int>& y) -> bool
            {
                return x.second > y.second;
            }
        );
        if (sortedData.size() < 7)
            return finish;
        std::vector<MusicalSignature> topSeven;
        for (int i = 0; i < 7; i++)
            if (sortedData[i].second)
                topSeven.push_back(sortedData[i].first);
        sort(topSeven.begin(), topSeven.end());

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
                for(int j = (i + 1) % 7, iteartion = cMajor - position, tPosition = position + 1;
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
                tRatio = cRight / cInterval;//calculate ratio
                if(tRatio > ratio)
                {
                    ratio = tRatio;//update ratio
                    tonality = true;//Major
                    tmpInterval = MusicalInterval::PerfectUnison;
                    for(int j = 0; j < position; j++)
                        tmpInterval = MusicalInterval(int(tmpInterval) + int(Major[j]));
                    root = MusicalNote::getNote(currentSig, tmpInterval, false);//calculate root
                }

                //Calculate Minor
                int cMinor = Minor.size();
                tRatio = 0, cRight = 0;
                tmpInterval = Minor[position];
                for(int j = (i + 1) % 7, iteration = cMinor - position, tPosition = position + 1;
                    iteration;
                    j = (j + 1) % 7, iteration--, tPosition++)
                {
                    if(MusicalNote::getInterval(currentSig, topSeven[j]) == tmpInterval)
                    {
                        cRight++;//counting
                        tmpInterval = MusicalInterval(int(tmpInterval) + int(Minor[tPosition]));//update interval
                    }
                    else break;
                }
                tRatio = cRight / cInterval;//calculate ratio
                if(tRatio > ratio)
                {
                    ratio = tRatio;
                    tonality = false;
                    tmpInterval = MusicalInterval::PerfectUnison;
                    for(int j = 0; j < position; j++)
                        tmpInterval = MusicalInterval(int(tmpInterval) + int(Minor[j]));
                    root = MusicalNote::getNote(currentSig, tmpInterval, false);//calculate root
                }
            }
        }
        lr_root = MusicalNote::toString(root);
        lr_tonality = tonality;

        finish = true;
        return finish;
    }

    void TonalityReasoner::clear()
    {
        lr_data.clear();
        lr_root = "";
        lr_tonality = true;
    }

    std::string TonalityReasoner::output()
    {
        std::string ret = lr_root + " ";
        if(lr_tonality)
            ret += "Major\n";
        else ret += "Minor\n";
        return ret;
    }
}