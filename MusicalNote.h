#include <string>

namespace TONALITY_REASONER
{
    enum class MusicalAlphabet
    {
        A0 = 0, As0, Bb0, B0,
        C1, Cs1, Db1, D1, Ds1, Eb1, E1, F1, Fs1, Gb1, G1, Gs1, Ab1, A1, As1, Bb1, B1,
        C2, Cs2, Db2, D2, Ds2, Eb2, E2, F2, Fs2, Gb2, G2, Gs2, Ab2, A2, As2, Bb2, B2,
        C3, Cs3, Db3, D3, Ds3, Eb3, E3, F3, Fs3, Gb3, G3, Gs3, Ab3, A3, As3, Bb3, B3,
        C4, Cs4, Db4, D4, Ds4, Eb4, E4, F4, Fs4, Gb4, G4, Gs4, Ab4, A4, As4, Bb4, B4,
        C5, Cs5, Db5, D5, Ds5, Eb5, E5, F5, Fs5, Gb5, G5, Gs5, Ab5, A5, As5, Bb5, B5,
        C6, Cs6, Db6, D6, Ds6, Eb6, E6, F6, Fs6, Gb6, G6, Gs6, Ab6, A6, As6, Bb6, B6,
        C7, Cs7, Db7, D7, Ds7, Eb7, E7, F7, Fs7, Gb7, G7, Gs7, Ab7, A7, As7, Bb7, B7,
        C8
    };

    enum class MusicalInterval
    {
        ERR,
        PerfectUnison, MinorSecond, MajorSecond, MinorThird, MajorThird,
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
        ~MusicalNote();

        static MusicalInterval getInterval(const MusicalNote& Note1, const MusicalNote& Note2);

        bool operator< (const MusicalNote& note)const;
        void operator= (const std::string noteStr);
        void operator= (const MusicalAlphabet noteAlphabet);
    private:
        MusicalAlphabet lr_note;
    };
}