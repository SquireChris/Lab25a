/****************************************************************************
 * AUTHOR       : JOSHUA SALZEDO
 * STUDENT ID   : 1094998
 * Assignment #9: Intro to programming
 * CLASS        : CS1A
 * SECTION      : MW: 8AM
 * DUE DATE     : 04/15/2018
 ***************************************************************************/

#ifndef MY_HEADER_H_
#define MY_HEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayHeader(const string &programmer, const string &mClass,
                   const string &section, int num,
                   const string &name, char byType = 'L');

#endif /* functions */
