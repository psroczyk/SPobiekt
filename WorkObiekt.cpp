/**********************************************************************************/
/*     Program symulatora SP-841/AVR w wersji do zadañ z Symulatorem Obiektów     */
/**********************************************************************************/
#include "WorkObiekt.h"				// Definicje zmiennych i prototypy funkcji SP841
#include "SchematG.h"				// Definicje wejœæ i wyjœæ obiektu A
#include "Zadania.h"				// Zadania u¿ytkownika

void inicjuj(void)					// Inicjowanie programu (jednorazowo przy starcie)
{
}

void oblicz(void)					// Kod u¿ytkownika - wykonywany co wCykl [ms]
{ 
	L1=aK1; L2=aK2; L3=aK3; L4=aK4;	// Stan diody LED = Stan klawisza 
	
	H();						
}

void int_T0(void)					// Przerwanie od T0/T1/T2 wywo³ywane tIntr [ms]
{
	if(tim1)--tim1;
	if(tim2)--tim2;
	if(tim3)--tim3;
	if(tim4)--tim4;
	if(timNOC)--timNOC;
	if(timLCD)--timLCD;
	if(timPom)--timPom;
}

void WykresyPC()					// Opisy/wartoœci wykresów i zmiennych pomocniczych
{ 
}
