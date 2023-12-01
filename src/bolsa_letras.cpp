//
// Created by usuario on 12/11/21.
//

#include "letters_bag.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main(int argc, char ** argv){

    srand(time(NULL));

    LetterSet letterSet;
    ifstream ifstream1(argv[1]);
    string basura;

    if (ifstream1){
        for (int i=0; i<3; i++){
           ifstream1 >> basura;
        }
        ifstream1 >> letterSet;
    }

    LettersBag lettersBag (letterSet);


    int tam = lettersBag.size();

    for (int i=0; i<tam; ++i){
        cout << lettersBag.extractLetter() << endl;
    }

}
