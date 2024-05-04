//Return an array containing integers from ‘n’ to 1
//(in decreasing order) without using loops but vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> printNos(int x){
    if(x==0)return v;
    v=printNos(x-1);
    v.emplace(v.begin(),x);//v.emplace(location, element)
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