#include <stdio.h>
#include <string.h>
#include "Header.h"
#define MAXSIZE 10
#define MAXOPT 3
void ErorrExitfunction(char*er) {
	fprintf(stderr, *er);
	exit(1);

}
char* RockPaperScissor(char*user_choice1, char* user_choice2) {
	char game[] = {"Stone,Paper,Scissor"};
	return '0';
}

int main(void) {
	char user_choice1[MAXSIZE]; // variable to store player1 choice
	char user_choice2[MAXSIZE]; // variable to store player2 choice

	RockPaperScissor(&user_choice1,&user_choice2);     
	return 0;
}