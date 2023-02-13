
#include <iostream>

using namespace std;

int main()
{  
 int *p,*q;
 p=new int[5];
 q=new int[10];
 for(int i=0;i<5;i++){
  cin>>p[i];
 }
 for(int j=0;j<5;j++){
    q[j]=p[j];
 }
 
 
delete []p;
p=q;
q=NULL;
//by default index > 5 have values 0
for(int k=0;k<10;k++){
    cout<<p[k];
}
 
 return 0;
}