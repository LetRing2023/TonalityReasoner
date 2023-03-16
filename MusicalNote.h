#include <string>

#ifndef LR_MUSICALNOTE_H
#define LR_MUSICALNOTE_H
namespace TONALITY_REASONER
{
    enum class MusicalSignature
    {
        C = 3, CsDb = 4, 
        D = 5, DsEb = 6, 
        E = 7, 
        F = 8, FsGb = 9, 
        G = 10, GsAb = 11, 
        A = 0, AsBb = 1, 
        B = 2
    };

    enum class MusicalAlphabet
    {
        A0 = 0, AsBb0, B0,
        C1, CsDb1, D1, DsEb1, E1, F1, FsGb1, G1, GsAb1, A1, AsBb1, B1,
        C2, CsDb2, D2, DsEb2, E2, F2, FsGb2, G2, GsAb2, A2, AsBb2, B2,
        C3, CsDb3, D3, DsEb3, E3, F3, FsGb3, G3, GsAb3, A3, AsBb3, B3,
        C4, CsDb4, D4, DsEb4, E4, F4, FsGb4, G4, GsAb4, A4, AsBb4, B4,
        C5, CsDb5, D5, DsEb5, E5, F5, FsGb5, G5, GsAb5, A5, AsBb5, B5,
        C6, CsDb6, D6, DsEb6, E6, F6, FsGb6, G6, GsAb6, A6, AsBb6, B6,
        C7, CsDb7, D7, DsEb7, E7, F7, FsGb7, G7, GsAb7, A7, AsBb7, B7,
        C8
    };

    enum class MusicalInterval
    {
        ERR = -1,
        PerfectUnison = 0, MinorSecond, MajorSecond, MinorThird, MajorThird,
        PerfectFourth, Tritone, PerfectFifth, MinorSixth, MajorSixth,
        MinorSeventh, MajorSeventh, PerfectOctave, MinorNinth, MajorNinth,
        MinorTenth, MajorTenth, PerfectEleventh, AugmentedEleventh, PerfectTwelfth,
        MinorThirteenth, MajorThirteenth, MinorFourteenth, MajorFourteenth, DoubleOctave
    };

    class MusicalNote
    {
    public:
        MusicalNote(): lr_note(MusicalAlphabet::C4) {}
        MusicalNote(std::string noteStr);
        MusicalNote(MusicalAlphabet noteAlphabet);
        ~MusicalNote() {};

        static std::string toString(const MusicalAlphabet& note);
        static std::string toString(const MusicalSignature& note);
        static std::string toString(const MusicalNote& note);
        static MusicalInterval getInterval(const MusicalNote& Note1, const MusicalNote& Note2);
        static MusicalInterval getInterval(const MusicalSignature& Sig1, const MusicalSignature& Sig2);// consider that Sig1 < Sig2
        static MusicalNote getNote(const MusicalNote& note, const MusicalInterval& interval, bool sharpOrFlat);
        static MusicalSignature getNote(const MusicalSignature& sig, const MusicalInterval& interval, bool sharpOrFlat);
        
        MusicalSignature getSignature()const;

        bool operator< (const MusicalNote& note)const;
        void operator= (const std::string noteStr);
        void operator= (const MusicalAlphabet noteAlphabet);
    private:
        MusicalAlphabet lr_note;
    };
}
#endif