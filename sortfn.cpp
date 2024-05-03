#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    return true;    
}

int main(){
    pair<int,int> arr[]={{1,2},{2,1},{4,1}};
    sort(arr,arr+4,comp);
    for(auto it:arr){
        cout<<it.first<<it.second<<endl;
    }
}