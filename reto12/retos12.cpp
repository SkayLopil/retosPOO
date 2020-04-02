//Caso general:
//Array A que consiste de N enteros
//0 <= P < Q < N
//La porción contiene al menos dos elementos
//El promedio de una porción (P, Q) es la
//suma de A[P] + A[P + 1] + ... + A[Q]
//dividido entre el tamaño de la porción.
//Para ser preciso, el promedio equivale a
//(A[P] + A[P + 1] + ... + A[Q]) / (Q − P + 1).
//La función debe retornar la posición de
//inicio de la porción con el promedio mínimo

//Caso particular:
//Array A que consiste de N=7 enteros
//A = [4,2,2,5,1,5,8]
//0 <= P < Q < 7
//La función debe retornar 1
//N es un entero dentro del rango [2..100,000];
//Cada elemento del array A es un entero en el rango [−10,000..10,000].

//Pseudocódigo:
//1. Inicializar vector A
//2. Inicializar prom_min = 10000
//3. for (int P = 0; P < N-1; P++)
    //3.1 for(int Q = P+1; Q < N; Q++)
        //suma = 0
        //3.1.1 for(int i = P; i <= Q; i++)
            //suma = suma + A[i]
        //promedio = suma/(Q-P+1)
        //if (promedio < prom_min)
            //prom_min = promedio
            //pos = P
//4. Retornar pos

#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>A){
    float prom_min = 10000;
    int pos;
    int N = A.size();
    for(int P = 0; P < N-1; P++){
        for(int Q = P+1; Q < N; Q++){
            float suma = 0;
            for(int i = P; i <= Q; i++){
                suma = suma + A[i];
            }
            float promedio = suma/(Q-P+1);
            if (promedio < prom_min){
                prom_min = promedio;
                pos = P;
            }
        }
    }
return pos;
}

int main(){
    int res;
    vector<int> A{4,2,2,5,1,5,8};
    res = solution(A);
    cout << res << endl;
}