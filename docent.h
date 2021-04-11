// Definitie van klasse Docent

#ifndef DocentHVar  // voorkom dat dit bestand meerdere keren
#define DocentHVar  // ge-include wordt

#include <vector>
using namespace std;

class Docent
{
    public:
        void setTijdslot (int tijd);



    private:
        vector <int> tijdsloten;

};





#endif
