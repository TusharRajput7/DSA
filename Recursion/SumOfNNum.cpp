//Sum of N natural numbers using recursion
#include<iostream>
using namespace std;

int fn2(int n){             //Functional Method(Breaking the function in simpler form)
    if(n==0)return 0;
    return n+fn2(n-1);
}

void fn1(int n, int num){    //Parameterised Method(Using a helper variable)
    if(n<1){
        cout<<"Parameterised Method "<<num<<endl;
        return;
    }
    fn1(n-1,num+n);
    return;
}

int main(){
    int n;
    cin>>n;
    fn1(n,0);
    cout<<"Functional Method "<<fn2(n);
    return 0;
}