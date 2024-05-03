// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.
#include<iostream>
using namespace std;

int countDigits(int n){
   	int a=n;
	int count=0;
    
    while(a>0){
        int lastdigit=a%10;
        if(lastdigit>0 && n%lastdigit==0){
            count++;
        }
        a=a/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}