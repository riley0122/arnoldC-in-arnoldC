#include <iostream>
#include "input.h"

using namespace std;

int main(int argc, char *argv[]){
    if(argc < 2) { cout << "No input file!" << endl; }
    getFile(argv[1]);
    return 0;
}