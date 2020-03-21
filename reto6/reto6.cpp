#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>A){
    sort(A.begin(), A.end());
    cout << A[0];
    cout << A[1];
    cout << A[2];
    cout << A[3];
    cout << A[4] <<endl;

    if(A[0] == 1){

      if(A[1] == 2){

        if(A[2] == 3){

            if(A[3] == 4){

                if(A[4] == 5){

                }
            }
        }
      }
    }

    return faltante;

}

int main(){
    int faltante;
    vector <int> A = {2,5,4,3};
    faltante = solution(A);
    cout<< "parcero, el numero faltante es:" << faltante << endl;

}