#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	pid_t pid = fork();
	int status = 0;
	if(pid == 0){
		printf("Child Process running\n");
		sleep(3);
		printf("Child Process completed\n");
	}
	else{
		printf("Parent process running\n");
		wait(&status);
		printf("Parent waited\n");
	}
}
