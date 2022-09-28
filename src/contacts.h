// Header file for contacts application
// Austin Ayers Edited: 09/27/22


// from display.cpp
void greeting();
void display_contacts(std::vector<std::string> &aVector);
void main_menu();
void get_contact();
void ask_name();
void ask_number();
void display_contact(int index, std::vector<std::string> &aVector);

// from load-contacts.cpp
bool file_exists(const std:: string& aFile);
void create_file(const std::string& aFile);
void loader(std::vector<std::string> &aVector);

// from save-contacts.cpp
//int save_contact(std::string aFirst_name, std::string aLast_name, std::string aNumber);
void save_contacts(std::vector<std::string> &aVector);

// from manage-contacts.cpp
void add_contact(const std::string& aFirst_name, const std::string& aLast_name, const std::string& aNumber, std::vector<std::string> &aVector);
void remove_contact(const std::string& aFirst_name, const std::string& aLast_name, const std::string& aNumber,std::vector<std::string> &aVector);
std::string find_with_name(const std::string& aName, std::vector<std::string> &aVector);
std::string find_with_number(const std::string& aNumber, std::vector<std::string> &aVector);