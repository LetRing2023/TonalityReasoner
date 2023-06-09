#include "MusicalNote.h"
#include <map>
#include <vector>

namespace TONALITY_REASONER
{
    const std::map<std::string, MusicalAlphabet> stringToAlphabet = {
        {"A0", MusicalAlphabet::A0}, {"#A0", MusicalAlphabet::AsBb0}, {"bB0", MusicalAlphabet::AsBb0},
        {"B0", MusicalAlphabet::B0}, {"C1", MusicalAlphabet::C1}, {"#C1", MusicalAlphabet::CsDb1},
        {"bD1", MusicalAlphabet::CsDb1}, {"D1", MusicalAlphabet::D1}, {"#D1", MusicalAlphabet::DsEb1},
        {"bE1", MusicalAlphabet::DsEb1}, {"E1", MusicalAlphabet::E1}, {"F1", MusicalAlphabet::F1},
        {"#F1", MusicalAlphabet::FsGb1}, {"bG1", MusicalAlphabet::FsGb1}, {"G1", MusicalAlphabet::G1},
        {"#G1", MusicalAlphabet::GsAb1}, {"bA1", MusicalAlphabet::GsAb1}, {"A1", MusicalAlphabet::A1},
        {"#A1", MusicalAlphabet::AsBb1}, {"bB1", MusicalAlphabet::AsBb1}, {"B1", MusicalAlphabet::B1},
        {"C2", MusicalAlphabet::C2}, {"#C2", MusicalAlphabet::CsDb2}, {"bD2", MusicalAlphabet::CsDb2},
        {"D2", MusicalAlphabet::D2}, {"#D2", MusicalAlphabet::DsEb2}, {"bE2", MusicalAlphabet::DsEb2},
        {"E2", MusicalAlphabet::E2}, {"F2", MusicalAlphabet::F2}, {"#F2", MusicalAlphabet::FsGb2},
        {"bG2", MusicalAlphabet::FsGb2}, {"G2", MusicalAlphabet::G2}, {"#G2", MusicalAlphabet::GsAb2},
        {"bA2", MusicalAlphabet::GsAb2}, {"A2", MusicalAlphabet::A2}, {"#A2", MusicalAlphabet::AsBb2},
        {"bB2", MusicalAlphabet::AsBb2}, {"B2", MusicalAlphabet::B2}, {"C3", MusicalAlphabet::C3},
        {"#C3", MusicalAlphabet::CsDb3}, {"bD3", MusicalAlphabet::CsDb3}, {"D3", MusicalAlphabet::D3},
        {"#D3", MusicalAlphabet::DsEb3}, {"bE3", MusicalAlphabet::DsEb3}, {"E3", MusicalAlphabet::E3},
        {"F3", MusicalAlphabet::F3}, {"#F3", MusicalAlphabet::FsGb3}, {"bG3", MusicalAlphabet::FsGb3},
        {"G3", MusicalAlphabet::G3}, {"#G3", MusicalAlphabet::GsAb3}, {"bA3", MusicalAlphabet::GsAb3},
        {"A3", MusicalAlphabet::A3}, {"#A3", MusicalAlphabet::AsBb3}, {"bB3", MusicalAlphabet::AsBb3},
        {"B3", MusicalAlphabet::B3}, {"C4", MusicalAlphabet::C4}, {"#C4", MusicalAlphabet::CsDb4},
        {"bD4", MusicalAlphabet::CsDb4}, {"D4", MusicalAlphabet::D4}, {"#D4", MusicalAlphabet::DsEb4},
        {"bE4", MusicalAlphabet::DsEb4}, {"E4", MusicalAlphabet::E4}, {"F4", MusicalAlphabet::F4},
        {"#F4", MusicalAlphabet::FsGb4}, {"bG4", MusicalAlphabet::FsGb4}, {"G4", MusicalAlphabet::G4}, 
        {"#G4", MusicalAlphabet::GsAb4}, {"bA4", MusicalAlphabet::GsAb4}, {"A4", MusicalAlphabet::A4}, 
        {"#A4", MusicalAlphabet::AsBb4}, {"bB4", MusicalAlphabet::AsBb4}, {"B4", MusicalAlphabet::B4}, 
        {"C5", MusicalAlphabet::C5}, {"#C5", MusicalAlphabet::CsDb5}, {"bD5", MusicalAlphabet::CsDb5}, 
        {"D5", MusicalAlphabet::D5}, {"#D5", MusicalAlphabet::DsEb5}, {"bE5", MusicalAlphabet::DsEb5}, 
        {"E5", MusicalAlphabet::E5}, {"F5", MusicalAlphabet::F5}, {"#F5", MusicalAlphabet::FsGb5}, 
        {"bG5", MusicalAlphabet::FsGb5}, {"G5", MusicalAlphabet::G5}, {"#G5", MusicalAlphabet::GsAb5}, 
        {"bA5", MusicalAlphabet::GsAb5}, {"A5", MusicalAlphabet::A5}, {"#A5", MusicalAlphabet::AsBb5}, 
        {"bB5", MusicalAlphabet::AsBb5}, {"B5", MusicalAlphabet::B5}, {"C6", MusicalAlphabet::C6}, 
        {"#C6", MusicalAlphabet::CsDb6}, {"bD6", MusicalAlphabet::CsDb6}, {"D6", MusicalAlphabet::D6}, 
        {"#D6", MusicalAlphabet::DsEb6}, {"bE6", MusicalAlphabet::DsEb6}, {"E6", MusicalAlphabet::E6}, 
        {"F6", MusicalAlphabet::F6}, {"#F6", MusicalAlphabet::FsGb6}, {"bG6", MusicalAlphabet::FsGb6}, 
        {"G6", MusicalAlphabet::G6}, {"#G6", MusicalAlphabet::GsAb6}, {"bA6", MusicalAlphabet::GsAb6}, 
        {"A6", MusicalAlphabet::A6}, {"#A6", MusicalAlphabet::AsBb6}, {"bB6", MusicalAlphabet::AsBb6},
        {"B6", MusicalAlphabet::B6}, {"C7", MusicalAlphabet::C7}, {"#C7", MusicalAlphabet::CsDb7}, 
        {"bD7", MusicalAlphabet::CsDb7}, {"D7", MusicalAlphabet::D7}, {"#D7", MusicalAlphabet::DsEb7}, 
        {"bE7", MusicalAlphabet::DsEb7}, {"E7", MusicalAlphabet::E7}, {"F7", MusicalAlphabet::F7}, 
        {"#F7", MusicalAlphabet::FsGb7}, {"bG7", MusicalAlphabet::FsGb7}, {"G7", MusicalAlphabet::G7}, 
        {"#G7", MusicalAlphabet::GsAb7}, {"bA7", MusicalAlphabet::GsAb7}, {"A7", MusicalAlphabet::A7}, 
        {"#A7", MusicalAlphabet::AsBb7}, {"bB7", MusicalAlphabet::AsBb7}, {"B7", MusicalAlphabet::B7}, 
        {"C8", MusicalAlphabet::C8}
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

    std::string MusicalNote::toString(const MusicalAlphabet& note)
    {
        std::vector<std::string> ret;
        for(auto i : stringToAlphabet)
        {
            if(i.second==note)
                ret.push_back(i.first);
        }
        if(ret.size()==1)
            return ret[0];
        else return ret[0] + "/" + ret[1];
    }

    std::string MusicalNote::toString(const MusicalSignature& note)
    {
        std::vector<std::string> ret;
        for(auto i : stringToAlphabet)
        {
            if(i.second==MusicalAlphabet(note))
                ret.push_back(i.first.substr(0, i.first.length() - 1));
        }
        if(ret.size()==1)
            return ret[0];
        else return ret[0] + "/" + ret[1];
    }

    std::string MusicalNote::toString(const MusicalNote& note)
    {
        return toString(note.lr_note);
    }

    MusicalInterval MusicalNote::getInterval(const MusicalNote& Note1, const MusicalNote& Note2)
    {
        int interval = int(Note1.lr_note) - int(Note2.lr_note);
        if(interval<0)interval*=-1;
        auto it = intToInterval.find(interval);
        if(it!=intToInterval.end())
            return it->second;
        else return MusicalInterval::ERR;
    }

    MusicalInterval MusicalNote::getInterval(const MusicalSignature& Sig1, const MusicalSignature& Sig2)
    {
        MusicalAlphabet sig1 = MusicalAlphabet(int(Sig1));
        MusicalAlphabet sig2 = MusicalAlphabet(int(Sig2));
        if(sig1 > sig2)
            sig2 = MusicalAlphabet(int(sig2) + 12);
        return getInterval(MusicalNote(sig1), MusicalNote(sig2));
    }

    MusicalNote MusicalNote::getNote(const MusicalNote& note, const MusicalInterval& interval, bool sharpOrFlat)
    {
        if(interval==MusicalInterval::ERR)
            return note;
        int destination = int(note.lr_note);
        if(sharpOrFlat)
            destination += int(interval);
        else destination -= int(interval);
        return MusicalNote(MusicalAlphabet(destination));
    }

    MusicalSignature MusicalNote::getNote(const MusicalSignature& sig, const MusicalInterval& interval, bool sharpOrFlat)
    {
        if(interval==MusicalInterval::ERR)
            return sig;
        int destination = int(sig);
        if(sharpOrFlat)
            destination += int(interval);
        else destination -= int(interval);
        while(destination<0)
            destination += 12;
        if(destination>11)
            destination %= 12;
        return MusicalSignature(destination);
    }

    MusicalSignature MusicalNote::getSignature()const
    {
        return MusicalSignature(int(lr_note) % 12);
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