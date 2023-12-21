//
// Created by ao024643 on 12/21/2023.
//

#include "Main.h"


#include <iostream>
#include <string>
#include <fstream>
using namespace std;
bool isConnected(std::string st1,std::string st2 ){
    bool checker = true;
    if(st1.length() != st2.length()){
        checker = false;
    }
    else{
        int counter = 0;
        for(int i = 0;i < st1.length() ;i++){
            if(st1[i] == st2[i]){
                counter++;
            }
        }
        if(counter != st1.length() - 1){
            checker = false;
        }
    }
    return checker;
}
int main() {
    fstream new_file;
    int numberofwords = 0;
    new_file.open("C:\\Users\\TEMP\\CLionProjects\\graph-puzzle-game-SalihAlperen14\\allWords.txt", ios::in);
    // Checking whether the file is open.
    if (new_file.is_open()) {
        string sa;
        // Read data from the file object and put it into a string.
        while (getline(new_file, sa)) {
            // Print the data of the string.
            numberofwords++;
        }
        new_file.close();
    return 0;
}

}


