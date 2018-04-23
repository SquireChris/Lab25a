/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB #8       : Array Train - Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/

#include "functions.h"

int SumIntArray(const int ARR[], int arrLen)
{
    int sum;
    sum = 0;

    // sanity check
    if (arrLen > 0)
    {
        // loop over items in collection
        for (int index = 0; index < arrLen; ++index)
        {
            // and accumulate them
            sum += ARR[index];
        }
    }
    return sum;
}

double AverageIntArray(const int ARR[], int arrLen)
{
    // define
    int sum;
    double average;

    //initialize
    average = 0.0;

    // sanity check
    if (arrLen > 0)
    {
        // loop over and add all elements to the accumulator `sum`
        sum = SumIntArray(ARR, arrLen);
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
    int maxIndex;
    int item;

    max = 0;
    maxIndex = arrLen;

    for (int index = 0; index < arrLen; ++index)
    {
        item = ARR[index];
        if (item > max)
        {
            max = item;
            maxIndex = index;
        }
    }
    return maxIndex;
}

int FindSmallestInt(const int ARR[], int arrLen)
{
    // declare
    int min;
    int item;
    int minIndex;

    //Initialize
    min = 1000;
    minIndex = arrLen;

    for (int index = 0; index < arrLen; ++index)
    {
        item = ARR[index];
        if (item < min)
        {
            min = item;
            minIndex = index;
        }
    }
    return minIndex;
}