// Write a program to check if a given number is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
cout<<"not a prime"<<endl;
break;
        }
        
    }
    if (i==n)
    {
    cout<<"its prime";
    }
    
    return 0;
}