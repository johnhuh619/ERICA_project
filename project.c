#include <stdio.h>
#include <string.h>
//bank account program
char ID_pass[2][9];//ID&password global
int account = 0; //account data

void make(){
	printf("Your ID: ");
	scanf("%s",ID_pass[0]);
	printf("ID: %s",ID_pass[0]);
	printf("\nYour Passwowrd: ");
	scanf("%s",ID_pass[1]);
	printf("Password: %s",ID_pass[1]);
}

void deleted(){
	printf("Your account had been deleted");
	for(int k = 0; k<2 ; k++){
		for(int i = 0; i<9; i++){
			ID_pass[k][i] = NULL;
		}
	}
	account = 0;
}

void menu();

int check(char id_passwd[]){  //ID and Password checking func
	if(((int)'a'<=(int)id_passwd[0] && (int)id_passwd[0] <= (int)'z') || ((int)'A' <= (int)id_passwd[0] && (int)id_passwd[0] <= 'Z') || ((int)id_passwd[0]>= '0' && (int)id_passwd[0]<='9')){
		return 1; // if correct return 1 (t)
	}
	else
		return 0; //false return 0 (f)
} // must be fixxed..(fixed once)

int compare( char id_passwd[], int i){ // Id & psswd compare. to check
	if(strcmp(id_passwd, ID_pass[i])==0){// using string compare
		printf("string is same\n");
		return 1;
	}
	else 
		return 0;
}

int login (){
	char id[256]; // id
	char passwd[256];
	printf("Whats youre ID?: ");
	scanf("%s",id);
	printf("\n");
	if(check(id)){ // exception handling
		printf("Whats youre Password?: ");
		scanf("%s",passwd);
		printf("\n");

		if(check(passwd)){ // exception handling
			printf("loop in\n");
			if(compare(id,0)){
				if(compare(passwd,1)){
						return 1;
				}
				else{
					printf("Password is incorrect.\n");
					return 0;
					}
				}
			else{
				printf("ID is incorrect.\n");
				return 0;
				}
		}
		else{
			printf("Wrong Password Type...");
		}
	}
}
//not finished
void account_check(){//account checking func
	if(login()==1){
		printf("ID:%s you have %d in your account.\n",ID_pass[0],account);
	}
}
void deposit(){//in
	int num;
	if(login()==1){
		printf("How much you want to deposit?");
		scanf("%d",&num); // scan address of num
		if(num!=-1){
			account+=num;
			printf("ID:%s you have %d in your account.\n",ID_pass[0],account);
		}
	}
}
void withdraw(){//out
	int num;
	if(login()==1){
		printf("How much you want to withdraw?");
		scanf("%d",&num);
		if(num != -1){
			if(num > account){
				printf("You don't have enough balance");
			}
			else{
				account -= num;
				printf("ID:%s you have %d in your account.\n",ID_pass[0],account);
			}
		}
	}
}

void menu(){
	while(1){
		int ans; // 1 ~ 4 to select menu
		printf(" (Select command ...)\n");
		printf(" (1) Account check \n");
		printf(" (2) Deposit \n");
		printf(" (3) Withdraw \n");
		printf(" (4) Make Account \n");
		printf(" (5) Delete Account \n");
		printf(" (6) QUit \n");
		printf("Select menu: ");
		scanf("%d",&ans);
		
		if(ans==1)
			account_check();
		else if(ans==2)
			deposit();
		else if(ans==3)
			withdraw();
		else if(ans==4)
			make();
		else if(ans==5)
			deleted();
		else if(ans==6)
			break; // fix plz
		else
			printf("try again.\n)");
	}
}

void main(){
	menu();
}
			








