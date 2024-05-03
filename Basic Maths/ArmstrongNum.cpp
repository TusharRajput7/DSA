//Check if a given number is Armstrong Number
//Armstrong Numbers are the numbers having the sum of digits
// raised to the power of no. of digits, is equal to the given number.
#include<iostream>
#include<cmath>
using namespace std;

bool checkArmstrong(int n){
	int temp=n;
	int sum=0,count=0;
	while(temp>0){
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp>0){
		int lastdigit=temp%10;
		sum=sum+pow(lastdigit,count);
		temp=temp/10;
	}
	return(sum==n);
}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<checkArmstrong(n);
    return 0;
}