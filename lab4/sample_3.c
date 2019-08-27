#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
	int status;
	pid_t pid;
	pid = fork();
	if(pid == -1){
		printf("Error child not created\n");
	}
	else if(pid == 0){
		printf("Child process\n");
		exit(0);
	}
	else{
		wait(&status);
		printf("Parent process\n");
		printf("Child returned : %d\n",status);
	}
}
