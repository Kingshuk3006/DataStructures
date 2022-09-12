#include<iostream>

using namespace std;

class Complex{
    int a, b;
    public: 


    Complex(void);
    void printNumber(){
        cout<<a<<" "<<"+"<<" "<<b;
    }

};

Complex :: Complex(void){
    a = 10;
    b = 10;
}

int main(){

}