// Implementatie van klasse Rooster

#include <iostream>
#include <fstream>
#include "standaard.h"
#include "rooster.h"
#include "docent.h"
#include "vak.h"
using namespace std;

//*************************************************************************

// Default constructor
Rooster::Rooster ()
{
  // TODO: implementeer (zo nodig) deze constructor

}  // default constructor

//*************************************************************************

void Rooster::setDefaultRooster ()
{
  int nrTijdsloten = nrDagen * nrUrenPerDag;
  for (int i = 0; i < nrTijdsloten; i++)
    for (int j = 0; j < nrZalen; j++)
      rooster[i][j] = -1;
}

//*************************************************************************

bool Rooster::leesIn (const char* invoerNaam)
{
  ifstream input;
  int number;
  string str;
  int aantalTijdslotenPerDocent;
  
  //File openen
  input.open(invoerNaam);
  if (input.fail())
  {
    cout << "Deze file kan niet geopend worden!" << endl;
    return false;
  }

  input >> nrDagen;
  input >> nrUrenPerDag;
  input >> nrZalen;
  input >> nrDocenten;

  for (int i = 0; i < nrDocenten; i++)
  {
    Docent dc;
    input >> aantalTijdslotenPerDocent;
    for (int j = 0; j < aantalTijdslotenPerDocent; j++)
    {
      input >> number;
      dc.setTijdslot(number);
    }
    docenten.push_back(dc);
  }
  
  input >> nrVakken;
  for (int i = 0; i < nrVakken; i++)
  {
    Vak vk;
    int aantalTracks;
    input >> str;
    vk.setNaam(str);
    input >> number;
    vk.setDocent(number);
    input >> aantalTracks;
    for (int j = 0; j < aantalTracks; j++)
    {
      input >> number;
      vk.setTrack(number);
    }
    vakken.push_back(vk);
  }

  input.close();
  return true;
}  // leesIn

//*************************************************************************

void Rooster::drukAf ()
{
  // TODO: implementeer deze memberfunctie

}  // drukAf ()

//*************************************************************************

bool Rooster::bepaalRooster (int rooster[MaxNrTijdsloten][MaxNrZalen],
                        long long &aantalDeelroosters)
{
  // TODO: implementeer deze memberfunctie

  return true;

}  // bepaalRooster

//*************************************************************************

bool Rooster::bepaalMinRooster (int rooster[MaxNrTijdsloten][MaxNrZalen],
                        long long &aantalDeelroosters)
{
  // TODO: implementeer deze memberfunctie

  return true;

}  // bepaalMinRooster
  
//*************************************************************************

void Rooster::drukAfRooster (int rooster[MaxNrTijdsloten][MaxNrZalen])
{
  // TODO: implementeer deze memberfunctie

}  // drukAfRooster

//*************************************************************************

void Rooster::bepaalRoosterGretig (int rooster[MaxNrTijdsloten][MaxNrZalen])
{
  // TODO: implementeer deze functie

}  // bepaalRoosterGretig

