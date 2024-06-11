#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

int fun(struct Rectangle &r1){
r1.length=20;
  return r1.length*r1.breadth;
}

int main(){
struct Rectangle r={10,5};
cout<<fun(r);
cout<<r.length;



  return 0;
}