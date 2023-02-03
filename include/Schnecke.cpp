#include <iostream>
#include "Schnecke.h"

using namespace std;

Schnecke::Schnecke()
{}
Schnecke::Schnecke(string name, string rasse, double maximalGeschwindigkeit)
{
    if(name.length()<1)
    {
        cout << " Fehler: Ungültiger Name"<<endl;
        return;
    }
    this->name=name;
    if(rasse.length()<1)
    {
        cout << " Fehler: Ungültige Rasse"<<endl;
        return;
    }
    this->rasse=rasse;
    if(maximalGeschwindigkeit<=0)
    {
        cout << " Fehler: Ungültige Maximalgeschwindigkeit"<<endl;
        return;
    }
    this->maximalGeschwindigkeit=maximalGeschwindigkeit;
    strecke=0;
    srand(time(0));
}

void Schnecke::krieche()
{
    rand();
    rand();
    double zahl=(rand()%(int)(maximalGeschwindigkeit*1000))/1000.0;

    strecke+=zahl;
}

string Schnecke::toString()
{
    string ausgabe="@@ " + name + " (" + rasse + ") -> Strecke: " + to_string( strecke) + "m @@";
    return ausgabe;
}