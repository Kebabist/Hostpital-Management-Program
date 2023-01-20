#pragma once

#include "Macros.h"
#include "Functions_inc.h"
#include "Logic.h"

#pragma warning (disable:4996)

int Console_rows;
int Console_cols;

void login();
void Admin_Menu();

//gets the current console windows size
void console_size() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	Console_cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	Console_rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

//prints welcome page at startup
void printwlc() {
	console_size();
	SetCursorPos(1, 1);
	int i ;
	for (i = 0; i < 5852; i++) {
		printf(Hospital);
		}
	i = 11704;
	if (i ==11704) {
		printf("\u001b[28A");
		i -= 5851;
		printf("\u001b[103D");
		i -= 98;
		if (i == 5755)
			// Wellcome length = 16
		{
			for (int j = 0; j < 8; j++) {
				Sleep(250);
				printf("\b");
				printf(" ");
				printf("\u001b[1D");
			}
			Sleep(100);
			//printf("\x1b[31m");
			printf(BRed W);
			Sleep(100);
			printf(BRed E);
			Sleep(100);
			printf(BRed L);
			Sleep(100);
			printf(BRed L);
			Sleep(100);
			printf(BRed C);
			Sleep(100);
			printf(BRed O);
			Sleep(100);
			printf(BRed M);
			Sleep(100);
			printf(BRed E);
			
			printf("\u001b[1B");
			i += 209;
			printf("\u001b[3D");
			i -= 7;
			for (int k = 0; k < 2; k++) {
				Sleep(250);
				printf("\b");
				printf(" ");
				printf("\u001b[1D");
			}
			if (i == 5957)//5938
			{
				Sleep(100);
				printf(BYellow T);
				Sleep(100);
				printf(BYellow O);
			}
			printf("\u001b[1B");
			i += 209;
			printf("\u001b[14C");
			i -= 17;
			for (int j1 = 0; j1 < 27; j1++) {
				Sleep(250);
				printf("\b");
				printf(" ");
				printf("\u001b[1D");
			}
			if (i == 6149)//6130
			{
				Sleep(100);
				printf(BRed C);
				Sleep(100);
				printf(BRed L);
				Sleep(100);
				printf(BRed I);
				Sleep(100);
				printf(BRed N);
				Sleep(100);
				printf(BRed I);
				Sleep(100);
				printf(BRed C);
				Sleep(100);
				printf(" ");
				Sleep(100);
				printf(BRed M);
				Sleep(100);
				printf(BRed A);
				Sleep(100);
				printf(BRed N);
				Sleep(100);
				printf(BRed A);
				Sleep(100);
				printf(BRed G);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed M);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed N);
				Sleep(100);
				printf(BRed T);
				Sleep(100);
				printf(" ");
				Sleep(100);
				printf(BRed P);
				Sleep(100);
				printf(BRed R);
				Sleep(100);
				printf(BRed O);
				Sleep(100);
				printf(BRed G);
				Sleep(100);
				printf(BRed R);
				Sleep(100);
				printf(BRed A);
				Sleep(100);
				printf(BRed M);
			}
		}
	}
	gotoxy(108, 33);
	for (int j4 = 0; j4 < 11; j4++) {
		Sleep(250);
		printf("\b");
		printf(" ");
		printf("\u001b[1D");
	}
	Sleep(100);
	printf(BRed E);
	Sleep(100);
	printf(BRed M);
	Sleep(100);
	printf(BRed E);
	Sleep(100);
	printf(BRed D);
	Sleep(100);
	printf(BRed I);
	Sleep(100);
	printf(BRed C);
	Sleep(100);
	printf(" ");
	Sleep(100);
	printf(BRed C);
	Sleep(100);
	printf(BRed M);
	Sleep(100);
	printf(BRed S);
	gotoxy(122, 50);
	for (int j2 = 0; j2 < 36; j2++) {
		Sleep(125);
		printf("\b");
		printf(" ");
		printf("\u001b[1D");
	}
	printf("Please Press Any key to Continue...");
	getch();
}

//gets the user profile name and call for a save in a file
//
//void profile() {
//	/*char Profile_Name[20] = {};*/
//	/*struct Login lg;*/
//	/*int index = readindex();
//	char str[32];
//	Sleep(1);
//	int i = index;*/
//	/*lg[i].Name = str;*/
//	char Name[32] = {};
//Retry: while (Name[0] == '\0' || Name[1] == '\0') {
//	system("cls");
//	gotoxy(95, 28);
//	printf("\u001b[32;1mPlease Enter Your Name: ");
//	/*scanf("%[^�n�]s", &Profile_Name);*/
//	gets_s(Name);
//	if (strlen(Name) <= 1) {
//		system("cls");
//		gotoxy(95, 28);
//		printf("\u001b[31;1mUser Name is not Valid.");
//		Sleep(2000);
//		goto Retry;
//	}
//}
///*writeindex(i);*/
//WritetomyFile(Name);
//gotoxy(1, 55);
//printf("\n \x1b[37mUser Profile Was Created Successfully.");
//Sleep(1500);
//system("cls");
//printmenu ();
//
//}

// prints Main menu
void printmenu() {
	char choice;
	system("cls");
	gotoxy(97, 2);
	printf(BWhite E M E D I C " " C M S RESET);
	gotoxy(95, 20);
	gotoxy(95, 25);
	printf("\u001b[36;1m1. Sign in");
	gotoxy(95, 26);
	printf("\u001b[36;1m2. Forgot Password");
	gotoxy(95, 27);
	printf("\u001b[36;1m3. Exit");
	gotoxy(95, 28);
	printf("\u001b[1m\u001b[35;1mEnter your choice :  ");
	gotoxy(116, 28);
		choice=getch();
			switch (choice)
			{
			case '1':
				system("cls");
				gotoxy(90, 28);
				login();
				break;
			case '2':
				system("cls");
				Forgot_Password();
				break;
			case '3':
				system("cls");
				gotoxy(95, 28);
				printf(BYellow "All Done!!!\n\n\n\n\n\n\n\n\n\n" RESET);
				_exit(0);
				break;
			default:
				system("cls");
				fflush(stdin);
				gotoxy(95, 28);
				printf("\x1b[31mPlease Enter a valid number!");
				Sleep(2500);
				printmenu();
				break;
			}
}
// gets user and Password from user input and passes it to get verified
void login() {
	system("cls");
	gotoxy(97, 2);
	printf(BWhite E M E D I C " " C M S RESET);
	gotoxy(84, 22);
	printf(BGreen"Type in Back to go back to Main Menu." RESET);
	gotoxy(84, 23);
	printf(BGreen"Username For Patients & Doctors is their National ID Number.");
	char Username[33];
	char Password[33];
	gotoxy(95, 28);
	printf(BBlue"Username: " RESET);
	gotoxy(105, 28);
	/* scanf("%16s", &Username);*/
	scanf("%32[^\n]s", &Username);
	if (!strcmpi(Username, "Back"))  printmenu();
	if (strlen(Username) > 32 || Username[0] == '\0') {
		while (getchar() != '\n');
		system("cls");
		gotoxy(85, 28);
		printf(F_RED"Username Must not be longer than 32 Characters!" RESET);
		Sleep(2500);
		login();
	}
	gotoxy(95, 29);
	printf(BBlue"Password: " RESET);
	gotoxy(105, 29);
	int index = 0;
	do {
		Password[index] = _getch();
		if (Password[index] != '\r' && Password[index] > 31 && Password[index] < 127) {
			printf("*");
			index++;
		}
		//else if (Password[index] == 8 && index > 0) {
		//	printf("\b");
		//	printf(" ");
		//	printf("\u001b[1D");
		//	index--;
		//}
		if (index > 32) {
			gotoxy(85, 31);
			printf(F_RED"Password Must not be longer than 32 Characters!" RESET);
			Sleep(2000);
			gotoxy(138, 29);
			int x = 138;
			while (x != 106) {
				while (getchar() != '\n');
				fflush(stdin);
				gotoxy(x, 29);
				printf("\b");
				printf(" ");
				printf("\b");
				x--;
				index--;
				if (x == 106) break;
			}
			continue;
		}
	} while (Password[index - 1] != '\r');
	Password[index - 1] = '\0';
	if (!strcmpi(Password, "Back")) printmenu();

	Check_User(Username, Password);
}
//Prints Adminstrator Menu
void Admin_Menu() {
	while (getchar() != '\n');
	fflush(stdin); // clearing buffer
	char choice;
	system("cls");
	gotoxy(95, 25);
	printf("\u001b[36;1m1. Add New Doctor");
	gotoxy(95, 26);
	printf("\u001b[36;1m2. Add New Patient");
	gotoxy(95, 27);
	printf("\u001b[36;1m3. Monthly Schedule");
	gotoxy(95, 28);
	printf("\u001b[36;1m4. Visit Schedule");
	gotoxy(95, 26);
	printf("\u001b[36;1m5. Main Menu");
	gotoxy(95, 27);
	printf("\u001b[36;1m6. Exit");
	gotoxy(95, 28);
	printf("\u001b[1m\u001b[35;1mPlease Enter your choice : ");
	gotoxy(95, 28);
	choice = getchar();
	switch (choice){
		case '1':
			system("cls");
			Add_Doctor();
			break;
		case '2':
			system("cls");
			break;
		case '3':
			system("cls");
			break;
		case '4':
			system("cls");
			break;
		case '5':
			system("cls");
			while (getchar() != '\n');
			printmenu();
			break;
		case '6':
			system("cls");
			gotoxy(95, 28);
			printf(BYellow "All Done!!!\n\n\n\n\n\n\n\n\n\n" RESET);
			_exit(0);
			break;
		default:
			system("cls");
			fflush(stdin);
			gotoxy(95, 28);
			printf("\x1b[31mPlease Enter a valid number!");
			Sleep(2500);
			break;
	}
		
}
////prints newgame menu
//void newgame() {
//	while (getchar() != '\n');
//	fflush(stdin); // clearing buffer
//	int choice;
//repnewgame:	system("cls");
//	gotoxy(95, 25);
//	printf("\u001b[36;1m1. Continue");
//	//gotoxy(95, 26);
//	//printf("\u001b[36;1m2. Intermediate 16X16");
//	//gotoxy(95, 27);
//	//printf("\u001b[36;1m3. Expert 30X16");
//	//gotoxy(95, 28);
//	//printf("\u001b[36;1m4. Veteran");
//	gotoxy(95, 26);
//	printf("\u001b[36;1m2. Main Menu");
//	gotoxy(95, 27);
//	printf("\u001b[1m\u001b[35;1mEnter your choice :  ");
//	while (1) {
//
//		scanf("%d", &choice);
//
//		if (choice == 0 || choice == EOF || choice == '\n' || choice > 10 || choice < 0) {
//			while (getchar() != '\n');
//			system("cls");
//			gotoxy(95, 28);
//			printf("\x1b[31mPlease Enter a valid number!");
//			Sleep(2000);
//			goto repnewgame;
//		}
//		else {
//			switch (choice)
//			{
//			case 1:
//				system("cls");
//				Logic();
//				break;
//		//	case 2:
//		//		system("cls");
//		//		Logic(16, 16, 16);
//		//		break;
//		//	case 3:
//		//		system("cls");
//		//		Logic(30, 16, 21);
//		//		break;
//		//	case 4:
//		//revet:	system("cls");
//		//		int r, c;
//		//		printf("please Enter number of Rows: ");
//		//		scanf("%d", &r);
//		//		printf("please Enter number of Columns: ");
//		//		scanf("%d", &c);
//		//		//printf("please Enter number of Mines: ");
//		//		//scanf("%d", &m);
//		//		if (r < 1 || c < 1 ) {
//		//			while (getchar() != '\n');
//		//			system("cls");
//		//			gotoxy(95, 28);
//		//			printf("\x1b[31mPlease Enter a valid numbers!");
//		//			Sleep(2500);
//		//			goto revet;
//		//		}
//		//		Logic(r, c, 30);
//		//		break;
//			case 2:
//				system("cls");
//				while (getchar() != '\n');
//				printmenu();
//				break;
//			default:
//				system("cls");
//				gotoxy(95, 28);
//				printf("\x1b[31mPlease Enter a valid number!");
//				Sleep(2500);
//				goto repnewgame;
//				break;
//			}
//
//		}
//	}
//	intro = 1;
//}
