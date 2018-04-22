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

int FindFirstInstance(const int ARR[], int arrLen, int searchInt)
{
    int index;
    bool found;

    found = false;
    index = 0;

    while (!found && index < arrLen)
    {
        found = ARR[index] == searchInt;
        if (!found)
        {
            ++index;
        }
    }
    return index;
}

int FindOccurrencesInt(const int ARR[], int arrLen, int searchInt)
{
    int occurrences;
    occurrences = 0;

    // loop over collection
    for (int index = 0; index < arrLen; ++index)
    {
        // check if the item is equal to the search term
        if (ARR[index] == searchInt)
        {
            ++occurrences;
        }
    }

    return occurrences;

}

int FindString(const string ARR[], int arrLen, const string &SEARCH_STR)
{
    int index;
    bool found;

    found = false;
    index = 0;

    while (!found && index < arrLen)
    {
        found = ARR[index] == SEARCH_STR;
        if (!found)
        {
            ++index;
        }
    }
    return index;
}

int FindLargestInt(const int ARR[], int arrLen)
{
    int max;
    int item;
    max = 0;

    for (int index = 0; index < arrLen; ++index)
    {
        item = ARR[index];
        if (item > max)
        {
            max = item;
        }
    }
    return max;
}