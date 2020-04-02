//Secuencia de ADN: String de A,C,G y T (N caracteres)
//Se quiere saber el factor de impacto mínimo
//Hay M consultas que están en los arrays P y Q
//K es la K-ésima consulta
//la función debe retornar los valores de las consultas

/*
N es un entero dentro del rango [1..100,000];
M es un entero dentro del rango [1..50,000];
cada elemento de los arrays P, Q es un entero en el rango [0..N − 1];
P[K] ≤ Q[K], donde 0 ≤ K < M;
El string S consiste solamente de las letras mayúsculas A, C, G, T.
*/

//Pseudocódigo:
//1. Inicializar la secuencia de ADN: S = CAGCCTA
//2. Inicializar arrays P y Q (con M consultas): P = [2, 5, 0] y Q = [4, 5, 6]
//3. Hacer un for que se repita M veces
    //3.1 Seleccionar parte del array que inicia en P[k] y termina en Q[k]: CAGCCTA
    //3.2 Darle valores a las letras A,C,G y T: 1,2,3 y 4 --> [2, 1, 3, 2, 2, 4, 1]
    //3.3 Retornar valor mínimo del array --> Meterlo en el array de salida (resultado: 2, 4, 1)

    //3,2,2
    //3,2,2,4
    //3,2,2,4,2, 1, 3, 2, 2, 4, 1

#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string S, vector<int> P, vector<int> Q){
    //vector<int> frag; //Fragmento de la secuencia
    vector <int> resultado;
    int M = P.size(); //Número de consultas
    //Paso 3:
    for(int k = 0; k < M; k++){
        //Paso 3.1 y 3.2:
        //int tam = (Q[k]-P[k])+1; //Tamaño del fragmento
        vector<int> frag;

        for(int i = P[k]; i <= Q[k]; i++){
            if(S[i] == 'A'){
                frag.push_back(1);
            }
            if(S[i] == 'C'){
                frag.push_back(2);
            }
            if(S[i] == 'G'){
                frag.push_back(3);
            }
            if(S[i] == 'T'){
                frag.push_back(4);
            }
        }

        resultado.push_back(*min_element(frag.begin(), frag.end()));


    }

    return resultado;

}

int main(){
    //Paso 1:
    string S = "CAGCCTA";

    //Paso 2:
    vector<int> P{2, 5, 0};
    vector<int> Q{4, 5, 6};
    vector<int> solucion;
    solucion = solution(S, P, Q); //Se guarda el vector solucion

    for (int i = 0; i < solucion.size(); i++){
        cout << solucion[i] << endl;
    }

}