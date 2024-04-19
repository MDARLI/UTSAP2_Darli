#include<iostream>
using namespace std;
int n,i,x,y;

int main(){
    cout<<"masukkan n : ";
    cin>>n;
    for(i=1;i<=n;i+=2){
        y=i*i;
    x=x+y;
    }
    cout<<x;
}