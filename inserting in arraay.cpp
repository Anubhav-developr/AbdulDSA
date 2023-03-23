/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
 
    int size;
    cout<<"enter size of array \n";
    cin>>size;
    int *A = new int[size];
    cout<<"enter "<<size<<" elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    for(int i=0;i<size;i++){
        cout<<A[i];
    }
       //inserting in an array
       cout<<"\nentering number to be inserted"<<endl;
       int n;
       cin>>n;
       cout<<"\nentering location"<<endl;
       int loc;
       cin>>loc;
       for(int i=size;i>loc;i--){
           A[i]=A[i-1];
       }
       A[loc]=n;
       cout<<"displaying inserted array  \n"<<endl;
       for(int i=0;i<=size;i++){
           cout<<A[i];
       }

    return 0;
}