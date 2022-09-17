// Header file for contacts application
// Austin Ayers Edited: 09/16/22


// from display.cpp
void greeting();
void display_contacts(std::vector<std::string> &aVector);
void main_menu();
void ask_contact();

// from load-contacts.cpp
bool file_exists(std:: string aFile);
void create_file(std::string aFile);
void loader(std::vector<std::string> &aVector);

// from save-contacts.cpp
//int save_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber);
void save_contacts(std::vector<std::string> &aVector);

// from manage-contacts.cpp
void add_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber, std::vector<std::string> &aVector);
void remove_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber,std::vector<std::string> &aVector);