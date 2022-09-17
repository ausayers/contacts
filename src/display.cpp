// Display functions to be used with contacts application
// Austin Ayers Edited: 9/16/22

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
                 "4: Quit Contacts\n";
}
void display_contacts(std::vector<std::string> &aVector){
    // display all contacts in the contacts vector
    std::cout << "\nSaved Contacts: \n";
    for(int x=0; x < aVector.size(); x++){
        if(aVector[x] != "")
            std::cout << aVector[x] << '\n';
    }
}
void ask_contact(){
    // ask for contact information
    std::cout << "Enter contact information (John Doe 9852934876): ";
}