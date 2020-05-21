

#include<stdio.h>	//Pre-processor directive

#include "struct.h"



void main()		//main function declaration
{
	
	    FILE *out = fopen("eredmeny.txt", "w");
	freopen("aminosav.txt", "r", stdin);
	
	struct aminosav sav[100];
	//char sav[128] ;
	int i=1;
	int v=0;
	
	while(i!=128){
		/*scanf("%s[^\n]" , &sav[i].name);
		printf("::%s\n", sav[i].name);*/
		scanf("%s[^\n]" , &sav[i].name);
		scanf("%d[^\n]" , &sav[i].c);
		scanf("%d[^\n]" , &sav[i].h);
		scanf("%d[^\n]" , &sav[i].n);
		scanf("%d[^\n]" , &sav[i].s);
		scanf("%d[^\n]" , &sav[i].o);
		v = (sav[i].c*12+sav[i].h+sav[i].o*16+sav[i].n*14+sav[i].s*32)-14;
		if(i%2==0 && v < 1000 && v >= 0 ){
			v = (sav[i].c*12+sav[i].h+sav[i].o*16+sav[i].n*14+sav[i].s*32)-14;
		fprintf(out ," %s :%d\n" ,sav[i].name,  v);
			
		}
		
		 i++;
		
		
	}
	
//	proc(s);
		 
	
	 

	
	 
	
	return 0;
 
}
