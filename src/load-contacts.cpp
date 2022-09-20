// Functions to load contacts from my-contacts.txt
// Austin Ayers Edited 9/16/22

#include <fstream>
#include <vector>
#include "contacts.h"

bool file_exists(std::string aFile){
    // return true if file exists
    std::fstream save_file;
    save_file.open(aFile);

    if(save_file.is_open()){
        save_file.close();
        return true;
    } else
        return false;
}

void create_file(std::string aFile) {
    // create file [aName].txt in current working directory
    std::ofstream new_file;
    new_file.open(aFile);
    new_file.close();
}

void loader(std::vector<std::string>  &aVector){
    // open saved contacts and transfer them into the passed vector
    std::fstream save_file;
    save_file.open("my-contacts.txt");

    std::string contact;
    while(getline(save_file, contact)){
        aVector.push_back(contact);
    }
    save_file.close();
}
