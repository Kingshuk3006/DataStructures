#include<iostream>

using namespace std;


//Head recursion... Executes at returning time..
//output will be in th eform of 1234
int fib(int term){
	if(term > 0){
		fib(term - 1);
		cout<<term;	
	}
}


//Tail recursion... Executes at calling time..
//output will be in th eform of 4321
int fib(int term){
	if(term > 0){
		cout<<term;	
		fib(term - 1);
	}
}

int main(){
	int term;
	cout<<"Enter the number of terms : \t";
	cin>>term;
	
	fib(term);
}
