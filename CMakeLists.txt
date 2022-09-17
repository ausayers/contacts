cmake_minimum_required(VERSION 3.10)

# set the project name
project(contacts)

# specifiy the c++ standard 
set (CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(contacts
	src/main.cpp
	src/display.cpp
	src/contacts.h
	src/load-contacts.cpp
	src/save-contacts.cpp
	src/manage-contacts.cpp
	)