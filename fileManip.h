/****************************************
* NAME: CHRISTOPHER BOSEAK
* DATE: 5/9/2015
* DESCRIPTION: LAB6 - ALGORITHM APP
****************************************/
#ifndef FILEMANIP_H
#define FILEMANIP_H

#include <fstream>
#include <vector>

class fileManip
{
    public:
        fileManip(){ };
        void menuSelection(int);
        void findInFiles(int);
        void writeFileToArray();
        void sortInFiles();
    protected:
    private:
        int file1[20],file2[20],file3[20],file4[20],combinedFiles[80], bigFile[115];
        std::ifstream in1;
        std::ifstream in2;
        std::ifstream in3;
        std::ifstream in4;
        std::ifstream in5;
        std::string nameIn;
};

#endif // FILEMANIP_H
