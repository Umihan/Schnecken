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
    while (n1.strecke < 20)
    {
        n1.krieche();
        cout << n1.toString() << endl;
    }
    Rennen newRace("Grand Prix de la Snail",100);
    newRace.addRennschnecke(n1);

    cout << newRace.name << endl;
    cout << newRace.anzahlSchnecken << endl;
    cout << newRace.teilnehmer[0].toString() << endl; 

 

    vector<Schnecke> Liste;
    Liste.push_back(n1);
    Liste.push_back(n1);
    n1.name="NEU";
    cout << "VEKTOR 1 " << Liste.at(0).toString()<<endl;
    cout << "VEKTOR 2 " << Liste.at(1).toString()<<endl;

    vector<Schnecke*> SListe;
    SListe.push_back(&n1);
    SListe.push_back(&n1);
    n1.name="ALT";
    cout << "VEKTOR 1 " << SListe.at(0)->toString()<<endl;
    cout << "VEKTOR 2 " << SListe.at(1)->toString()<<endl;
}
    
//=============================================================================
//                           END OF FILE
//=============================================================================
