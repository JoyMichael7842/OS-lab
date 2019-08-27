#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
	DIR *p;
	struct dirent *d;
	char name[10];
	printf("Enter Dir name :\n");
	scanf("%s",name);
	p = opendir(name);
	if(p == NULL){
		printf("Cannot find Directory\n");
		exit(-1);
	}
	while(d = readdir(p))
		printf("%s\n",d->d_name);
	printf("\n");
	return 0;
}
