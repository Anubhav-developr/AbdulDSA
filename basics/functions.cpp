#include<iostream>
using namespace std;
//below fn have formal parameters
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
int x,y,z;
x=5;
y=10;
//and here below is actual parameter
z=add(x,y);
cout<<z;

return 0;

}