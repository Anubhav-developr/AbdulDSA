#include<iostream>
using namespace std;
//hamesha *
int * fun(int n){

    int *P;
    P=(int *)malloc(n*sizeof(int));
    return P;


}
int main(){
    int *A;
    A=fun(5);
    A[0]=5;
    A[1]=10;
     A[2]=15;
      A[3]=20;
       A[4]=25;
    for(int i=0;i<5;i++){
        cout<<A[i];
    }
}