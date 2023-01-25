#include <iostream>

#include "Rennen.h"

Rennen::Rennen(string name, double laengeStrecke)
{
    if (name.length() < 1)
    {
        cout << " Fehler: Ungültiger Name" << endl;
        return;
    }
    this->name = name;

    if (laengeStrecke <= 0)
    {
        cout << " Fehler: Ungültige Laenge der Strecke" << endl;
        return;
    }
    this->laengeStrecke = laengeStrecke;
    this->anzahlSchnecken = 0;
}

void Rennen::addRennschnecke(Schnecke s)
{
    if (anzahlSchnecken < _maxTeilnehmer)
        teilnehmer[anzahlSchnecken++] = s;
    else
        cout << "Fehler: Das Rennen ist schon komplett!" << endl;
}