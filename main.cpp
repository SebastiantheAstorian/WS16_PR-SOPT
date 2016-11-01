#include <iostream>
#include <cmath>
#include"Funktion.h"
#include <stdexcept>
using namespace std;

//SIEHE ANMERKUNG AM ENDE

// -----------------------DEFINITION ALLER IN DEN ANFORDERUNGEN VERLANGTEN FUNKTIONEN DIE VON DER KLASSE FUNKTION ABGELEITET WERDEN-----------------------------

// 2x^2+e^(-2x)
struct: Funktion {
    double value (double x) {
        return (2*x*x + exp(-2*x));
    }
    double x(double x){
        return (4*x-2*exp(-2*x));
    }
    double xx(double x) {
        return (4*exp(-2*x)+4);
    }
} f1;

// x^4/4-x^2+2x
struct: Funktion {
    double value (double x) {
        return ((x*x*x*x)/4-x*x+2*x);
    }
    double x (double x) {
        return (x*x*x-2*x+2);
    }
    double xx (double x) {
        return (3*x*x-2);
    }
} f2;

// x^5+5x^4+5x^3-5x^2-6x
struct: Funktion {
    double value (double x) {
        return(x*x*x*x*x+5*x*x*x*x+5*x*x*x-5*x*x-6*x);
    }
    double x (double x) {
        return(5*x*x*x*x+20*x*x*x+15*x*x-10*x-6);
    }
    double xx (double x) {
        return (20*x*x*x+60*x*x+30*x-10);
    }

} f3;

// x^4-16x^2-1
struct : Funktion {
    double value (double x) {
        return(x*x*x*x-16*x*x-1);
    }
    double x (double x) {
        return(4*x*x*x-32*x);
    }
    double xx (double x) {
        return(12*x*x-32);
    }
} f4;

//ln(|x^3+5x-5|)  [WILL NOT WORK]
struct : Funktion {
    double value (double x) {
        return (log(abs(x*x*x+5*x-5)));
    }
    double x (double x) {
        return ((3*x*x+5)/(x*x*x+5*x-5));
    }
    double xx (double x) {
        return ((-3*x*x*x*x-30*x-25)/(x*x*x*x*x*x+10*x*x*x*x-10*x*x*x+25*x*x-50*x+25));
    }
} f5;

//ln(|x^4-16x^2-1|)  [WILL NOT WORK]
struct : Funktion {
    double value (double x) {
        return (log(abs(x*x*x*x-16*x*x-1)));
    }
    double x (double x) {
        return ((4*x*x*x-32*x)/(x*x*x*x-16*x*x-1));
    }
    double xx (double x) {
        return ((-4*x*x*x*x*x*x+32*x*x*x*x-524*x*x+32)/(x*x*x*x*x*x*x*x-32*x*x*x*x*x*x+254*x*x*x*x+32*x*x+1));
    }
} f6;

// 3x^2+y^2-3xy-3x
struct : Funktion {
    double value(double x, double y) {
        return(3*x*x+y*y-3*x*y-3*x);
    }
    double x (double x, double y) {
        return (6*x-3*y-3);
    }
    double y (double x, double y) {
        return (2*y-3*x);
    }
    double xx (double x, double y) {
        return (6);
    }
    double xy (double x, double y) {
        return (-3);
    }
    double yx (double x, double y) {
        return (-3);
    }
    double yy (double x, double y) {
        return (2);
    }
} g1;

// 100*(y-x^2)^2 + (x-1)^2
struct : Funktion {
    double value(double x, double y) {
        return(100*(y-x*x)*(y-x*x)+(x-1)*(x-1));
    }
    double x (double x, double y) {
        return(400*x*x*x-400*x*y+2*x-2);
    }
    double y (double x, double y) {
        return(200*y-200*x*x);
    }
    double xx (double x, double y) {
        return(1200*x*x-400*y+2);
    }
    double xy (double x, double y) {
        return(-400*x);
    }
    double yx (double x, double y) {
        return(-400*x);
    }
    double yy (double x, double y) {
        return(200);
    }

} g2;

// y^4+2x^2 -3xy+1
struct : Funktion {
    double value(double x, double y) {
        return(y*y*y*y+2*x*x-3*x*y+1);
    }
    double x (double x, double y) {
        return(4*x-3*y);
    }
    double y (double x, double y) {
        return(4*y*y*y-3*x);
    }
    double xx (double x, double y) {
        return(4);
    }
    double xy (double x, double y) {
        return(-3);
    }
    double yx (double x, double y) {
        return(-3);
    }
    double yy (double x, double y) {
        return(12*y*y);
    }

} g3;

// |xy|+x^2+y^2-2x-4y [WONT WORK]
struct : Funktion {
    double value(double x, double y) {
        return(abs(x*y)+x*x+y*y-2*x-4*y);
    }
    double x (double x, double y) {
        return();
    }
    double y (double x, double y) {
        return();
    }
    double xx (double x, double y) {
        return();
    }
    double xy (double x, double y) {
        return();
    }
    double yx (double x, double y) {
        return();
    }
    double yy (double x, double y) {
        return();
    }

} g4;

// (x^2+y-11)^2 + (x+y^2-7)^2
struct : Funktion {
    double value(double x, double y) {
        return((x*x+y-11)*(x*x+y-11)+(x+y*y-7)*(x+y*y-7));
    }
    double x (double x, double y) {
        return(4*x*x*x+4*x*y-42*x+2*y*y-14);
    }
    double y (double x, double y) {
        return(2*x*x+4*x*y+4*y*y*y-26*y-22);
    }
    double xx (double x, double y) {
        return(12*x*x+4*x-42);
    }
    double xy (double x, double y) {
        return(4*x+4*y);
    }
    double yx (double x, double y) {
        return(4*x+4*y);
    }
    double yy (double x, double y) {
        return(4*x+12*y*y-26);
    }

} g5;
//----------------------------------------ENDE DER FUNKTIONSDEFINITIONEN--------------------------
int main(){
    try{
    int choice=0;
    cout << "W�hlen Sie die Art ihrer Funktion:"<< endl << endl << "(1) Eindimensional" << endl << "(2) Mehrdimensional"<< endl;
    cin >> choice;

    if(choice==1) { //Programmabarbeitung f�r eindimensionale Funktionen
        choice=0;
        cout<< "Waehlen Sie eine Funktion:" << endl << endl;
        cout << "(1) f1(x) = 2x^2 + e^(-2x)" << endl;
        cout << "(2) f2(x) = (x^4)/4 - x^2 + 2x" << endl;
        cout << "(3) f3(x) = x^5 + 5x^4 +5x^3 -5x^2 - 6x" << endl;
        cout << "(4) f4(x) = x^4 -16x^2 - 1" << endl;
        cout << "(5) f5(x) = ln(|x^3 + 5x -5|)" << endl;
        cout << "(6) f6(x) = ln(|x^4 - 16x^2 - 1|)" << endl;
        cout << "(7) (Eigene Funktion eintippen (Format: ------))" << endl;
        cin >> choice;
        cout << "Geben Sie die gew�nschte Rechengenauigkeit in Kommastellen an!" << endl;
        int precision=0;
        cin >> precision;
        if(precision<0)
                throw invalid_argument("Negative Pr�zision nicht erlaubt!");
        cout << "Geben Sie einen Startwert f�r x an." << endl;
        double startx =0;
        cin >> startx;

        switch (choice) { //Auswahl der Funktion
            case 1:  //do something
                break;

            case 2: //do something else
                break;




            default: throw invalid_argument("Keine passende Auswahl getroffen!");
                break;
        }

    }
    else if(choice==2) { // Programmabarbeitung f�r mehrdimensionale Funktionen
        choice=0;
        cout << "Waehlen Sie eine Funktion:" << endl << endl;
        cout << "(1) g1(x,y) = 3x^2 + y^2 - 3xy - 3x" << endl;
        cout << "(2) g2(x,y) = 100 * (y - x^2)^2 + (x - 1)^2 " << endl;
        cout << "(3) g3(x,y) = y^4 + 2x^2 - 3xy + 1" << endl;
        cout << "(4) g4(x,y) = |xy| + x^2 + y^2 - 2x - 4y" << endl;
        cout << "(5) g5(x,y) = (x^2 + < - 11)^2 + (x + y^2 - 7)^2" << endl;
        cin >> choice;
        cout << "Geben Sie die gew�nschte Rechengenauigkeit in Kommastellen an!" << endl;
        int precision=0;
        cin >> precision;
        if(precision<0)
                throw invalid_argument("Negative Pr�zision nicht erlaubt!");
        cout << "Geben Sie einen Startwert f�r x an." << endl;
        double startx =0;
        cin >> startx;
        cout << "Geben Sie einen Startwert f�r y an." << endl;
        double starty =0;
        cin >> starty;

        switch (choice) { //Auswahl der Funktion
            case 1:  //do something
                break;

            case 2: //do something else
                break;









            default: throw invalid_argument("Keine passende Auswahl getroffen!");
                break;
    }
    else {
        throw invalid_argument("Keine passende Auswahl getroffen! Tippen Sie die Zahl in Klammer ein, die Ihrem Wunschbefehl entspricht.");
    }
    } // Ende TRY
    catch(invalid_argument& a) {cerr << a.what() << endl;}
}   // Ende MAIN

/*
Die Funktionen haben die Variablen namen f1, f2 etc.
Es werden im Client zwei bzw. drei Variablen definiert die f�r die Berechnung ben�tigt werden
Der User gibt einerseits die Pr�zision in Kommastellen mit der Variable "int precision" an.
Weiters gibt er den Startwert/die Startwerte "double startx" und "double starty" an.

*/
