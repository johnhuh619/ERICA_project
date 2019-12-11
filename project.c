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
	if(((int)'a'<=(int)id_passwd[0][] && (int)id_psswd[0][] <= (int)'z') || ((int)'A' <= (int)id_passwd[0][] && (int)id_passwd[0][] <= 'Z')){
		return 1; // if correct return 1 (t)
	}
	else
		return 0; //false return 0 (f)
} // must be fixxed..

int compare( char id_passwd[], int i){ // Id & psswd compare. to check
	if(strcmp(id_passwd, ID_pass[i])==0) // using string compare
		return 1;
	else 
		return 0;
}

int login (){
	char id[256]; // id
	printf("Whats youre ID?: ");
	scanf("%s",id);
	printf("\n");
	if(check(id)){ // exception handling
		char passwd[256];
		printf("Whats youre Password?: ");
		scnaf("%s",passwd);
		printf("\n");

		if(check(passwd)){ // exception handling

			if(compare(id,0));
			else{
				printf("ID is incorrect.\n");
				return 0;
			}
			if(compare(passwd,1)){
				return 1;
			}
			else{
				printf("Password is incorrect.\n");
			}
		}
		else{
			printf("Wrong Password Type...");
		}
	}
//not finished










