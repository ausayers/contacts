// Functions for saving contacts to save file for use in Contacts application.
// Austin Ayers Edited 09/16/22

#include <iostream>
#include <vector>
#include <fstream>
#include "contacts.h"

void save_contacts(std::vector<std::string> &aVector){
    // overwrite save file with updated contacts
    std::ofstream save_file("my-contacts.txt", std::ofstream::trunc);

    for(int i=0; i<aVector.size(); i++){
        if(aVector[i] != "")
            save_file << aVector[i] + '\n';
    }
    save_file.close();

}