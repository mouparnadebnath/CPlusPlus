// Print Half Pyramid Pattern using Stars
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j= 1; j <= i; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}