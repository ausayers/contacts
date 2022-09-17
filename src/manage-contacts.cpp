// Functions to manage contacts for contacts application
// Austin Ayers Edited 09/16/22

#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include "contacts.h"


void add_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber, std::vector<std::string> &aVector){
    // add a contact to the working vector
    aVector.push_back(aFirst_name + ' ' + aLast_name + ' ' + aNumber);
}

void remove_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber, std::vector<std::string> &aVector){
    // remove a contact from the vector and the save file
    std::string contact = aFirst_name + ' ' + aLast_name + ' ' + aNumber;
    for(int i; i<aVector.size(); i++){
        if(contact == aVector[i])
            // erase contact from vector
            aVector.erase(aVector.begin() + i);
    }
}