#include <stdio.h>
#include <string.h>
//bank account program
char ID_pass[2][9];//ID&password global
int account = 0; //account data

void make(){
	printf("Your ID: ");
	scanf("%s",ID_pass[0]);
	printf("\nYour Passwowrd: ");
	scanf("%s",ID_pass[1]);
}

void withdraw(){
	printf("Your account had been withdrawn");
	for(int k = 0; k<2 ; k++){
		for(int i = 0; i<9; i++){
			ID_pass[k][i] = NULL;
		}
	}
}

void menu();

int check(char id_passwd[]){  //ID and Password checking func
	if(((int)'a'<
