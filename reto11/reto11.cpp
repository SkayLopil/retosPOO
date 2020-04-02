//caso general:
//tres enteros A,B y K
//Se retorna el numero de enteros en el rango que va de A a B que son divisibles entre K
//{ i : A ≤ i ≤ B, i mod K = 0 }
//donde A <= B

//caso particular:
//tengo tres enteros A = 6, B = 11 y k = 2
//{ i : 6 ≤ i ≤ 11, i mod 2 = 0 }
//conjuntos que cumplen con esta condicion son 6, 8 y 10
//la funcion debe retornar tres (numero de casos en los que i es divisible entre k)
//Hacer ciclo para ver si el numero i es divisible entre k
//(ver si i modulo k = 0 : inicia en A, i <= B, i++)

//pseudocodigo
//pasos
//1. Inicializar las variables
//2. Crear variable contador
//Crear un array un vector con los numero A a B
//3. for (inicia en A, i <= B, i++)
  //3.1 si i es divisible entre K
    //3.1.1 contador aumenta
//4. retornar valor de contador

#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K){
    //Paso 2
    int cont = 0;
    //Paso 3
    for(int i = A; i <= B; i++){
        //Paso 3.1
        if(i%K == 0){
        //Paso 3.1.1- Contador aumenta
         cont = cont+1;
        }
    }
    //paso 4
    return cont;
}

int main(){
    int A, B, K;
    cout<< "ingresa valor de A, parcero" << endl;
    cin>> A;
    cout<< "ingresa valor de B, parcero" << endl;
    cin>> B;
    cout<< "ingresa valor de K, parcero" << endl;
    cin>> K;
    cout<< "Tu resultado es" << endl;
    //Llamar a la funcion solucion y guardar en una variable resultado
    //Imprimir resultado
    int result;
    result = solution(A,B,K);
    cout<< result << endl;
}