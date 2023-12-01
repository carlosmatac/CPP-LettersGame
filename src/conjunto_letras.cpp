//
// Created by usuario on 10/11/21.
//
#include "letters_set.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main (int argc , char ** argv){

    LetterSet letterset;
    string word, cadena_basura;
    int puntuacion;

    ifstream ifstream1(argv[1]);
    word = argv[2];
    std::transform(word.begin(),word.end(),word.begin(), ::toupper);

    //inicializamos el letterset a través del archivo
    if (ifstream1){
        ifstream1 >> cadena_basura;
        ifstream1 >> cadena_basura;
        ifstream1 >> cadena_basura;
        ifstream1 >> letterset;
    }


    ifstream1.close();

    puntuacion = letterset.getScore(word);

    //imprimimos la puntuacion de la palabra por pantalla

    //cout << letterset <<endl;

    cout << puntuacion << endl;






}