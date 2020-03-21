//descripcion del reto:
//caso general:
//array A contiene N enteros (no vacio)

//P dividira la conta en dos partes

//caso particular:
////array A contiene N enteros (no vacio) de 5 enteros

//pseudocodigo

//paso numero 0. nada
// A = [3, 1, 2, 4, 3];
//paso 0.1
//

// paso numero 1
 //repetir N-1 veces:
 //1.1 partir el array en dos partes dependiendo de p(empezamos en 1, terminamos en N-1)
 //1.2 obener suma parte 1
 //1.3 obtener suma parte 2
 //1.4 restar ambas partes
 //1.6 si valor actual (va) es menor que min
   //1.6.1 guardar valoractual en la variable min
//paso numero 2
//retornar el valor minimo

#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int solution(vector<int> A){
    //paso 0.1
    int min = 1000000000;
    int N = A.size();


    //paso 1
    for(int P = 1; P < N; P++ ){
     //1.1 partir array en 2 partes
     vector<int> parte1(A.begin(), A.end()-(N-P));
     vector<int> parte2(A.begin()+P, A.end());


    int suma1 = 0;
    for(int i = 0; i < parte1.size(); i++){
     suma1 = suma1 + parte1[i];
    }

    int suma2 = 0;
    for(int i = 0; i < parte2.size(); i++){
     suma2 = suma2 + parte2[i];
    }

    int valorActual = abs(suma1 - suma2);


    if(valorActual < min){
        min = valorActual;
    }

}
    return min;
}



int main(){
    vector<int> A{3, 1, 2, 4, 3};
    cout << solution(A) << endl;

}