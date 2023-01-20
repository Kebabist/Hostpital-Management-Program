#pragma once

#include "Macros.h"

// prints the game's starting welcome page
#pragma warning (disable:4996)
int Console_rows;
int Console_cols;

int intro = 0;

void printmenu();
void newgame();

//gets the current console windows size
void console_size() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	Console_cols = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	Console_rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}
//prints game's welcome page at program start
void printwlc() {
	console_size();
	SetCursorPos(1, 1);
	int i;
	for (i = 0; i < (Console_cols * Console_rows); i++) {
		printf(BBlue Diamond);
		}
	
	if (i == (Console_cols * Console_rows)) {
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
			//}
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
			printf("\u001b[7C");
			i -= 17;
			for (int j1 = 0; j1 < 16; j1++) {
				Sleep(250);
				printf("\b");
				printf(" ");
				printf("\u001b[1D");
			}
			if (i == 6149)//6130
			{
				Sleep(100);
				printf(BRed M);
				Sleep(100);
				printf(BRed I);
				Sleep(100);
				printf(BRed N);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed S);
				Sleep(100);
				printf(BRed W);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed P);
				Sleep(100);
				printf(BRed E);
				Sleep(100);
				printf(BRed R);
				Sleep(100);
				printf(" ");
				Sleep(100);
				printf(BRed G);
				Sleep(100);
				printf(BRed A);
				Sleep(100);
				printf(BRed M);
				Sleep(100);
				printf(BRed E);
			}
		}
	}
	gotoxy(122, 50);
	for (int j2 = 0; j2 < 35; j2++) {
		Sleep(125);
		printf("\b");
		printf(" ");
		printf("\u001b[1D");
	}

	printf("Please Press Any key to Continue...");
	getch();
}

//gets the user profile name and call for a save in a file

void profile() {
	/*char Profile_Name[20] = {};*/
	/*struct Login lg;*/
	/*int index = readindex();
	char str[32];
	Sleep(1);
	int i = index;*/
	/*lg[i].Name = str;*/
	char Name[32] = {};
Retry: while (Name[0] == '\0' || Name[1] == '\0') {
	system("cls");
	gotoxy(95, 28);
	printf("\u001b[32;1mPlease Enter Your Name: ");
	/*scanf("%[^�n�]s", &Profile_Name);*/
	gets_s(Name);
	if (strlen(Name) <= 1) {
		system("cls");
		gotoxy(95, 28);
		printf("\u001b[31;1mUser Name is not Valid.");
		Sleep(2000);
		goto Retry;
	}
}
/*writeindex(i);*/
WritetomyFile(Name);
gotoxy(1, 55);
printf("\n \x1b[37mUser Profile Was Created Successfully.");
Sleep(1500);
system("cls");
printmenu ();

}

// prints Main menu
void printmenu() {
	int choice;
repmenu: system("cls");
	gotoxy(95, 20);
	printf(BWhite Gamer " ");
	readfile("C:\\Users\\Kebabist\\source\\repos\\Takhribchi\\UserProfiles.txt");
	printf(" " BWhite Gamer) ;
	gotoxy(95, 25);
	printf("\u001b[36;1m1. User records");
	gotoxy(95, 26);
	printf("\u001b[36;1m2. New Game");
	gotoxy(95, 27);
	printf("\u001b[36;1m3. Change User");
	gotoxy(95, 28);
	printf("\u001b[36;1m4. Exit");
	gotoxy(95, 29);
	printf("\u001b[1m\u001b[35;1mEnter your choice :  ");
	gotoxy(116, 29);
	while (1) {

		scanf("%d", &choice);

		if (choice == 0 ||choice == EOF || choice == '\n' || choice > 10 || choice < 0) {
			while (getchar() != '\n');
			system("cls");
			gotoxy(95, 28);
			printf("\x1b[31mPlease Enter a valid number!");
			Sleep(2000);
			goto repmenu;
		}
		else {
			switch (choice)
			{
			case 1:
				system("cls");
				gotoxy(90, 28);
				readfile("C:\\Users\\Kebabist\\source\\repos\\Takhribchi\\UserProfiles.txt");
				gotoxy(85, 50);
				printf("Please Press Any key to go bacck to Main Menu");
				getch();
				goto repmenu;
				break;
			case 2:
				system("cls");
				newgame();
				break;
			case 3:
				system("cls");
				while (getchar() != '\n') { system("cls"); }
				profile();
				break;
			case 4:
				system("cls");
				gotoxy(95, 28);
				printf(BYellow "Have Fun!!!" RESET);
				_exit(0);
				break;
			default:
				system("cls");
				gotoxy(95, 28);
				printf("\x1b[31mPlease Enter a valid number!");
				Sleep(2500);
				goto repmenu;
				break;
			}
		}
	}
}
//prints newgame menu
void newgame() {
	while (getchar() != '\n');
	fflush(stdin); // clearing buffer
	int choice;
repnewgame:	system("cls");
	gotoxy(95, 25);
	printf("\u001b[36;1m1. Continue");
	//gotoxy(95, 26);
	//printf("\u001b[36;1m2. Intermediate 16X16");
	//gotoxy(95, 27);
	//printf("\u001b[36;1m3. Expert 30X16");
	//gotoxy(95, 28);
	//printf("\u001b[36;1m4. Veteran");
	gotoxy(95, 26);
	printf("\u001b[36;1m2. Main Menu");
	gotoxy(95, 27);
	printf("\u001b[1m\u001b[35;1mEnter your choice :  ");
	while (1) {

		scanf("%d", &choice);

		if (choice == 0 || choice == EOF || choice == '\n' || choice > 10 || choice < 0) {
			while (getchar() != '\n');
			system("cls");
			gotoxy(95, 28);
			printf("\x1b[31mPlease Enter a valid number!");
			Sleep(2000);
			goto repnewgame;
		}
		else {
			switch (choice)
			{
			case 1:
				system("cls");
				Logic();
				break;
		//	case 2:
		//		system("cls");
		//		Logic(16, 16, 16);
		//		break;
		//	case 3:
		//		system("cls");
		//		Logic(30, 16, 21);
		//		break;
		//	case 4:
		//revet:	system("cls");
		//		int r, c;
		//		printf("please Enter number of Rows: ");
		//		scanf("%d", &r);
		//		printf("please Enter number of Columns: ");
		//		scanf("%d", &c);
		//		//printf("please Enter number of Mines: ");
		//		//scanf("%d", &m);
		//		if (r < 1 || c < 1 ) {
		//			while (getchar() != '\n');
		//			system("cls");
		//			gotoxy(95, 28);
		//			printf("\x1b[31mPlease Enter a valid numbers!");
		//			Sleep(2500);
		//			goto revet;
		//		}
		//		Logic(r, c, 30);
		//		break;
			case 2:
				system("cls");
				while (getchar() != '\n');
				printmenu();
				break;
			default:
				system("cls");
				gotoxy(95, 28);
				printf("\x1b[31mPlease Enter a valid number!");
				Sleep(2500);
				goto repnewgame;
				break;
			}

		}
	}
	intro = 1;
}

//void gotoxy(int x, int y)
//{
//	cord.X = x;
//	cord.Y = y;
//	SetConsoleCursorPosition(
//		GetStdHandle(STD_OUTPUT_HANDLE),
//		cord);
//}