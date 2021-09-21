#include <signal.h>
#include <stdio.h>
#include <string.h>
int main(){
	char realPassword[20];
	char givenPassword[20];

	strncpy(realPassword, "ddddddddddddddd", 20);
	gets(givenPassword);
	
	if (0 == strncmp(givenPassword, realPassword, 20)){
		printf("SUCCESS!\n");
	}else{
		printf("FAILURE!\n");
	}
	
	printf("givenPassword: %s\n", givenPassword);
	printf("realPassword: %s\n", realPassword);
	raise(SIGINT);
	return 0;
}
