/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB #8       : Array Train - Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/

#include "functions.h"

double AverageIntArray(const int arr[], int arrLen)
{
    // define
    int sum;
    double average;

    //initialize
    sum = 0;
    average = 0.0;

    // divide by zero check
    if (arrLen != 0)
    {
        // loop over and add all elements to the accumulator `sum`
        for (int index = 0; index < arrLen; ++index)
        {
            sum += arr[index];
        }
        average = double(sum) / arrLen;
    }
    return average;
}

int FindFirstInstance(const int arr[], int arrLen, int searchInt)
{
    int index;
    bool found;

    found = false;
    index = 0;

    while (!found && index < arrLen)
    {
        found = arr[index] == searchInt;
        if (!found)
        {
            ++index;
        }
    }
    return index;
}

int FindOccurrencesInt(const int arr[], int arrLen, int searchInt)
{
    int occurrences;
    occurrences = 0;

    // loop over collection
    for (int index = 0; index < arrLen; ++index)
    {
        // check if the item is equal to the search term
        if (arr[index] == searchInt)
        {
            ++occurrences;
        }
    }

    return occurrences;

}