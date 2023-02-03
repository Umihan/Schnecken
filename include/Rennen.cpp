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

bool Rennen::addRennschnecke(Schnecke s)
{
    if (anzahlSchnecken < _maxTeilnehmer)
        teilnehmer[anzahlSchnecken++] = s;
    else
    {
        cout << "Fehler: Das Rennen ist schon komplett!" << endl;
        return false;
    }
    return true;
}

bool Rennen::removeRennschnecke(string name)
{
    bool gefunden = false;
    for (int i = 0; i < anzahlSchnecken && gefunden == false; i++)
        if (teilnehmer[i].name == name)
        {
            gefunden = true;
            for (int j = i; j < anzahlSchnecken - 1; j++)
            {
                teilnehmer[j] = teilnehmer[j + 1];
            }
            anzahlSchnecken--;
        }
    return gefunden;
}

int Rennen::ermittleGewinner()
{
    for (int i = 0; i < anzahlSchnecken; i++)
        if (teilnehmer[i].strecke > laengeStrecke)
            return i;
    return -1;
}

void Rennen::lasseSchneckenKriechen()
{
    for (int i = 0; i < anzahlSchnecken; i++)
        teilnehmer[i].krieche();
}

void Rennen::durchfuehren()
{
    if (anzahlSchnecken < 1)
        cout << "Zu wenig Schnecken für ein Rennen!!" << endl;
    else
        while (ermittleGewinner() < 0)
            lasseSchneckenKriechen();
}

void Rennen::init()
{
        for (int i = 0; i < anzahlSchnecken; i++)
        teilnehmer[i].strecke=0;
}