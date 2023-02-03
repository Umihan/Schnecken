/******************************************************************************
 *
 *   @file:  main.cpp
 *   @brief:  sample code with simple "pass by reference"-funcion
 *   @author: CG
 *   Website:  https://...
 *   Support email:  ...
 *   @todo: ..test todo..
 *
 ******************************************************************************/
/*  License:
 */

// ****************************************************************************
// ****************************************************************************
//
//                            S A M P L E
//
// ****************************************************************************
// ****************************************************************************

#include <iostream>
#include <vector>

#include "Schnecke.h"
#include "Rennen.h"

using namespace std;

//=============================================================================
//                           MAIN
//=============================================================================
int main(int, char **)
{
    Schnecke n1("Mia Farrow", "Schwarze GiftWumme", 9.9);
    Schnecke n2("Elvis Presley", "Schwarze GiftWumme", 9.9);
    Schnecke n3("Sammy Davis Junior", "Schwarze GiftWumme", 9.9);
    Schnecke n4("Nat King Cole", "Schwarze GiftWumme", 9.9);
    Schnecke n5("Freddy Mercury", "Schwarze GiftWumme", 9.9);
    while (n1.strecke < 20)
    {
        n1.krieche();
        cout << n1.toString() << endl;
    }
    Rennen newRace("Grand Prix de la Snail", 100);
    newRace.addRennschnecke(n1);
    newRace.addRennschnecke(n2);
    newRace.addRennschnecke(n3);
    newRace.addRennschnecke(n4);
    newRace.addRennschnecke(n5);

    for (int i = 0; i < newRace.anzahlSchnecken; i++)
    {
        cout << newRace.name << endl;
        cout << newRace.anzahlSchnecken << endl;
        cout << newRace.teilnehmer[i].toString() << endl;
    }
    while (newRace.ermittleGewinner() < 0)
        newRace.lasseSchneckenKriechen();

    int gew = newRace.ermittleGewinner();
    if (gew < 0)
        cout << "Kein Gewinner!\n";
    else
        cout << "Schnecke " << newRace.teilnehmer[gew].toString() << " hat gewonnen!\n";

    if (newRace.removeRennschnecke("Miad Farrow"))
        cout << "OK" << endl;
    else
        cout << "Not Found!" << endl;

    newRace.init();
    newRace.durchfuehren();
    gew = newRace.ermittleGewinner();
    if (gew < 0)
        cout << "Kein Gewinner!\n";
    else
        cout << newRace.name << ": Schnecke " << newRace.teilnehmer[gew].toString() << " hat gewonnen!\n";

    vector<Schnecke> Liste;
    Liste.push_back(n1);
    Liste.push_back(n2);
    Liste.push_back(n3);
    Liste.push_back(n4);
    Liste.push_back(n5);

    for (vector<Schnecke>::iterator s = Liste.begin(); s != Liste.end(); s++)
    {
        if(s->name=="Sammy Davis Junior")
            Liste.erase(s);
    }
    n1.name = "NEU";
    cout << "VEKTOR 1 " << Liste.at(0).toString() << endl;
    cout << "VEKTOR 2 " << Liste.at(1).toString() << endl;

    vector<Schnecke *> SListe;
    SListe.push_back(&n1);
    SListe.push_back(&n1);
    n1.name = "ALT";
    cout << "VEKTOR 1 " << SListe.at(0)->toString() << endl;
    cout << "VEKTOR 2 " << SListe.at(1)->toString() << endl;
    Schnecke n7("HHH", "RRR", 2);

    vector<Schnecke>::iterator it;
    it = Liste.begin();
    it += 1;
    Liste.erase(it);
}

//=============================================================================
//                           END OF FILE
//=============================================================================
