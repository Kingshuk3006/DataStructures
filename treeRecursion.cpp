//Tree Recursion...Calling more than one time

#include<iostream>

using namespace std;

//Tree Recursion


int func(int n){
	if(n > 0){
		cout<<n;
		func(n-1);
		func(n-1);
	}
}

int main(){
	func(3);
	return 0;
}


