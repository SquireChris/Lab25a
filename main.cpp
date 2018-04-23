/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB #8       : Array Train - Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/
#include <iostream>
#include <iomanip>
#include "MyHeader.h"
#include "functions.h"

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

int main()
{
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
    const char PROGRAMMER[] = "Joshua Salzedo, Chris Burrell";
    const char CLASS[] = "CS1A";
    const char SECTION[] = "MW: 8:00a - 12:00p";
    const int LAB_NUM = 25;
    const char LAB_NAME[] = "Array Train # 1";

    const int AR_LEN = 11;

    const string NAMES[] = {
            "zac",
            "Kasra",
            "Bas",
            "Sara",
            "Nick",
            "Delvin",
            "Justin",
            "Abe",
            "Jeremy",
            "Farah",
            "Maryan",
    };
    const int AGES[] = {
            22,
            75,
            19,
            21,
            18,
            12,
            19,
            5,
            62,
            21,
            21
    };
    const string PROMPT_FIND_INT = "Please enter an age you want to look "
                                   "for: ";


    double averageAges;
    int firstInstanceOfAgeIndex;
    int totalOccurrences;
    int nameIndex;
    int sumAges;
    int smallestAgeIndex;
    int largestAgeIndex;
    int searchInt;
    int foundNameIndex;
    string searchString;
    string fstring;
    string oldestPerson;
    string youngestPerson;

    DisplayHeader(PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);
    /************************************************************************
     * INPUT - reads two inputs from the user (firstNum & secondNum)
     ***********************************************************************/
    // compute the average of the AGES array
    averageAges = AverageIntArray(AGES, AR_LEN);

    // find an int to search for
    searchInt = SaneInputCinInt(0, 100, PROMPT_FIND_INT);

    // find the first instance of the searchInt
    firstInstanceOfAgeIndex = FindFirstInstance(AGES, AR_LEN, searchInt);

    // check if an instance was actually found
    if (firstInstanceOfAgeIndex != AR_LEN)
    {
        fstring = "you found ";
        fstring += NAMES[firstInstanceOfAgeIndex];
        fstring += '\n';

    }
    else
    {
        fstring = "Name not found on the list.\n";
    }
    cout << fstring;

    // find total occurences of the age
    totalOccurrences = FindOccurrencesInt(AGES, AR_LEN, searchInt);
    if (totalOccurrences != 0)
    {
        fstring = "there was a total of ";
        fstring += to_string(totalOccurrences);
        fstring += " occurrences of that age.\n";
    }
    else
    {
        fstring = "There were no occurences of that age.\n";
    }
    cout << fstring;


    cout << "enter name to search for: ";
    getline(cin, searchString);

    foundNameIndex = FindString(NAMES, AR_LEN, searchString);

    if (foundNameIndex == AR_LEN)
    {
        fstring = "Name ";
        fstring += searchString += " not found.";
    }
    else
    {
        fstring = "Found ";
        fstring += NAMES[foundNameIndex];
    }

    cout << fstring << endl;



    /************************************************************************
     * PROCESSING - describe processing here
     ***********************************************************************/

    /************************************************************************
     * OUTPUT- describe output here
     ***********************************************************************/
    return 0;
}

