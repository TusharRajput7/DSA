//Check if a string is palindrome or not
//If a string is same befor and after reverse then it is a palindrome
#include<iostream>
#include<string>
using namespace std;

bool check(int i,int n,string& str){        //Pass_by_refernce is used
    if(i>=n/2)return true;
    if(str[i]!=str[n-1-i])return false;
    return check(i+1,n,str);
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(check(0,n,s))cout<<"Is Palindrome";  //If is executed if the condition is true
    else cout<<"Not a Palindrome";
    return 0;
}