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
        swap(&arr->A[i],&arr->A[i-1]);
        return i;
    }
}

return -1;

}

int Get(struct Array arr,int index) {
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr,int index,int x ){
    if(index>=0 && index<arr->length)
    arr->A[index]=x;
}

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(max < arr.A[i])
        max=arr.A[i];
    }
    return max;
}


int Min(struct Array arr){
    int min = arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(min > arr.A[i])
        min=arr.A[i];
    }
    return min;
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
// cout<<linearS(&arr,6);
// cout<<Get(arr,2)<<endl;
// Set(&arr,2,6);
// cout<<Get(arr,2)<<endl;
// cout<<Max(arr)<<endl;
// cout<<Min(arr)<<endl;
display(arr);



return 0;
}