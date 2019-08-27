#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(){
	char dirname[10];
	DIR *p;
	struct dirent *d;
	printf("Enter Directory name : \n");
	scanf("%s",dirname);
	p = opendir(dirname);
	if(p == NULL){
		printf("Cannot find Directory \n");
		return 0;
	}
	while(d = readdir(p))
		printf("%s\n",d->d_name);
	return 0;
}
