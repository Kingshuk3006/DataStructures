//Indirect Recursion

#include<iostream>

using namespace std;


int funcA(int n);
int funcB(int n);



int main(){
	
	funcA(20);
	return 0;
}

int funcA(int n){
	if(n > 0){
		cout<<n<<"\t";
		funcB(n-1);
	}		
}

int funcB(int n){
	if( n > 1){
		cout<<n<<"\t";
		funcA(n/2);
	}
}
