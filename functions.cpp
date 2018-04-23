/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB #8       : Array Train - Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/

#include "functions.cpp.h"

/***************************************************************************
 * FUNCTION SumIntArray
 * --------------------------------------------------------------------------
 * Outputs the sum of all elements within an integer array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 * POST-CONDITIONS
 *      ==> returns sum
 ***************************************************************************/
int SumIntArray(const int ARR[], // IN - integer array
                int arrLen)      // IN - Array length
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
/***************************************************************************
 * FUNCTION AverageIntArray
 * --------------------------------------------------------------------------
 * Outputs the average of the elements of the array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 *          searchInt
 * POST-CONDITIONS
 *      ==> returns index: the position of the item's first occurrence
 ***************************************************************************/
double AverageIntArray(const int ARR[], // IN - integer array
                       int arrLen)      // IN - Array length
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
/***************************************************************************
 * FUNCTION FindFirstInstance
 * --------------------------------------------------------------------------
 * Outputs the index the first time input integer occurs within the array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 *          searchInt
 * POST-CONDITIONS
 *      ==> returns index: the position of the item's first occurrence
 ***************************************************************************/
int FindFirstInstance(const int ARR[], // IN - integer array
                      int arrLen,      // IN - length of array
                      int searchInt)   // IN - int to search for
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
/***************************************************************************
 * FUNCTION FindOccurrencesInt
 * --------------------------------------------------------------------------
 * Outputs the number of times an int occurs within the input array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 *          searchInt
 * POST-CONDITIONS
 *      ==> returns occurrences: the number of times an int occurs
 ***************************************************************************/
int FindOccurrencesInt(const int ARR[], // IN - integer array
                       int arrLen,      // IN - length of array
                       int searchInt)   // IN - int to search for
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

/***************************************************************************
 * FUNCTION FindString
 * --------------------------------------------------------------------------
 * Outputs the index of the searched string within an array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 *          SEARCH_STR
 * POST-CONDITIONS
 *      ==> returns Index: the index of the searched name
 ***************************************************************************/
int FindString(const string ARR[],             // IN - integer array
               int arrLen,                  // IN - Array length
               const string &string1)   // IN - string to search for
{
    int index;
    bool found;

    found = false;
    index = 0;

    while (!found && index < arrLen)
    {
        found = ARR[index] == string1;
        if (!found)
        {
            ++index;
        }
    }
    return index;
}
/***************************************************************************
 * FUNCTION FindLargestInt
 * --------------------------------------------------------------------------
 * Outputs the index of the largest element within the input array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 * POST-CONDITIONS
 *      ==> returns minIndex: largest element's index
 ***************************************************************************/
int FindLargestInt(const int ARR[], // IN - integer array
                   int arrLen)      // IN - Array length
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
/***************************************************************************
 * FUNCTION FindSmallestInt
 * --------------------------------------------------------------------------
 * Outputs the index of the smallest element within the input array
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters must have defined values:
 *          ARR
 *          arrLen
 * POST-CONDITIONS
 *      ==> returns minIndex: smallest element's index
 ***************************************************************************/
int FindSmallestInt(const int ARR[], // IN - integer array
                    int arrLen)      // IN - Array length
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