#include <iostream>
#include "TonalityReasoner.h"

using namespace std;
using namespace TONALITY_REASONER;

int main()
{
    TonalityReasoner reasoner;
    string opt;
    while(true)
    {
        cin>>opt;
        if(opt=="q")
            return 0;
        else 
        {
            if(reasoner.add(MusicalNote(opt), true))
                cout<<reasoner.output();
            else cout<<"Need more note."<<endl;
        }
    }
    return 0;
}