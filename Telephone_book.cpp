// Project: Telephone book using STL

// delete contact implement korte hbe... string address add korte hbe ... then instagram err library management system implemnt korte hbe...

// link -> https://www.instagram.com/p/C4GPBGvPxkP/?img_index=4

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string name;
    int phoneNum;
    Person(string s = "", int num = 0) {
        name = s;
        phoneNum = num;
    }
};

void displayData(vector<Person> &);
void search(vector<Person> &, string);
void search(vector<Person> &, int);

int main() {
    vector<Person> p;

    int ch;
    string str;
    int num;
    p.push_back(Person("Nimish", 2534123));
    p.push_back(Person("Anmol", 982301));
    p.push_back(Person("Shubham", 789635));

    while (1) {
        cout << "1. View Phone Book" << endl;
        cout << "2. Search by name" << endl;
        cout << "3. Search by number" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                displayData(p);
                break;
            case 2:
                cout << "Enter name: " << endl;
                cin >> str;
                search(p, str);
                break;
            case 3:
                cout << "Enter phone number: " << endl;
                cin >> num;
                search(p, num);
                break;
            case 0:
                exit(1);
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}

void displayData(vector<Person> &p) {
    if (p.size() == 0) {
        cout << "No data in the phone book" << endl;
        return;
    }
    for (int i = 0; i < p.size(); i++)
        cout << p[i].name << " " << p[i].phoneNum << endl;
    cout << endl;
}

void search(vector<Person> &p, string str) {
    bool found = false;
    cout << "Search Results:" << endl;
    for (int i = 0; i < p.size(); i++) {
        if (str == p[i].name) {
            found = true;
            cout << p[i].name << " " << p[i].phoneNum << endl << endl;
        }
    }
    if (found == false)
        cout << "No matching entry" << endl << endl;
}

void search(vector<Person> &p, int num) {
    bool found = false;
    cout << "Search Results:" << endl;
    for (int i = 0; i < p.size(); i++) {
        if (num == p[i].phoneNum) {
            found = true;
            cout << p[i].name << " " << p[i].phoneNum << endl << endl;
        }
    }
    if (found == false)
        cout << "No matching entry" << endl << endl;
}
