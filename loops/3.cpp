// 4. Print multiplication table of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i;
        /* code */
    cout<<endl;
    }
   return 0; 
}