/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB #8       : Array Train - Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <string>

using namespace std;

/***************************************************************************
 * AverageIntArray
 *      Outputs the average of the elements of the array
 *          ==> returns index: the position of the item's first occurrence
 ***************************************************************************/
double AverageIntArray(const int ARR[], int arrLen);

/***************************************************************************
 * FindFirstInstance
 *      Outputs the index the first time input integer occurs within the array
 *          ==> returns index: the position of the item's first occurrence
 ***************************************************************************/
int FindFirstInstance(const int ARR[], int arrLen, int searchInt);

/***************************************************************************
 * FindOccurrencesInt
 *      Outputs the number of times an int occurs within the input array
 *          ==> returns occurrences: the number of times an int occurs
 ***************************************************************************/
int FindOccurrencesInt(const int ARR[], int arrLen, int searchInt);

/***************************************************************************
 * FindLargestInt
 *      Outputs the index of the largest element within the input array
 *          ==> returns minIndex: largest element's index
 ***************************************************************************/
int FindLargestInt(const int ARR[], int arrLen);

/***************************************************************************
 * FindString
 *      Outputs the index of the searched string within an array
 *          ==> returns Index: the index of the searched name
 ***************************************************************************/
int FindString(const string ARR[], int arrLen, const string &SEARCH_STR);

/***************************************************************************
 * FindSmallestInt
 *
 *      Outputs the index of the smallest element within the input array
 *          ==> returns minIndex: smallest element's index
 ***************************************************************************/
int FindSmallestInt(const int ARR[], int arrLen);

/***************************************************************************
 * SumIntArray
 *      Outputs the sum of all elements within an integer array
 *
 *      ==> returns sum : sum of array
 ***************************************************************************/
int SumIntArray(const int ARR[], int arrLen);


#endif /* functions */
