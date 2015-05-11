/****************************************
* NAME: CHRISTOPHER BOSEAK
* DATE: 5/9/2015
* DESCRIPTION: LAB6 - ALGORITHM APP
****************************************/
#include "fileManip.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>


using namespace std;


void fileManip::menuSelection(int x)
{

    /************************************************
    * PROCESSED BASED ON MENU INPUT
    *************************************************/

    //IF 1, WRITE FILE DATA TO ARRAYS AND SEARCH ARRAYS FOR 0
    if (x == 1)
    {
        writeFileToArray();
        findInFiles(0);
    }

    //IF 2, WRITE FILE DATA TO ARRAYS AND SEARCH ARRAYS FOR USER SPECIFIED VALUE
    if (x == 2)
    {
        int whatNum;
        cout << "What number would you like to search for?" << endl
            << "Number: ";
        cin >> whatNum;

        writeFileToArray();
        findInFiles(whatNum);
    }

    //IF 3, WRITE FILE DATA TO ARRAYS, SORT, AND WRITE TO NEW FILE
    if (x == 3)
    {
        writeFileToArray();
        sortInFiles();

    }

    //IF 4, WRITE FILE DATA TO ARRAY AND SEARCH FOR USER SPECIFIED VALUE
    if (x == 4)
    {
        in5.open("combined.txt");

        for(int i = 0; i < 115; i++)
        {
            in5 >> this->bigFile[i];
        }
        in5.close();

        int numToFind;

        cout << "Enter number to find: ";
        cin >> numToFind;

        int left1 = 0;
        int right1 = ((sizeof(this->bigFile)) / (sizeof(this->bigFile[1]))) - 1;
        int middle1 = (left1 + right1) / 2 - 1;
        int middleNum = bigFile[middle1];
        int t;

        if (numToFind > middleNum)
        {
            for(int p = middle1; p < middle1; p++)
                {
                    if ((bigFile[p]) = numToFind)
                    {
                        t = 1;
                    }
                }
        }
        else
        {
            for(int l = 0; l < middle1; l++)
            {
                if ((bigFile[l]) = numToFind)
                    {
                        t = 1;
                    }
            }
        }

        if (t = 1)
        {
            cout << numToFind << " has been found!" << endl;
        }

    }

    /**************************
        FOR TESTING PURPOSES -
        PRINTS OUT ARRAYS WITH
        IMPORTED FILE DATA

    for (int i; i < 20; i++)
    {
        cout << file1[i] << " ";
    }
    cout << "//" ;
    for (int i; i < 20; i++)
    {
        cout << file2[i] << " ";
    }
    cout << "//" ;
    for (int i; i < 20; i++)
    {
        cout << file3[i] << " ";
    }
    cout << "//" ;
    for (int i; i < 20; i++)
    {
        cout << file4[i] << " ";
    }
    ***************************/
}


/************************************************
* SEARCH FUNCTION
* SEARCHES FOR PARAMETER IN ARRAYS, PULLED FROM FILES
*************************************************/
void fileManip::findInFiles(int x)
{
    int found1 = 0 , found2 = 0 ,found3 = 0 ,found4 = 0 ;
    for (int i = 0; i < 20; i++)
    {
        if(file1[i] == x)
        {
            found1 = 1;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if(this->file2[i] == x)
        {
            found2 = 1;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if(this->file3[i] == x)
        {
            found3 = 1;
        }
    }
    for (int i = 0; i <20; i++)
    {
        if(this->file4[i] == x)
        {
            found4 = 1;
        }
    }

    //PRINTS OUT IF FOUND
    if(found1 == 1)
    {
        cout << "File1: *FOUND*"<< endl;
    }
    else if(found1 == 0)
    {
        cout << "File1: *NOT FOUND*" << endl;
    }
    if(found2 == 1)
    {
        cout << "File2: *FOUND*"<< endl;
    }
    else if(found2 == 0)
    {
        cout << "File2: *NOT FOUND*" << endl;
    }
    if(found3 == 1)
    {
        cout << "File3: *FOUND*"<< endl;
    }
    else if(found3 == 0)
    {
        cout << "File3: *NOT FOUND*" << endl;
    }
    if(found4 == 1)
    {
        cout << "File4: *FOUND*"<< endl;
    }
    else if(found4 == 0)
    {
        cout << "File4: *NOT FOUND*" << endl;
    }

}

/************************************************
* FUNCTION TO WRITE FILES TO ARRAYS
*************************************************/
void fileManip::writeFileToArray()
{
    in1.open("1.txt");
    in2.open("2.txt");
    in3.open("3.txt");
    in4.open("4.txt");
    if(!in1 || !in2 || !in3 || !in4)
    {
        cout << "Error, one of the files did not open properly!" << endl;

    }
    int i = 0;
    for (int x = 0; x < 20; x++)
    {
    in1 >> this->file1[i];
    i++;
    }
    in1.close();

    int q = 0;
    for (int x = 0; x < 20; x++)
    {
    in2 >> this->file2[q];
    q++;
    }
    in2.close();

    int w = 0;
    for (int x = 0; x < 20; x++)
    {
    in3 >> this->file3[w];
    w++;
    }
    in3.close();

    int z = 0;
    for (int x = 0; x < 20; x++)
    {
    in4 >> this->file4[z];
    z++;
    }
    in4.close();
}

/************************************************
* SORTS FROM FILES, VIA BUBBLE SORT
* COMBINES 4 ARRAYS TO 1 LARGE ARRAYS
*************************************************/
void fileManip::sortInFiles()
{
    //combine array with data from files so that it
    //can be easily sorted
    for(int a = 0; a < 20; a++)
    {
        this->combinedFiles[a] = file1[a];
    }
    for(int s = 0; s < 20; s++)
    {
        this->combinedFiles[s+20] = file2[s];
    }
    for(int d = 0; d < 20; d++)
    {
        this->combinedFiles[d+40] = file3[d];
    }
    for(int f = 0; f < 20; f++)
    {
        this->combinedFiles[f+60] = file4[f];
    }

    //bubble sort of combined array
    for(int i = 0; i < 100; i++)
    {
        for(int x = 0; x < 80; x++)
        {
            if(combinedFiles[x] < combinedFiles[x-1])
            {
                int z = combinedFiles[x];
                this->combinedFiles[x] = combinedFiles[x-1];
                this->combinedFiles[x-1] = z;
            }
        }
    }

    cout << "Please enter name of output file (no extension)" << endl
        << "Filename: ";
    cin >> nameIn;

    std::string nameInOut = nameIn + ".txt";
    ofstream outfile1;
    outfile1.open(nameInOut.c_str());

    for(int q = 0; q < 80; q++)
    {
        outfile1 << combinedFiles[q] << endl;
    }
}

