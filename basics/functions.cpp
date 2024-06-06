#include<iostream>
using namespace std;
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
int x,y,z;
x=5;
y=10;
z=add(x,y);
cout<<z;

return 0;

}