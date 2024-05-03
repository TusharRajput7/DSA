//Check if a number is prime or not
//1 is not a prime number
#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    int i;
    if(n<=1)return false;

    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<prime(n);
    return 0;
}