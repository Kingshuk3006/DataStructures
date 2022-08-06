#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;   //a , b, c can only be accessed by class functions

public:
    int d, e;
    void setData(int a1, int b1, int c1);  
    void getData()
    {
        cout << "The value of a is" << a;
        cout << "The value of b is" << b;
        cout << "The value of c is" << c;
        cout << "The value of d is" << d;
        cout << "The value of e is" << e;
    }
};

void Employee :: setData(int a1, int b1, int c1){
   a=a1;
   b=b1;
   c=c1;
}

int main()
{
    Employee kingshuk;
    return 0;
}