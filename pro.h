#include<stdio.h>	//Pre-processor directive

void proc(char str[]){
	
	int i=0;
	int c=0;
	int h=0;
	int n=0; int s=0;int o=0;
	int k=2;
	printf("proc");
	while (i<128){
		printf("%c\n", str[i]);
		i=+1;
		printf("%c\n", str[i]);
		i=+1;
		printf("%c\n", str[i]);
		i=+1;
		printf("%c\n", str[i]);
		
		c = atoi(str[i]) *12;
		i=+1;
		h = atoi(str[i]) ;
		i++;
		o = atoi(str[i]) *16 ;
		i++;
		n = atoi(str[i]) *14 ;
		i++;
		s = atoi(str[i])*32 ;
		printf("%d\n", c+h+o+n+s);
		
		
	}
	
	
	
	
	
}
