#include "TonalityReasoner.h"

namespace TONALITY_REASONER
{
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

        return finish;
    }

    void TonalityReasoner::clear()
    {
        lr_data.clear();
        lr_root = "";
        lr_tonality = true;
    }
}