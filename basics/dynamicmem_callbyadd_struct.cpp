#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle * fun(){
    struct Rectangle *p;
    p=new Rectangle;
    p->length=5;
    p->breadth=100;
    return p;
}

int main(){
struct Rectangle *a;
a=fun();
cout<<a->length;
return 0;
}