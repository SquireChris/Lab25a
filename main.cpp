/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO
 * STUDENT ID   : 1094998
 * LAB #8       : Intro to programming
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 03/05/2018
 ***************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
/****************************************************************************
 * Intro to programming
 * --------------------------------------------------------------------------
 * This program will output the sum of two numbers
 * --------------------------------------------------------------------------
 * INPUT:
 *  reads in two inputs from the user (firstNum & secondNum)
 *
 * OUTPUT:
 *  the inputs and the sum of thw two inputs in the fo
 ***************************************************************************/

int main() {
/****************************************************************************
 * CONSTANTS
 * --------------------------------------------------------------------------
 * OUTPUT - USED FOR CLASS HEADING
 * --------------------------------------------------------------------------
 * PROGRAMMER   :   Programmer's Name
 * CLASS        :   students course
 * SECTION      :   Class Days and Times
 * LAB_NUM      :   Lab Number
 * LAB_NAME     :   Title of the lab
 * *************************************************************************/
    const char PROGRAMMER[]     = "Joshua Salzedo";
    const char CLASS[]          = "CS1A";
    const char SECTION[]        = "MW: 7:30a - 12:00p";
    const int LAB_NUM           = 10;
    const char LAB_NAME[]         = "Intro to programming";

    int firstNum;   // IN. CALC & OUTPUT    - first user input
    int secondNum;  // IN. CALC & OUTPUT    - second user input
    int sum;        // CALC & OUTPUT        - contains the result of the sum
                    // of two  inputs

    //OUTPUT - class heading
    cout << left;
    cout << "************************************************************\n";
    cout << "* PROGRAMMED BY : "    << PROGRAMMER << endl;
    cout << "* "   <<  setw(14)    << "CLASS"   <<  ": " << CLASS   <<  endl;
    cout << "* "   <<  setw(14)    << "SECTION" <<  ": " << SECTION <<  endl;
    cout << "* LAB# "   << setw(9) << LAB_NUM  << ": " << LAB_NAME  <<  endl;
    cout << "***********************************************************n\n";
    cout << right;
    /************************************************************************
     * INPUT - reads two inputs from the user (firstNum & secondNum)
     ***********************************************************************/

    /************************************************************************
     * PROCESSING - describe processing here
     ***********************************************************************/

    /************************************************************************
     * OUTPUT- describe output here
     ***********************************************************************/
    return 0;
}

