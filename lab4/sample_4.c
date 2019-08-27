#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
	pid_t pid;
	pid = fork();
	if(pid < 0){
		fprintf(stderr,"Fork Falied");
		exit(-1);
	}
	else if (pid == 0){
		execlp("/bin/ls","ls",NULL);
	}
	else{
		wait(NULL);
		printf("Child Complete");
		exit(0);
	}
}

