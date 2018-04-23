/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO, Chris Burrell
 * LAB # 25a    : Array Train Set # 1
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/23/2018
 ***************************************************************************/

#ifndef MY_HEADER_H_
#define MY_HEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void DisplayHeader(const string &programmer, const string &mClass,
                   const string &section, int num,
                   const string &name, char byType = 'L');

/***************************************************************************
 * SaneInputCinInt
 *      Gets a sanity checked int from the user
 *
 *      sanity check verifies the input is between (or equal to) the minimum
 *          and the maximum.
 *
 *      ==> returns input : sanity checked input
 ***************************************************************************/
int SaneInputCinInt(int minimum,            // IN - minimum allowable value
                    int maximum,            // IN - maximum allowable value
                    const string &prompt);  // IN - user prompt

#endif /* functions */
