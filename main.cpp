#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    if(argc < 2) { cout << "No input file!" << endl; }
    ifstream inputFile(argv[1]);
    string line;
    vector<string> lines;
    if(inputFile.is_open()){
        while (getline(inputFile, line, '"'))
        {
            lines.push_back(line);
        }
    }
    inputFile.close();
    return 0;
}