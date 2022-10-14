// Functions to manage contacts for contacts application
// Austin Ayers Edited 09/27/22

#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include "contacts.h"


void add_contact(const std::string& aFirst_name, const std::string& aLast_name, const std::string& aNumber, std::vector<std::string> &aVector){
    // add a contact to the working vector
    aVector.push_back(aFirst_name + ' ' + aLast_name + ' ' + aNumber);
}

void remove_contact(const std::string& aFirst_name, const std::string& aLast_name, const std::string& aNumber, std::vector<std::string> &aVector){
    // remove a contact from the vector and the save file
    std::string contact = aFirst_name + ' ' + aLast_name + ' ' + aNumber;
    for(int i; i<aVector.size(); i++){
        if(contact == aVector[i])
            // erase contact from vector
            aVector.erase(aVector.begin() + i);
    }
}
std::string find_with_name(const std::string& aName, std::vector<std::string> &aVector) {
    // find matching contacts by name and return them as a string
    std::string matches;

    for(int i=0; i<aVector.size(); i++) {
        if(aName == aVector[i].substr(0, aName.length()))
            // names are equal, add to return value
            matches.append('\n' + aVector[i]);
    }
    return matches;
}

std::string find_with_number(const std::string& aNumber, std::vector<std::string> &aVector){
    // find matching contacts by number and return them as a string
    std::string matches;

    for(int i=0; i<aVector.size(); i++) {
        if(aNumber == aVector[i].substr(aVector[i].length() - aNumber.length(), aVector[i].length()))
            // numbers are equal, add to return value
            matches.append('\n' + aVector[i]);
    }
    return matches;
}

std::string toggle_encryption(std::vector<std::string> &aVector){
    // change encryption flag (the first item in the vector) and return a description of behavior
    if(aVector[0] == "file encryption: false"){
        aVector[0] = "file encryption: true";
        return "\nFile Encrypion Enabled...\n";
    }
    else {
        aVector[0] = "file encryption: false";
        return "\nFile Encrypion Disabled...\n";
    }
}