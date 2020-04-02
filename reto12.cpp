//Caso General:
//Array A que consiste de N enteros
//0 <= P < Q < N
//La porcion contiene al menos dos elementos


//Caso particular:
// array A que consiste de 7 enteros
//A = [4,2,2,5,1,5,8]
//0 <= P < Q < 7


//Pseudocodigo
//1. Inicializar vector A
//2. Inicializar prom_min = 10000
//3. for(int P = 0; P < N-1; P++)
    //3.1 for(int Q = P+1; Q < N; Q++)
          //suma = 0
          //3.1.1 for(int i = P; i <= Q; i++)
                  //suma = suma + A[i]

//promedio = suma/(Q-P+1)

 //if(promedio < prom min)
   //prom_min = promedio
   //pos = P
//4. Retornar pos


#include<iostream>
#include<vector>


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
    vector <int> A{4,2,2,5,1,5,8};
    res = solution(A);
    cout << res << endl;

}