//
// Created by usuario on 13/11/21.
//

#include <iostream>
#include "dictionary.h"
#include <fstream>
#include "letters_set.h"
#include <string>
#include <map>

using namespace std;

int main (int argc, char ** argv){


    Dictionary dictionary;
    LetterSet letterSet;
    string cadena_basura;

    ifstream ifstream1 (argv[1]);
    ifstream ifstream2(argv[2]);

    while (ifstream1){
        ifstream1 >> dictionary;
    }

    ifstream1.close();

    if (ifstream2){
        ifstream2 >> cadena_basura;
        ifstream2 >> cadena_basura;
        ifstream2 >> cadena_basura;
        ifstream2 >> letterSet;
    }

    ifstream2.close();


    vector<int> ocurrencias;
    vector<double> frecuencia;

    //vamos a sumar 32 a la letra del letterset para obtener su equivalente en minuscula
    for (map <char, LetterInfo>::iterator p = letterSet.begin(); p!=letterSet.end(); ++p){
        ocurrencias.push_back(dictionary.getOcurrences(tolower(p->first)));
        frecuencia.push_back((double) ocurrencias.back()/(double) dictionary.getTotalLetters());
    }

    //ahora imprimimos la informacion
    cout << "Letra"<< "\t"   << "FAbs." << "\t" <<"Frel." <<endl;

    /*
    map <char, LetterInfo>::iterator q = letterSet.begin();
    for (int i=1; i<letterSet.size(); i++){
        q++;
    }
    int i = 0;

    for (map <char, LetterInfo>::iterator p = letterSet.begin() ; p!=q; ++p){

        cout << p->first << "\t" << ocurrencias[i] << "\t" << frecuencia[i] <<endl;
        i++;


    }
    cout << q->first << "\t" << ocurrencias[i] << "\t" << frecuencia[i] ;
*/
    int i = 0;
    for (map <char, LetterInfo>::iterator p = letterSet.begin(); p!=letterSet.end(); ++p){
        cout << p->first << "\t" << ocurrencias[i] << "\t" << frecuencia[i] <<endl;
        i++;
    }



    return 0;



}