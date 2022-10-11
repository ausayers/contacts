// Functions for saving contacts to save file for use in Contacts application.
// Austin Ayers Edited 10/11/22

#include <iostream>
#include <vector>
#include <fstream>
#include "contacts.h"

void save_contacts(std::vector<std::string> &aVector){
    // encrypt contacts and overwrite save file with updated data
    std::ofstream save_file("my-contacts.txt", std::ofstream::trunc);

    encrypt(aVector);
    
    for(int i=0; i<aVector.size(); i++){
        if(!aVector[i].empty())
            save_file << aVector[i] + '\n';
    }
    save_file.close();

}