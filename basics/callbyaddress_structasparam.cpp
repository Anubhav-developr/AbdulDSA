#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

void changelength(struct Rectangle *r1,int l){

    r1->length = l;
}

int main(){
     struct Rectangle r={10,5};   
     changelength(&r,20);
     cout<<r.length;
     
    return 0;
}
