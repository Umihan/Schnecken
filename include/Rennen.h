/******************************************************************************
 *
 *   @file:  Rennen.h
 *   @brief:  Rennen header file
 *   Website:
 *   Support email:
 *
 ******************************************************************************/
/*  License:
 */

#pragma once

#include <iostream>

using namespace std;

// ============================================================================
//                            Project Parameters
// ============================================================================

// ============================================================================
//                            Macros
// ============================================================================

// ============================================================================
//                            Globals/Enums/Typedefs/Structs
// ============================================================================

// ============================================================================
//                            Functions
// ============================================================================
#include "Schnecke.h"

class Rennen
{
private:
        static const int _maxTeilnehmer = 10;                   // Maximale Teilnehmerzahl eines Rennens (ist konstant, wenn man ein Array verwendet)

public:
        string name;
        int anzahlSchnecken;
        Schnecke teilnehmer[_maxTeilnehmer];
        double laengeStrecke;
        /**
         * StandardKonstruktor
         */
        Rennen()
        {}
        Rennen(string name, double laengeStrecke);
        /**
         * Fügt dem Rennen eine Schnecke hinzu
         *
         * @return  bool    true, wenn die Schnecke hinzugefügt wurde, false, wenn es zuviel Schnecken wären
         */
        bool addRennschnecke(Schnecke s);
        /**
         * Sucht die angegebene Schnecke und entfernt sie aus der Liste
         *
         * @return  bool    Zeigt den Erfolg beim Entfernen an
         */
        bool removeRennschnecke(string name);

        /**
         * Ermittelt den Gewinner eines Rennens
         *
         * @return  Position im Array der Schnecke, die gewonnen hat. Falls kein Gewinner -> -1
         */
        int ermittleGewinner();

        /**
         * Lässt alle Schnecken einen Turnus kriechen
         *
         * @return  void    
         */
        void lasseSchneckenKriechen();

        /**
         * Führt ein Rennen durch, bis ein Sieger ermittelt wurde
         *
         * @return 
         */
        void durchfuehren();

       /**
        * @brief  Initialisiert ein neues Rennen
        * @note   Setzt die Strecke aller Teilnehmer auf 0
        * @retval 
        */
        void init();
};

// ============================================================================
//                           END OF FILE
// ============================================================================
