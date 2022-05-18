#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int** return2dArray(unsigned height, unsigned width)
{
    int** array2D = 0;
    array2D = new int*[height];

    for (int h = 0; h < height; h++)
    {
        array2D[h] = new int[width];

        for (int w = 0; w < width; w++)
        {
            // fill in some initial values
            // (filling in zeros would be more logic, but this is just for the example)
            array2D[h][w] = w + width * h;
        }
    }

    return array2D;
}

//switch case
void switchCase(int num)
{
    switch (num)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    default:
        cout << "default" << endl;
        break;
    }
}


string dataTypes[6][4]={
        {"short", "2 Byte", "-32.768 bis 32.767", "kleine Zahlen, Zähler, Schleifensteuerung"},
        {"int", "2 Byte", "-2.147.483.648 bis 2.147.483.647", "große Zahlen, Zähler, Schleifensteuerung"},
        {"long", "4 Byte", "-2.147.483.648 bis 2.147.483.647", "sehr große Zahlen, statistische Grundgesamtheiten"},
        {"float", "4 Byte", "3.40*10^-45 bis 3.40*10^38", "wissenschaftlich, 7-stellige Genauigkeit"},
        {"double", "8 Byte", "4.9*10^-324 bis 1.8*10^308", "wissenschaftlich, 16-stellige Genauigkeit"},
        {"char", "1 Byte","-128 bis 127", "ein beliebiges Unicode-Zeichenretu"}
};


string manipulators[16][2]={
        {"setw(int n)",	"Festlegung der Feldbreite (gilt nur für die nächste Einfügeoperation <<)"},
        {"setfill(char)",	"Festlegung des Füllzeichens"},
        {"left",	"linksbündig"},
        {"right",	"rechtsbündig"},
        {"scientific",	"Exponentialdarstellung"},
        {"fixed",	"Gleitpunktdarstellung"},
        {"showpoint",	"der Dezimalpunkt bei einer Kommazahl wird immer dargestellt"},
        {"showbase",	"vor Ganzzahlen Setzung einer führenden „0“ im oct, „0X“ im hex"},
        {"showpos",	"Anzeige des positiven Vorzeichens"},
        {"uppercase",	"Großbuchstaben"},
        {"setprecision(int n)",	"Gleitkommagenauigkeit bzw. Anzahl der Nachkommastellen"},
        {"dec, hex, oct",	"Umwandlung in die Basis des entsprechenden Zahlensystems"},
        {"no…(Manipulatorname)",	"Zurücksetzen der Einstellungen"},
        {"uppercase und nouppercase","Hiermit werden der Exponent bei einer Gleitkommazahl, "
                                     "sowie das X bei Hexadezimalzahlen einer Ganzzahldarstellung in "
                                     "Groß- bzw. Kleinbuchstaben dargestellt."},
        {"setprecision(int n)","Dieser Manipulator in Verbindung mit der Kombination:\n"
                               "- fixed: stellt eine Zahl dar durch (Stellen vor dem Komma, Dezimalpunkt, Stellen nach dem Komma)\n"
                               "- scientific: (wissenschaftliches Format) stellt den Wert mit einer Stelle vor dem Komma und einem Exponenten dar\n"},
        {{"boolalpha and noboolalpha" },{"Ausgabeformat von Werten des Datentyps bool kann mit dem Manipulator boolalpha "
                                         "auf alphanumerisch umgesetzt, und mit noboolalpha wieder zurückgesetzt werden."}}
};


void terniaerOperator(int a, int b, int c){
    int result = a < b ? (a < c ? a : c) : (b < c ? b : c);
    cout << result << endl;
}


//a method that returns an array of strings
string *getArray(){
    return dataTypes[0];
}



void usingAllIoManip(){
    cout<< "using all io manipulators" << endl;
    cout << setw(10) << "Name";

}

int main(){
    cout <<getArray()[0] << endl;
    dataTypes[1][0] = "kekW";
    cout << dataTypes[1][0] << endl;
    cout <<  return2dArray(3,4)[1][2]<< endl;
    return 0;
}

