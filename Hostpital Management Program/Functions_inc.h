#pragma once

#include "Macros.h"
#include "MyPrint.h"
#include "Logic.h"

void printmenu(); //prints main menu
void console_size(); //gets console windows size
void printwlc(); // print welcome page at program startup
void login(); //printslogin menu
void Check_User(char User[], char Pass[]); //Validates Entered Username and Password
void Forgot_Password(); // Helps users recover their lost passwords
void Get_Date(); //gets Current date from user
void Admin_Menu(); //Prints Adminstrator Menu
void Add_Doctor();//Adds a new doctor to our doctor list

