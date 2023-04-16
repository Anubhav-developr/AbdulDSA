#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void append(struct Array *arr , int x){
//call by address hai 
//condition ki array ka size uske length se bada hai kya
if(arr->length<arr->size){
arr->A[arr->length++]=x;
}
}

void insert(struct Array *arr,int index,int x){
    if(index>=0 && index <= arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];   
           
                 }
                 arr->A[index]=x;
                  arr->length++;
    }
}

void swap (int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int linearS(struct Array *arr,int element){
      
for(int i=0;i<arr->length;i++){
    if(arr->A[i]==element)
    {  
        // swap(arr->A[i],arr->A[0]);
        return i;
    }
}

return -1;

}



void display(struct Array arr ){
cout<<"elelmemts are "<<endl; 
for(int i=0;i<arr.length;i++){
cout<<arr.A[i];
}
}

int main(){
struct Array arr={{2,3,4,5,6},10,5};
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
// append(&arr,20);
// insert(&arr,3,10);
cout<<linearS(&arr,6);
display(arr);



return 0;
}