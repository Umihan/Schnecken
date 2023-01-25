/******************************************************************************
 * 
 *   @file:  Schnecke.h
 *   @brief:  Schnecke header file
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

class Schnecke
{
    private:
    
    
    public:
        string name;
        string rasse;
        double maximalGeschwindigkeit;
        double strecke;
        /**
         * Leerer Konstruktor
         * **/
        Schnecke()
        {}
/**
 * Konstruktor der Klasse, weist den Variablen Startwerte zu
 *
 * @param   string Name der Schnecke
 * @param   string Rasse der Schnecke
 * @param   double Maximalgeschwindigkeit
 *
 * 
 */
        Schnecke(string, string, double);
/**
 * Lässt die Schnecke eine zufällige Strecke kriechen. Zeiteinheit=1. Die Strecke darf nicht größer werden als die Maximalgeschwindigkeit es erlaubt
 *
 * @return  void    
 */
        void krieche();
        string toString();
};

// ============================================================================
//                           END OF FILE
// ============================================================================
