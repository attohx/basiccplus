#include <iostream>
using namespace std;
int main(){

    string firstname, lastname, fullname;
    char confirm, locale;
    int age;
    void nameverif(); 
    void localeverif(); 
    void ageverif();

    //intro whatever
    cout << "Hi And Welcome to West African Inv."<< endl;
    cout << "-------------------------------------------"<< endl;
    cout << "Proceeding with Account Creation////"<< endl;

    //first name input
    cout <<"Please Input Your First Name: ";
    cin >> firstname;
    
    //last name input
    cout << "Please Input Your Last Name: ";
    cin >> lastname;

    //function for name confirmation verification
    void nameverif(string firstname, string lastname, string fullname, char confirm);{

        fullname = firstname + "." + lastname;
        cout << "Confirm Your Name is " << fullname << ". Input 'Y' for Yes and 'N' for No "<< endl;
        cin >> confirm;

        if (confirm == 'Y' || confirm == 'y')
            cout << "Thank You for Verifying your Name!"<< endl;
        else
            cout << "Please restart app and try again"<< endl;
    }

    //function for locale input verification
    void localeverif(char locale);{
        cout << "List of Available regions include: 1. Greater Accra Region, 2. Western Region, 3. Eastern Region, 4. Not Available " << endl;
        cout << "Please insert the corresponding number to the region associated in the list above: " << endl;
        cin >> locale;

        //locale checker
        if (locale == '1' || locale == '2' || locale == '3')
            cout << "✔️Congratulations...Our Services are available in your region!" << endl;
        else if (locale == 4)
        {
            cout << "You are outside our sphere of influence, we hope to spread out service areas soon";
        }
    
        else
            cout << "please restart the app and follow the instructions"<< endl;

    }

    void nameverif();
    void localeverif();

    cout << "Checking if services are online.....✔️ "<< endl;
    cout << "region " << locale << " detected." << endl;
    cout << "Welcome to West African Investment Corps " << fullname << endl;
    cout << "What would you like to do today?: ";

    return 0;
}