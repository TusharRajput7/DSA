#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="321";//Unsorted string

    sort(s.begin(),s.end());//sorts the string

    //If the string was not sorted then the next_permutation 
    //function only gives the combinations right after the given string

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));//Prints all the possible permutation combinations

    return 0;
}