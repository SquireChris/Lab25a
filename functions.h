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

double AverageIntArray(const int arr[], int arrLen);
int FindFirstInstance(const int ARR[], int arrLen, int searchInt);
int FindOccurrencesInt(const int ARR[], int arrLen, int searchInt);
int FindLargestInt(const int ARR[], int arrLen);
int FindString(const string ARR[], int arrLen, const string &SEARCH_STR);


#endif /* functions */
