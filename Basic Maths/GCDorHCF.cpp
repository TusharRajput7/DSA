//Greatest Common Factor or 
//Highest Common Factor
//Basically the greatest number which can divide both
#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0)return b;
    if(b==0)return a;
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}