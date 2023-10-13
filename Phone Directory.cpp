#include<bits/stdc++.h>
using namespace std;

void addContact(map<string, string>& phonebook) {
    string name, number;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter phone number: ";
    cin >> number;
    phonebook.insert(make_pair(name, number));
    cout << "Contact added successfully." << endl;
}

void searchContact(map<string, string>& phonebook) {
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    map<string, string>::iterator it;
    it = phonebook.find(name);
    if (it != phonebook.end()) {
        cout << "Phone number: " << it->second << endl;
    }
    else {
        cout << "Contact not found." << endl;
    }
}

void displayContacts(map<string, string>& phonebook) {
    map<string, string>::iterator it;
    for (it = phonebook.begin(); it != phonebook.end(); it++) {
        cout << "Name: " << it->first << endl;
        cout << "Phone number: " << it->second << endl << endl;
    }
}

int main() {
    map<string, string> phonebook;
    int choice;
    do {
        cout << "Phone Directory" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Search contact" << endl;
        cout << "3. Display all contacts" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            addContact(phonebook);
            break;
        case 2:
            searchContact(phonebook);
            break;
        case 3:
            displayContacts(phonebook);
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
