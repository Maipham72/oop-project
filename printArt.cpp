#include <iostream>
#include <string>
using namespace std;
#include <fstream>

void printArt(string fileName) {
  string line = "";
  ifstream inFile;
  inFile.open("mj.txt");
  {
    while(getline(inFile,line)) {
      cout << line << endl;
    }
  }
  inFile.close();
}

