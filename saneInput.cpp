/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO
 * STUDENT ID   : 1094998
 * Assignment #9: Intro to programming
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/15/2018
 ***************************************************************************/
#include "MyHeader.h"

/***************************************************************************
 * FUNCTION saneInputCinInt
 * --------------------------------------------------------------------------
 * Gets a sanity checked int from the user
 *  sanity check verifies the input is between (or equal to) the minimum
 *          and the maximum.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          minimum,
 *          maximum,
 *          prompt
 * POST-CONDITIONS
        ==> returns input : sanity checked input
 ***************************************************************************/
int SaneInputCinInt(int minimum,            // IN - minimum allowable value
                    int maximum,            // IN - maximum allowable value
                    const string &prompt)   // IN - user prompt
{
    string fstring;     // CALC & OUT    - formatted string
    bool valid;         // CALC          - input validity marker
    int input;          // IN, CALC&  OUT- user input
    do
    {
        cout << prompt;
        cin >> input;

        //process validity
        valid = input >= minimum && input <= maximum;
        if (!valid)
        {
            fstring += "Invalid input. Please enter a value between ";
            fstring += to_string(minimum);
            fstring += " and ";
            fstring += to_string(maximum);
            fstring += ".\n\n";
            cout << fstring;
        }
    } while (!valid);

    // flush the buffer
    cin.ignore(1000, '\n');
    // and return
    return input;
}

