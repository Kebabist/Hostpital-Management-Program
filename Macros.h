#pragma once

#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//Bright 16 Colors
#define BBlack  "\u001b[30; 1m"
#define	BRed  "\u001b[31;1m"
#define	BGreen  "\u001b[32;1m"
#define	BYellow  "\u001b[33;1m"
#define	BBlue  "\u001b[34;1m"
#define	BMagenta  "\u001b[35;1m"
#define	BCyan  "\u001b[36;1m"
#define	BWhite  "\u001b[37;1m"
#define	Reset  "\u001b[0m"

//Regular 8 Colors
#define RESET           "\033[0m"
#define F_GRAY          "\033[1;30m"
#define B_GRAY          "\033[1;30;47m"
#define F_BLUE          "\033[0;34m"
#define F_GREEN         "\033[0;32m"
#define F_RED           "\033[1;31m"
#define F_D_BLUE        "\033[1;34m"
#define F_PINK          "\033[0;35m"
#define F_CYAN          "\033[0;36m"
#define F_L_GRAY        "\033[0;37m"
#define F_YELLOW        "\033[0;33m"
#define B_RED_F_BLACK   "\033[0;30;41m"
#define B_YELL_F_BLACK	"\033[7;49;33m"

//unicode macros
#define A "\U00000041"
#define C "\U00000043"
#define E "\U00000045"
#define G "\U00000047"
#define I "\U00000049"
#define N "\U0000004E"
#define M "\U0000004D"
#define O "\U0000004F"
#define L "\U0000004C"
#define P "\U00000050"
#define R "\U00000052"
#define S "\U00000053"
#define T "\U00000054"
#define W "\U00000057"
#define Diamond "\U000025C8"
#define flag "\U0001F6A9"
#define Bomb "\U0001F4A9"//"\U0001F4A3"
#define Orange_sqr "\U0001F7E5"
#define Gamer "\U0001F3AE"

#endif