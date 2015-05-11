/****************************************
* NAME: CHRISTOPHER BOSEAK
* DATE: 5/9/2015
* DESCRIPTION: LAB6 - ALGORITHM APP
****************************************/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>
#include "fileManip.h"
using namespace std;


int main()
{
    fileManip fm;

    /************************************************
    * MAIN MENU
    *************************************************/
    int choiceIn;

    cout << "\nPlease select from the following:" << endl
        << "1. Search files for 0" << endl
        << "2. Search files for number of your choice" << endl
        << "3. Sort all files and write to file" << endl
        << "4. Search, via binary search, for the number" << endl
        << "   of your choice" << endl
        << "\nChoice: ";
    cin >> choiceIn;


    fm.menuSelection(choiceIn);


}

