#include <iostream>

using namespace std;

class User
{
private:
    string username;
    string password;

friend void adminView(User kingshuk);

public:
    void setUserName(string Username)
    {
        username = Username;
    }
    void setPassword(string Password)
    {
        password = Password;
    }
};

void adminView(User kingshuk){
    cout<<kingshuk.username<<"\t"<<kingshuk.password;
}

int main()
{
    User kingshuk;
    kingshuk.setUserName("Kingsarkar3006");
    kingshuk.setPassword("12345");

    adminView(kingshuk);  //can pass tha total class , can't pass the value
    return 0;
}