#include <iostream>
using namespace std;
int main(){
    string username, username1, password, password1;
    int userconfirm, passconfirm;

    
    cout << "Hi and welcome,.."<< endl;
    void userverif();
    void passverif();


//functions
    void userverif(string username);{
        cout << "Please Enter your desired username: ";
        cin >> username;

        cout << "Please confirm username: ";
        cin >> username1;

        if (username == username1)
            cout << "Username confirmed! Thank you!" << endl;
            
        else{
            
            cout << "Please Check your input and try again!" << endl;
        }
    }
    void passverif();{
        cout << "Create your desired Password: ";
        cin >> password;

        cout << "Please Repeat Your Password: ";
        cin >> password1;

        if (password == password1)
            cout << "Password Confirmed! Thank you! "<< endl; 
        else{
            cout << "Please Check your password and try again!" << endl;
        }
        
    }

    return 0;
}