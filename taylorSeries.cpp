//Taylor Series

#include<iostream>
#include<math.h>

using namespace std;

int fac(int n){
	if(n > 1){
		return n * fac(n-1);
	}else{
		return 1;
	}
}

float taylor(int x, int term){
	float r;
	if(term > 0){
		r = pow(x,term)/fac(term);
//		cout<<r<<"r\n";
		return r + taylor(x, term-1);
	}else{
		return 1;
	}
}

int main(){
	int x, term;
	cout<<"Enter the total number of terms";
	cin>>term;
	cout<<taylor(4, term - 1);
	return 0;
}
