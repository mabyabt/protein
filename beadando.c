

#include<stdio.h>	//Pre-processor directive

#include "pro.h"



void main()		//main function declaration
{
	
	
	freopen("aminosav.txt", "r", stdin);
	
	
	char s[128] ;
	int i=0;
	
	while(i!=128){
		scanf("%c" , &s[i]);
		
		//	 printf ("%c" , s[i]);
		
		 i++;
		
		
	}
	
	proc(s);
		 
	
	 

	
	 
	
	
 
}
