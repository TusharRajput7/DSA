//Print "Hello World!" n times without using a loop
//Using Vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> v;

vector<string> print(int n){
    if(n==0)return v;
    v=print(n-1);
    v.emplace_back("Hello World!");
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<string>::iterator it;

    for(auto it:v=print(n)){
        cout<<it<<endl;
    }
    return 0;
}