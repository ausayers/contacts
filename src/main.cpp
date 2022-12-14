// Contacts Application
// Austin Ayers Edited: 09/27/22
// depends on: display.cpp, contacts.h, my-contacts.txt, save-contacts.cpp, load-contacts.cpp, manage-contacts.cpp

#include <iostream>
#include <vector>
#include <limits>
#include "contacts.h"


int main(){
    // necessary inits
    std::vector<std::string> my_contacts;        // a vector for contacts
    int selection;                               // will store the current user option
    std::string first_name, last_name, number;   // specific contact information
    bool active = true;                          // active flag
    int number_of_added_contacts = 0;            // keep track of user activity
    std::string user_input;


    // check if save-file exist
    if(file_exists("my-contacts.txt")){
        // file exists so load contacts into my_contacts vector
        std::cout << "Loading Contacts from 'my-contacts.txt'\n";
        loader(my_contacts);
    } else {
        // file doesn't exist so create file
        std::cout << "Creating a save file 'my-contacts.txt'\n";

        // add encryption flag as first item (enable by default)
        my_contacts.push_back("file encryption: true");
        create_file("my-contacts.txt");
    }

    // enter loop to prompt user with options
    greeting();
    while(active){
        main_menu();

        std::cout << "selection: ";
        std::cin >> selection;

        switch(selection){
            case 1:
                // display all contacts
                display_contacts(my_contacts);
                break;

            case 2:
                // add a contact
                get_contact();
                std::cin >> first_name >> last_name >> number;
                add_contact(first_name, last_name, number, my_contacts);
                number_of_added_contacts++;
                break;

            case 3:
                // remove a contact
                get_contact();
                std::cin >> first_name >> last_name >> number;
                remove_contact(first_name, last_name, number, my_contacts);
                number_of_added_contacts--;
                break;

            case 4:
                // search by name
                ask_name();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear input buffer
                std::getline(std::cin, user_input);
                std:: cout << find_with_name(user_input, my_contacts) << std::endl; // display results
                break;

            case 5:
                // search by number
                ask_number();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear input buffer
                std::getline(std::cin, user_input);
                std::cout << find_with_number(user_input, my_contacts) << std::endl;
                break;

            case 6:
                // toggle encryption
                std::cout << toggle_encryption(my_contacts);
                break;

            case 7:
                // quit program
                std::cout << "Saving Contacts...\n";
                save_contacts(my_contacts);
                active = false;
                break;

            default:
                // invalid input - save and quit
                std::cout << "Invalid Input...\n";
                std::cout << "Saving Contacts...";
                save_contacts(my_contacts);
                active = false;
        }
    }
    return 0;
}