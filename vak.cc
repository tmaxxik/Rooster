#include <iostream>
#include "vak.h"

using namespace std;

void Vak::setNaam (string nm)
{
    naam = nm;
}

void Vak::setDocent (int dc)
{
    docent = dc;
}

void Vak::setTrack (int tr)
{
    tracks.push_back(tr);
}