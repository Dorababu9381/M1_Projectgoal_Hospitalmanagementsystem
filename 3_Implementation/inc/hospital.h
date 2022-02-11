/**
 * @file hospital.h
 * @author your name (you@domain.com)
 * @brief Header file for hospital.c
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//Function Prototype
// Header gaurd
#ifndef hospital_H_
#define hospital_H_
//HEADER FILES

#include<stdio.h>//use for standard i/o operation
#include<windows.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

//Structure declaration
struct patient//List of global Variable
{
    int age;
    char Gender;
    char First_Name[20];
    char Last_Name[20];
    char Contact_no[15];
    char Address[30];
    char Email[30];
    char Doctor[20];
    char Problem[20];
};

//function Prototypes
int checker(int q);
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
void MainMenu(void);//MainMenu function decleration
void LoginScreen(void);//LoginScreen function decleration
void Add_rec(void);//Add_rec function declaration
void func_list();//function to list the patient details 
void Search_rec(void);//Search_rec function declaration
void Edit_rec(void);//Edit_rec function declaration
void Dlt_rec(void);//Dlt_rec function declaration
void ex_it(void);
void gotoxy(short x,short y);
void func_list();

#endif