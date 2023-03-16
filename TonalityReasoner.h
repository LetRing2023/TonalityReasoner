#include "MusicalNote.h"
#include <map>
#include <string>

#ifndef LR_TONALITYREASONER_H
#define LR_TONALITYREASONER_H
namespace TONALITY_REASONER
{
    class TonalityReasoner
    {
    public:
        TonalityReasoner();
        ~TonalityReasoner() {}

        void add(const MusicalNote& note, bool ifUpdate);
        bool update();
        void clear();
    private:
        std::map<MusicalSignature, int> lr_data;
        std::string lr_root;
        bool lr_tonality;//true denote major and false denote minor
    };
}
#endif