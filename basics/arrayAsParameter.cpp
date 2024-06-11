#include<iostream>
using namespace std;

void fun(int A[],int n){
    A[0]=332;
for(int i=0;i<n;i++){
   cout<<A[i]; 
}
}

int main(){

    int A[] = {2,4,6,8,10};
    int size = 5;
    
    fun(A,size);
  

}