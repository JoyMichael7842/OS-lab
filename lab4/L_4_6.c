#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main(){
	int fd1,fd2;
	char source[10],dest[10];
	printf("Enter source: \n");
	scanf("%s",source);
	printf("Enter destination : \n");
	scanf("%s",dest);
	source[strlen(source)] = '\0';
	dest[strlen(dest)] = '\0';
	fd1 = open(source,O_RDONLY);
	fd2 = open(dest,O_RDWR);
	if(fd1 == -1 || fd2 == -1){
		printf("Opening Error\n");
		printf("%d %d\n",fd1,fd2);
		exit(0);
	}
	char buf;
	int n;
	while((n = read(fd1,&buf,1)) != 0)
		write(fd2,&buf,1);
	close(fd1);
	close(fd2);
}
	
