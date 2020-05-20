//Caso General:
//Tenemos N discos
//Estan enumerados de 0 a N-1
//El array A tiene N enteros no negativos que especifican el radio
//El disco J es dibujado con centro en (J,0) y radio A[J]
//Un disco J y un disco K intersectan si J es =! K y si exite un punto de contacto entre ellos

//Caso Particular:
//Tenemos 6 discos
//Estan numerados de 0 a 6-1 (5)
//El array A tiene 6 enteros no negativos que especifican el radio
//El disco J es dibujado con centro en (J,0) y radio A[J]
//Un disco 3 y el disco 4 intersectan si J es =! K y si exite un punto de contacto entre ellos

//Pseudocodigo
    //1. Comparar el disco 0 con todos los siguientes
      //Discoizq = A la posicion del disco izq. sumarle el radio
      //Discoder = A la posicion del disco der. restarle el radio
        //Si disco izq es mayor o igual del disco derecho
         //Aumentar el valor de intersecciones
    //2. Comparar el disco 1 con todos los siguientes
    //3. Comparar el disco 2 con todos los siguientes
    //...
    //N-1 Comparar el disco N-2 con todos los siguentes (solo N-1)
    //
    //pisicion del disco de la izq = suma de la posicion del disco mas el radio
    //posicion del desco derecho = resta de la posicion del disco menos el radio

#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>A){
    int N = A.size();
    int intersecciones = 0;
    for(int J = 0; J <= N-2; J++){
        for(int K = J+1; K <= N-1; K++){
           int DI = J+A[J];
           int DD = K-A[K];
            if(DI >= DD){
                intersecciones++;
            }
        }
    }
    return intersecciones;
}

int main(){
    vector<int> entrada {1,5,2,1,4,0};
    cout<<solution(entrada) << endl;
}