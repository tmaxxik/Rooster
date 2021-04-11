// Definitie van klasse Vak

#ifndef VakHVar  // voorkom dat dit bestand meerdere keren
#define VakHVar  // ge-include wordt

class Vak
{
    public:
        void setNaam (string nm);
        void setDocent (int dc);
        void setTrack (int tr);


    private:
        string naam;
    
        int docent;
        vector <int> tracks;



};





#endif
