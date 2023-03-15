#include "MusicalNote.h"
#include <map>

namespace TONALITY_REASONER
{
    const std::map<std::string, MusicalAlphabet> stringToAlphabet = {
        {"A0", MusicalAlphabet::A0}, {"As0", MusicalAlphabet::As0}, {"Bb0", MusicalAlphabet::Bb0},
        {"B0", MusicalAlphabet::B0}, {"C1", MusicalAlphabet::C1}, {"Cs1", MusicalAlphabet::Cs1},
        {"Db1", MusicalAlphabet::Db1}, {"D1", MusicalAlphabet::D1}, {"Ds1", MusicalAlphabet::Ds1},
        {"Eb1", MusicalAlphabet::Eb1}, {"E1", MusicalAlphabet::E1}, {"F1", MusicalAlphabet::F1},
        {"Fs1", MusicalAlphabet::Fs1}, {"Gb1", MusicalAlphabet::Gb1}, {"G1", MusicalAlphabet::G1},
        {"Gs1", MusicalAlphabet::Gs1}, {"Ab1", MusicalAlphabet::Ab1}, {"A1", MusicalAlphabet::A1},
        {"As1", MusicalAlphabet::As1}, {"Bb1", MusicalAlphabet::Bb1}, {"B1", MusicalAlphabet::B1},
        {"C2", MusicalAlphabet::C2}, {"Cs2", MusicalAlphabet::Cs2}, {"Db2", MusicalAlphabet::Db2},
        {"D2", MusicalAlphabet::D2}, {"Ds2", MusicalAlphabet::Ds2}, {"Eb2", MusicalAlphabet::Eb2},
        {"E2", MusicalAlphabet::E2}, {"F2", MusicalAlphabet::F2}, {"Fs2", MusicalAlphabet::Fs2},
        {"Gb2", MusicalAlphabet::Gb2}, {"G2", MusicalAlphabet::G2}, {"Gs2", MusicalAlphabet::Gs2},
        {"Ab2", MusicalAlphabet::Ab2}, {"A2", MusicalAlphabet::A2}, {"As2", MusicalAlphabet::As2},
        {"Bb2", MusicalAlphabet::Bb2}, {"B2", MusicalAlphabet::B2}, {"C3", MusicalAlphabet::C3},
        {"Cs3", MusicalAlphabet::Cs3}, {"Db3", MusicalAlphabet::Db3}, {"D3", MusicalAlphabet::D3},
        {"Ds3", MusicalAlphabet::Ds3}, {"Eb3", MusicalAlphabet::Eb3}, {"E3", MusicalAlphabet::E3},
        {"F3", MusicalAlphabet::F3}, {"Fs3", MusicalAlphabet::Fs3}, {"Gb3", MusicalAlphabet::Gb3},
        {"G3", MusicalAlphabet::G3}, {"Gs3", MusicalAlphabet::Gs3}, {"Ab3", MusicalAlphabet::Ab3},
        {"A3", MusicalAlphabet::A3}, {"As3", MusicalAlphabet::As3}, {"Bb3", MusicalAlphabet::Bb3},
        {"B3", MusicalAlphabet::B3}, {"C4", MusicalAlphabet::C4}, {"Cs4", MusicalAlphabet::Cs4},
        {"Db4", MusicalAlphabet::Db4}, {"D4", MusicalAlphabet::D4}, {"Ds4", MusicalAlphabet::Ds4},
        {"Eb4", MusicalAlphabet::Eb4}, {"E4", MusicalAlphabet::E4}, {"F4", MusicalAlphabet::F4},
        {"Fs4", MusicalAlphabet::Fs4}, {"F4", MusicalAlphabet::F4}, {"Fs4", MusicalAlphabet::Fs4},
        {"Gb4", MusicalAlphabet::Gb4}, {"G4", MusicalAlphabet::G4}, {"Gs4", MusicalAlphabet::Gs4},
        {"Ab4", MusicalAlphabet::Ab4}, {"A4", MusicalAlphabet::A4}, {"As4", MusicalAlphabet::As4},
        {"Bb4", MusicalAlphabet::Bb4}, {"B4", MusicalAlphabet::B4}, {"C5", MusicalAlphabet::C5}, 
        {"Cs5", MusicalAlphabet::Cs5}, {"Db5", MusicalAlphabet::Db5}, {"D5", MusicalAlphabet::D5},
        {"Ds5", MusicalAlphabet::Ds5}, {"Eb5", MusicalAlphabet::Eb5}, {"E5", MusicalAlphabet::E5},
        {"F5", MusicalAlphabet::F5}, {"Fs5", MusicalAlphabet::Fs5}, {"Gb5", MusicalAlphabet::Gb5},
        {"G5", MusicalAlphabet::G5}, {"Gs5", MusicalAlphabet::Gs5}, {"Ab5", MusicalAlphabet::Ab5},
        {"A5", MusicalAlphabet::A5}, {"As5", MusicalAlphabet::As5}, {"Bb5", MusicalAlphabet::Bb5},
        {"B5", MusicalAlphabet::B5}, {"C6", MusicalAlphabet::C6}, {"Cs6", MusicalAlphabet::Cs6},
        {"Db6", MusicalAlphabet::Db6}, {"D6", MusicalAlphabet::D6}, {"Ds6", MusicalAlphabet::Ds6},
        {"Eb6", MusicalAlphabet::Eb6}, {"E6", MusicalAlphabet::E6}, {"F6", MusicalAlphabet::F6},
        {"Fs6", MusicalAlphabet::Fs6}, {"Gb6", MusicalAlphabet::Gb6}, {"G6", MusicalAlphabet::G6},
        {"Gs6", MusicalAlphabet::Gs6}, {"Ab6", MusicalAlphabet::Ab6}, {"A6", MusicalAlphabet::A6},
        {"As6", MusicalAlphabet::As6}, {"Bb6", MusicalAlphabet::Bb6}, {"B6", MusicalAlphabet::B6},
        {"C7", MusicalAlphabet::C7}, {"Cs7", MusicalAlphabet::Cs7}, {"Db7", MusicalAlphabet::Db7},
        {"D7", MusicalAlphabet::D7}, {"Ds7", MusicalAlphabet::Ds7}, {"Eb7", MusicalAlphabet::Eb7},
        {"E7", MusicalAlphabet::E7}, {"F7", MusicalAlphabet::F7}, {"Fs7", MusicalAlphabet::Fs7},
        {"Gb7", MusicalAlphabet::Gb7}, {"G7", MusicalAlphabet::G7}, {"Gs7", MusicalAlphabet::Gs7},
        {"Ab7", MusicalAlphabet::Ab7}, {"A7", MusicalAlphabet::A7}, {"As7", MusicalAlphabet::As7},
        {"Bb7", MusicalAlphabet::Bb7}, {"B7", MusicalAlphabet::B7}, {"C8", MusicalAlphabet::C8}
    };

    const std::map<int, MusicalInterval> intToInterval = {
        {0, MusicalInterval::PerfectUnison}, {1, MusicalInterval::MinorSecond}, {2, MusicalInterval::MajorSecond},
        {3, MusicalInterval::MinorThird}, {4, MusicalInterval::MajorThird}, {5, MusicalInterval::PerfectFourth},
        {6, MusicalInterval::Tritone}, {7, MusicalInterval::PerfectFifth}, {8, MusicalInterval::MinorSixth},
        {9, MusicalInterval::MajorSixth}, {10, MusicalInterval::MinorSeventh}, {11, MusicalInterval::MajorSeventh},
        {12, MusicalInterval::PerfectOctave}, {13, MusicalInterval::MinorNinth}, {14, MusicalInterval::MajorNinth},
        {15, MusicalInterval::MinorTenth}, {16, MusicalInterval::MajorTenth}, {17, MusicalInterval::PerfectEleventh},
        {18, MusicalInterval::AugmentedEleventh}, {19, MusicalInterval::PerfectTwelfth}, {20, MusicalInterval::MinorThirteenth},
        {21, MusicalInterval::MajorThirteenth}, {22, MusicalInterval::MinorFourteenth}, {23, MusicalInterval::MajorFourteenth},
        {24, MusicalInterval::DoubleOctave}
    };

    MusicalInterval MusicalNote::getInterval(const MusicalNote& Note1, const MusicalNote& Note2)
    {
        int interval = int(Note1.lr_note) - int(Note2.lr_note);
        if(interval<0)interval*=-1;
        auto it = intToInterval.find(interval);
        if(it!=intToInterval.end())
            return it->second;
        else return MusicalInterval::ERR;
    }

    void MusicalNote::operator= (const std::string noteStr)
    {
        auto it = stringToAlphabet.find(noteStr);
        if(it!=stringToAlphabet.end())
            this->lr_note = it->second;
        else return;
    }
    void MusicalNote::operator= (const MusicalAlphabet noteAlphabet)
    {
        this->lr_note = noteAlphabet;
    }

    bool MusicalNote::operator< (const MusicalNote& note)const
    {
        return this->lr_note < note.lr_note;
    }

    MusicalNote::MusicalNote(std::string noteStr)
    {
        auto it = stringToAlphabet.find(noteStr);
        if(it != stringToAlphabet.end())
        {
            lr_note = it->second;
        }
        else lr_note = MusicalAlphabet::C4;
    }

    MusicalNote::MusicalNote(MusicalAlphabet noteAlphabet)
    {
        lr_note = noteAlphabet;
    }
}