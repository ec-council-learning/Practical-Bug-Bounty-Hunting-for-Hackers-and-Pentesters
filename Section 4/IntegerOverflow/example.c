#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	short uid;
	uid = atoi(argv[1]);
	printf("%d\n",uid);

	if (uid == 0){
		printf("You are admin!\n");
	}else{
		printf("You are a user!\n");
	}
}
