#include<iostream>

using namespace std;

int fib(int term){
	if( term = 0 || term == 1){
		return term;
	}else{
		return fib(term - 1) + fib(term - 2);
	}
}

int main(){
	int numberofTerms;
	cout<<"Enter the number of terms";
	cin>>numberofTerms;
	
	cout<<fib(numberofTerms);
}
