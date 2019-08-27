#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
int main(){
	char name[10];
	printf("Enter filename : \n");
	scanf("%s",name);
	name[strlen(name)] = '\0';
	int fd = open(name,O_RDWR);
	if(fd == -1){
		perror("File not found!");
		exit(-1);
	}
	char buf;
	int n,line = 0,chars = 0,words = 0;
	while((n = read(fd,&buf,1)) != 0){
		chars++;
		if(buf == ' ')
			words++;
		if(buf == '\n')
			line++;

	}
	printf("Lines : %d\nWords : %d\nCharacters : %d\n",line,words,chars);
	return 0;
	
	
}
