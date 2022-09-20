// Display functions to be used with contacts application
// Austin Ayers Edited: 9/19/22

#include <iostream>
#include <string>
#include <vector>
#include "contacts.h"


void greeting(){
    // display a simple greeting
    std::cout << "\nGreetings!\n";
}

void main_menu(){
    // display a prompt
    int selection;
    std::cout << "\n1: Display Contacts\n"
                 "2: Add Contact\n"
                 "3: Remove Contact\n"
                 "4: Find a Contact by name\n"
                 "5: Quit Contacts\n";
}

void display_contacts(std::vector<std::string> &aVector){
    // display all contacts in the contacts vector
    std::cout << "\nSaved Contacts: \n";
    for(int x=0; x < aVector.size(); x++){
        if(aVector[x] != "")
            std::cout << aVector[x] << '\n';
    }
}

void display_contact(int index, std::vector<std::string> &aVector){
    // display a single contact
    std::cout << aVector[index] << '\n';
}

void get_contact(){
    // ask for contact information
    std::cout << "Enter contact information (John Doe 9852934876): ";
}
void ask_name(){
    // ask for information to retrieve a contact
    std::cout << "Enter a name: ";
}