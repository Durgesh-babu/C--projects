#include <iostream>
using namespace std;

typedef struct phonebook {
    string name;
    string number;
}phonebook;

int main(void) {
    phonebook person[5];
    string qname;
    cout << "Enter the numbers of 5 people" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Name :";
        getline(cin,person[i].name);
        cout << "Phone Number :";
        getline(cin,person[i].number);
    }
    
    cout << "Enter the name to search for thier number or press 'quit' to quit" << endl;
    while (1) {
        cout << "Name: ";
        getline(cin,qname);
        if (qname == "quit") {
            return 0;
        }
        for (int i = 0; i < 5; i++) {
            if (qname == person[i].name) {
                cout << "Number: " << person[i].number << endl;
            }
        }
        
    }
    return 0;
}
