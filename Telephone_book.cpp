#include <bits/stdc++.h>
using namespace std;

struct Person {
    string name;
    int phoneNum;
    Person(string s = "", int num = 0) : name(s), phoneNum(num) {}
};

void createContact(vector<Person>& contacts);
void readContacts(const vector<Person>& contacts);
void updateContact(vector<Person>& contacts);
void deleteContact(vector<Person>& contacts);
void searchContact(const vector<Person>&);


int main() {
    vector<Person> contacts;
    int choice;

    while (true) {
        
        cout << "\nPhone Book - CRUD Menu\n";
        cout << "1. Create (Add Contact)\n";
        cout << "2. Read (View Contacts)\n";
        cout << "3. Update (Edit Contact)\n";
        cout << "4. Delete (Remove Contact)\n";
        cout << "5. Search Contact\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";

        
        while (!(cin >> choice) || choice < 0 || choice > 5) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number between 0 and 5: ";
        }

        switch (choice) {
            case 1: createContact(contacts); break;
            case 2: readContacts(contacts); break;
            case 3: updateContact(contacts); break;
            case 4: deleteContact(contacts); break;
            case 5: searchContact(contacts); break;
            case 0: return 0;
        }
    }
}

void createContact(vector<Person>& contacts) {
    string name;
    int phone;

    cout << "Enter name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, name);

    cout << "Enter phone number: ";
    cin >> phone;

    contacts.push_back(Person(name, phone));
    cout << "Contact added.\n";
}

void readContacts(const vector<Person>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts available.\n";
        return;
    }
    cout << "Contacts List:\n";
    for (const auto& p : contacts) {
        cout << p.name << " - " << p.phoneNum << endl;
    }
}

void updateContact(vector<Person>& contacts) {
    string name;
    cout << "Enter the name of the contact to update: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, name);
    for (auto& p : contacts) {
        if (p.name == name) {
            string newName;
            int newPhone;

            cout << "Enter new name: ";
            getline(cin, newName);

            cout << "Enter new phone number: ";
            cin >> newPhone;

            p.name = newName;
            p.phoneNum = newPhone;

            cout << "Contact updated.\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

void deleteContact(vector<Person>& contacts) {
    int phoneNum;
    cout << "Enter the phoneNum of the contact to delete: ";
    cin >> phoneNum;
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->phoneNum == phoneNum) {
            contacts.erase(it);
            cout << "Contact deleted.\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

void searchContact(const vector<Person>& contacts) {
    if (contacts.empty()) {
        cout << "Phone book is empty.\n";
        return;
    }

    int choice;
    cout << "Search by:\n1. Name\n2. Phone Number\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        string name;
        cout << "Enter name to search: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, name);
        bool found = false;
        for (const auto& p : contacts) {
            if (p.name == name) {
                cout << "Found: " << p.name << " - " << p.phoneNum << endl;
                found = true;
            }
        }
        if (!found)
            cout << "No contact found with name '" << name << "'.\n";
    }
    else if (choice == 2) {
        int phone;
        cout << "Enter phone number to search: ";
        cin >> phone;
        bool found = false;
        for (const auto& p : contacts) {
            if (p.phoneNum == phone) {
                cout << "Found: " << p.name << " - " << p.phoneNum << endl;
                found = true;
            }
        }
        if (!found)
            cout << "No contact found with phone number '" << phone << "'.\n";
    }
    else {
        cout << "Invalid search choice.\n";
    }
}