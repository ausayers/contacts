// Display functions to be used with contacts application
// Austin Ayers Edited: 9/29/22

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
    std::cout << "\n1: Display Contacts\n"
                 "2: Add Contact\n"
                 "3: Remove Contact\n"
                 "4: Search Contacts by name\n"
                 "5: Search Contacts by number\n"
                 "6: Toggle File Encryption\n"
                 "7: Quit\n";
}

void display_contacts(std::vector<std::string> &aVector){
    // display all contacts (except item 0: the entrypt flag) in the contacts vector
    std::cout << "\nSaved Contacts: \n";
    for(int x=1; x < aVector.size(); x++){
        if(!aVector[x].empty())
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
    // ask for a name to retrieve a contact
    std::cout << "Enter a name: ";
}

void ask_number(){
    // ask for a number to retrieve a contact
    std::cout << "Ender a number: ";
}