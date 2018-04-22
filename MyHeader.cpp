/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB # 25a    : Array Train Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/
#include "myHeader.h"

void DisplayHeader(const string &programmer, const string &mClass,
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
