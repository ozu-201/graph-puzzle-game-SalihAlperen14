//
// Created by ao024643 on 12/21/2023.
//

#include "Main.h"


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Graph.h>
using namespace std;
bool isConnected(std::string st1,std::string st2){// TO CHECK IF TWO STRINGS SHOULD BE CONNECTED
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
bool isReachable(string st1,string st2,list::Graph myGraph,vector<string> Words){
    int indexst1;
    int indexst2;
    for(int i = 0;i < Words.size();i++){
        if(Words[i] == st1){
            indexst1 = i;
        }
        if(Words[i] == st2){
            indexst2 = i;
        }
    }
    myGraph.breadthFirstSearch();// TO CHECK IF 2 VERTICES ARE CONNECTED

    return false;
}

int shortestPath(string st1,string st2,list::Graph myGraph,vector<string> Words){
    if(isReachable(st1,st2,myGraph,Words)){
        //RETURN CALCULATE THE NUMBER OF VERTICES USING DJIKSTRA.
    }
    else{
        return  0;
    }
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
}
    vector<string> Words(numberofwords);
    new_file.open("C:\\Users\\TEMP\\CLionProjects\\graph-puzzle-game-SalihAlperen14\\allWords.txt", ios::in);
    // Checking whether the file is open.
    if (new_file.is_open()) {
        string sa;
        int count = 0;
        // Read data from the file object and put it into a string.
        while (getline(new_file, sa)) {
            // Print the data of the string.
            Words[count] = sa;
            count++;
        }
        new_file.close();}
    list::Graph myGraph(numberofwords);
    for(int i = 0;i < numberofwords;i++){
        for(int q = i + 1;q < numberofwords;q++){
            if(isConnected(Words[i],Words[q])){
                myGraph.addEdge(i,q); // I CREATE GRAPH AND CREATE EDGES.
            }
        }
    }

    return 0;
}


