#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string username, password, u, p;

    cout << "1. Register\n2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        ofstream file("users.txt", ios::app);
        file << username << " " << password << endl;
        file.close();

        cout << "Registration Successful!" << endl;
    }
    else if (choice == 2) {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        ifstream file("users.txt");
        bool found = false;

        while (file >> u >> p) {
            if (u == username && p == password) {
                found = true;
                break;
            }
        }
        file.close();

        if (found)
            cout << "Login Successful!" << endl;
        else
            cout << "Invalid Username or Password!" << endl;
    }
    else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}