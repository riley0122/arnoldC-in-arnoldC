#include "input.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector<string> getFile(string filename){
    ifstream inputFile(filename);
    string line;
    vector<string> lines;
    if(inputFile.is_open()){
        while (getline(inputFile, line, '"'))
        {
            lines.push_back(line);
        }
    }
    inputFile.close();
    return lines;
}