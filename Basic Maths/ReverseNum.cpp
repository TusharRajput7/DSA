//Reverse a given number
#include<iostream>
using namespace std;

int reverse(int n){
    int num=0;
    while(n!=0){
        int lastdigit=n%10;
        num=(num*10)+lastdigit;
        n=n/10;
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}