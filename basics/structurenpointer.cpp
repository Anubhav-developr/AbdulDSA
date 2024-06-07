/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
}r;
int main()
{   struct Rectangle *p;
  
   p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=45;
    cout<<p->length;
    
    return 0;
}























 // struct Rectangle r= {10,20};
    //   p = &r;
    // cout<<r.length;
    // // p->length=25;
    // cout<<r.length;
    // // p->breadth=56;
    // // (*p).breadth=56;
    // cout<<endl<<r.breadth;