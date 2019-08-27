#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){
	int fd;
	char name[10];
	printf("Enter file name : \n");
	scanf("%s",name);
	name[strlen(name)] = '\0';
	fd = creat(name,O_RDWR);
	if(fd == -1){
		printf("File Creation Error!\n");
		exit(-1);
	}
	int n;
	char buf[256];
	printf("Enter Text to write to file :\n ");
	scanf("%s",buf);
	write(fd,buf,strlen(buf));
	return 0;
}	
