#include <iostream>
#include <string>
#include <fstream>

void printArt(string fileName) {
  string line = "";
  ifstream inFile;
  inFile.open("mj.txt");
  {
    while(getline(inFile,line)) {
      std::cout << line << std::endl;
    }
  }
  inFile.close();
}

