/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO
 * STUDENT ID   : 1094998
 * Assignment #9: Intro to programming
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/15/2018
 ***************************************************************************/

#include "MyHeader.h"

/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO
 * STUDENT ID   : 1094998
 * Assignment #9: Intro to programming
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/15/2018
 ***************************************************************************/
#include "myHeader.h"


using namespace std;


void displayHeader(const string &programmer, const string &mClass,
                   const string &section, int num, const string &name,
                   char byType)
{
    cout << left;
    cout << "************************************************************\n";
    cout << "* PROGRAMMED BY : " << programmer << endl;
    cout << "* " << setw(14) << "CLASS" << ": " << mClass << endl;
    cout << "* " << setw(14) << "SECTION" << ": " << section << endl;
    switch (byType)
    {
        case 'l':
        case 'L':
            cout << "* LAB# " << setw(9) << num << ": " << name << endl;
            break;

        case 'a':
        case 'A':
            cout << "* ASSIGNMENT#" << setw(3) << num << ": " << name
                 << endl;
            break;
        default:
            cerr << "unrecognized type";
    }

    cout << "**********************************************************\n\n";
    cout << right;
}
