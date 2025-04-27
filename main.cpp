/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
      //Butterfly--Pattern
#include <iostream>
using namespace std;
int main()
{
    int a,i,j,k,z,b,c;
    cin>>a;
    for(i=1;i<a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        b=2*(a-i);
        
        for(k=1;k<=b;k++)
        {
            cout<<"   ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
   for(i=1;i<=a*2;i++)
    {
        
        cout<<" * ";
        
    }
    cout<<endl;
    
   for(i=a-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" * ";
        }
        c=2*(a-i);
        for(k=1;k<=c;k++)
        {
            cout<<"   ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    } 

    return 0;
}