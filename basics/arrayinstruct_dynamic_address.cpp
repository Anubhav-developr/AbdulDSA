#include<iostream>
using namespace std;

struct test {
    int A[5];
    int n;
};

void fun(struct test * t) {
    t->A[0] =10;
    cout<<t->A[0];

}


int main(){
    struct test b={{2,4,6,8,10},5};
   fun(&b);

   
}