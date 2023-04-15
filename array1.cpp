#include<iostream>
using namespace std;

struct Array {
    int A[20];
    int size;
    int length;
};

void display(struct Array arr ){
cout<<"elelmemts are "<<endl; 
for(int i=0;i<arr.length;i++){
cout<<arr.A[i];
}
}

int main(){
struct Array arr={{2,3,4,5,6},20,5};
// cout<<"enter size of an array"<<endl;
// cin>>arr.size;
// arr.A = new int[arr.size];
// arr.length = 0;
// cout<<"enter number of numbers"<<endl;
// cin>>arr.length;
// cout<<"enter all elements";
// for(int i=0;i<arr.length;i++){
// cin>>arr.A[i];
// }

display(arr);



return 0;
}