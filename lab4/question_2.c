#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	pid_t pid;
	int status = 0;
	pid = fork();
	char *lnk[] = {"./question_1",NULL};
	if(pid == 0){
		printf("Child running ./question_1 \n");
        	if (execvp(lnk[0], lnk) < 0){
			printf("Failed\n");
		}
            		exit(1);
	}
	else{
		wait(&status);
		printf("Parent process of q2  completed!\n");

	}
}
