//
// Created by usuario on 13/11/21.
//

#include <iostream>
#include "dictionary.h"
#include <fstream>
#include <vector>

using namespace std;


int main (int argc, char ** argv){

    Dictionary dictionary;
    ifstream ifstream1(argv[1]);
    vector<string> vector;

    while (ifstream1){
        ifstream1 >> dictionary;
    }

    ifstream1.close();

    vector = dictionary.wordsOfLenght(stoi(argv[2]));

    cout << "Palabras de longitud "<< argv[2] <<endl;

    for (int i=0; i<vector.size(); ++i){
        cout << vector[i] << endl;
    }


}