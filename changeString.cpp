#include<iostream>
#include<stdio.h>

using namespace std;



string Changer(char input[], int size){
	char newChr;
	for(int i = 0; i < size; i++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			newChr = input[i] - 9;
			if(newChr < 'a'){
				input[i] = 'z' - ('a' - newChr) + 1;
			}else{
				input[i] = newChr;
			}
		}else if(input[i] >= 'A' && input[i] <= 'Z'){
			newChr = input[i] + 3;
			if(newChr > 'Z'){
				input[i] = 'A' +  (newChr - 'Z') -1;
			}else{
				input[i] = newChr;
			}
		}else if(input[i] >= '0' && input[i] <= '9'){
			newChr = input[i] + 5;
			if(newChr > 'Z'){
				input[i] = '0' +  (newChr - '9') - 1;
			}else{
				input[i] = newChr;
			}
		}else if(input[i] == ' '){
			input[i] = '!';
		}
	}
	
	return input;
	
}

int main(){
	char input[100];
	int i = 0;
	gets(input);
	while(input[i] != NULL){
		i++;	
	}
	cout<<Changer(input, i);
}
