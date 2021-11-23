/*
project: county library management system.
Author: elizabeth atieno
Date: oct 2021
Compiler: GNU GCC
Language: c99
Licence: MIT

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu (); // prototype
void execute_action(int action);
void close();
int main()
{
    int action;
    action = menu();
    execute_action(action);
    // execute action
    return 0;
}

int menu () //header
{
  int action;
    do{
        printf("\tcounty library\n");
        printf("welcome elizabeth atieno. \n");
        printf("what would you like to do?\n");
        printf("1.view users.\n");
        printf("2.add new user.\n");
        printf("3.edit user.\n");
        printf("4.delete user.\n");
        printf("5.change password.\n");
        printf("6.logout.\n");
        printf("7.exit.\n");
        printf("selected action(1-7): ");
        scanf("%d",&action);
        if(action < 1 || action > 7){
           system("cls");
           printf("invalid action. try again");

        }

    } while (action < 1 || action > 7);

    return action;
}
void execute_action (int action) {
    switch(action ) {
    case 1:
      printf("list of users\n");
      break;
    case 2:
      printf("add new user\n");
      break;
    case 3:
      printf("edit user\n");
      break;
    case 4:
      printf("delete user\n");
      break;
    case 5:
      printf("changing password\n");
      break;
    case 6:
      printf("you have been logged out\n");
      break;
    case 7:
      close();
      break;
    default:
      printf("invalid action\n");
    }
}

void close() {
     printf("Thanks for using the system\n");
     printf("Created by Elizabeth Atieno\n");
     printf("Bye\n");
     Sleep(2000);
     exit(0);
}

