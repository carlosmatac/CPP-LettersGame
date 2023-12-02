# CPP-NumbersAndLettersGame
The letters game consists of given a random set of letters you have to build words from a dictionary. The longest the word, the more points you earn.
/*! \mainpage Juego de las Letras

# Introducción
En esta practica hemos desarrollado una serie de TDA para poder jugar al juego de cifras y letras. En concreto a la parte de letras.
Este juego consiste en formas palabras dadas unas letras. Tiene dos modalidades, obtener mayor puntuación cuanto más larga es la palabra o
según una puntuación asignada a cada letra. Para ello hemos implementado la clase LetterSet que almacena las letras con las repeticiones
que se pueden producir durante una partida y con su puntuación. Un template llamado Bag, con un contenedor subyacente de tipo vector. Este
TDA abstracto nos permite trabajar con una colección de elementos que permite la extracción de elementos de forma aleatoria sin reemplazamiento.
Una clase llamada LettersBag con un contenedor subyacente de tipo Bag de char. Este TDA almacena un conjunto de chars utilizado en el juego de letras.
Finalmente una clase Dictionary que almacena las palabras de un fichero de texto y permite iterar sobre ellas. Este TDA usa como contenedor
subyacente un set de string.



# Ejecutables

## Conjunto de letras

Dada una palabra y un archivo con un conjunto de letras con sus puntuaciones se deberá mostrar la puntuación de la palabra conforme a la lista de letras

> __conjunto_letras__ \<FicheroLetterSet\> \<palabra\>

@param <FicheroLetterSet> Fichero que contiene las letras con su puntuación y repeticiones
@param <palabra> Palabra a la cual se le va a calcular la puntuación

## Bolsa

Dados una sucesión de caracteres o enteros, se deberán introducir en una bolsa para luego ser extraidos aleatoriamente

> __bolsa__ \<Letra C/I\>  \<conjunto letras/enteros\>

@param <Letra_C/I> 'C' si queremos introducir una sucesion de caracteres, 'I' para una sucesion de enteros
@param <conjunto_letras/enteros> lista de enteros o caracteres según corresponda que deberán meterse todos en la bolsa

## Bolsa letras

Crear una bolsa dado un conjunto de letras y mostrarlas por pantalla extrayendolas aleaoriamente

> __bolsa_letras__ \<FicheroLetterSet\>

@param <FicheroLetterSet> Fichero que contiene las letras con su puntuación y repeticiones

## Palabras longitud

Dado un fichero se pide construir un Dictionary a partir de este y dada una longitud, extraer las palabras del diccionario con dicha longitud
e imprimirlas por pantalla

> __palabras_longitud__ \<FicheroDictionary\> \<int\>

@param <FicheroDictionary> Fichero que contiene las palabras
@param <int>  entero que indica la longitud de las palabras a extraer

## Cantidad letras

Construye un Dictionary dado un archivo con las palabras que lo componen, un LetterSet dado un fichero con las letras
que lo componen e imprime por pantalla para cada letra en el LetterSet el número de ocurrencias de la letra en el diccionario
y su frecuencia relativa

> __cantidad_letras__ \<FicheroDictionary\> \<FicheroLetterSet\>

@param <FicheroDictionary> Fichero que contiene las palabras que deben componer el diccionario
@param <FicheroLetterSet> Fichero que contiene las letras a buscar en el diccionario

*/
