//Return an array containing integers from 1 to ‘n’ 
//(in increasing order) without using loops but vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> printNos(int x){
    if(x==0)return v;
    v=printNos(x-1);
    v.emplace_back(x);
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>::iterator it=v.begin();
    for(int it:v=printNos(n)){
        cout<<it<<" ";
    }
    return 0;
}