#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return n;
    }
    return n+fact(n-1);
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<fact(n);
}