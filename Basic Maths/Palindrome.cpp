//Check is the given num is a palinndrome or not
//A number that remains the same when its digits are reversed is Palindrome.
#include<iostream>
using namespace std;

bool check(int x){
    int num=x;
    unsigned int reverse=0;
    while(x>0){
        int lastdigit=x%10;
        reverse=reverse*10+lastdigit;
        x=x/10;
    }
    return(reverse==num);
}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<check(n);//boolalpha converts 0 & 1 to true & false
    return 0;
}