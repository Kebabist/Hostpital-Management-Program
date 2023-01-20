#pragma once

#include "Functions_inc.h"
#include "MyPrint.h"

#pragma warning (disable:4996)

int mode = 0;

void Admin_Menu();
void Check_User(char User[], char Pass[]);
void printmenu();

typedef struct Doctor {
    char NIC[33];
    char Email[65];
    unsigned int Wallet;
    Doctor* next;
}Doctor;
struct Doctor* HeadD = NULL;

typedef struct Patient {
    char ID[32];
    char Name[32];
    char Visits[32];
    unsigned int Wallet;
    Patient* next;
}Patient;
struct Patient* HeadP = NULL;

//Gets the current date from User
void Get_Date() {
    gotoxy(95, 28);
    printf("Please Enter Current Date: ");
    gotoxy(122,28);

}


//verifies the user credentials
void Check_User(char User[],char Pass[]) {
    if (!strcmp(User, "Admin")) {
        if (!strcmp(Pass, "Admin")) {
            mode = 1;
            gotoxy(1, 56);
            printf(BWhite"Signed in Successfully.");
            Sleep(1500);
            Admin_Menu();
            return;
        }
           
    }
    else {
    }
}

//Helps Users to Recover their Forgotten Passwords
void Forgot_Password() {

}

//Appends a new Doctor to the end of the list
void Add_Doctor() {
    system("cls");
    struct Doctor* newnode, * ptr;
    newnode = (struct Doctor*)malloc(sizeof(struct Doctor));
    newnode->next = NULL;
    ptr = HeadD;
    gotoxy(95, 28);
    printf("National ID Number: ");
    gotoxy(115, 28);
    scanf("%32s", newnode->NIC);
    printf("%s", newnode->NIC);
    gotoxy(95, 29);
    printf("Email: ");
    gotoxy(102, 28);
    scanf("%64s", newnode->Email);
    printf("%s", newnode->Email);
    if (HeadD == NULL) {
        HeadD = newnode;
        return;
    }
    //traverse through the list till it gets past the last element in the list
    while (ptr->next != NULL) ptr = ptr->next;
    ptr->next = newnode;

}
