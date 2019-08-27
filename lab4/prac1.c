#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main(){
	int fd1,fd2;
	char buf1[10];
	char buf2[10];
	printf("enter names of files");
	scanf("%s",buf1);
	scanf("%s",buf2);
	buf1[strlen(buf1)] = '\0';
 	fd1 = open(buf1,O_RDONLY);
 	fd2 = open(buf2,O_RDWR);
 	char buf;
 	int n;
 	while(n=read(fd1,&buf,1)){
 		write(fd2,&buf,1);
 	}
 	close(fd1);
 	close(fd2);
}