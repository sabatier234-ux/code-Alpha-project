#include <iostream>
#include <string>
using namespace std;

string savedUsername = "";
string savedPassword = "";

void registerUser() {
    cout << "\nRegister\n";

    cout << "Enter Username: ";
    cin >> savedUsername;

    cout << "Enter Password: ";
    cin >> savedPassword;

    cout << "Registration Successful!\n";
}

void loginUser() {
    string username, password;

    cout << "\nLogin\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == savedUsername && password == savedPassword)
        cout << "Login Successful!\n";
    else
        cout << "Invalid Username or Password!\n";
}

int main() {

    int choice;

    do {
        cout << "\n1. Register";
        cout << "\n2. Login";
        cout << "\n3. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 3);

    return 0;
}
