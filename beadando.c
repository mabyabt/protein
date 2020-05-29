

#include<stdio.h>	//Pre-processor directive

#include "struct.h"



void main()		//main function declaration
{
	
	    FILE *out = fopen("eredmeny.txt", "w");
	freopen("aminosav.txt", "r", stdin);
	
	struct aminosav sav[100];
	//char sav[128] ;
	int i=0;
	int v[20];
	int sorted[20];
	while(i!=20){	int z=0;
		/*scanf("%s[^\n]" , &sav[i].name);
		printf("::%s\n", sav[i].name);*/
	
		
		scanf("%4s" , &sav[i].name);
		scanf("%s" , &sav[i].rovid);
		
		
		scanf("%d" , &sav[i].c);
		scanf("%d" , &sav[i].h);
		scanf("%d[^\n]" , &sav[i].n);
		scanf("%d[^\n]" , &sav[i].s);
		scanf("%d[^\n]" , &sav[i].o);
		v[i] = (sav[i].c*12+sav[i].h+sav[i].o*16+sav[i].n*14+sav[i].s*32)-14;
		sav[i].tomeg= v[i];
		//	v = (sav[i].c*12+sav[i].h+sav[i].o*16+sav[i].n*14+sav[i].s*32)-14;
		//	printf("%s:%d\n" ,sav[i].name,  sav[i].tomeg);
		fprintf(out ,"%s:%d\n" ,sav[i].name,  sav[i].tomeg);
			
		
		
		 i++;
		
		
	}
   fclose(stdin);
 FILE *bsa;
 bsa = fopen("bsa.txt", "r");
 

	char r='A';
			int c=0;
			int h=0;
			int n=0; 
			int s=0;
			int o=0;
			
			
			while(1) {
      r = fgetc(bsa);
      
      
      
      if( feof(bsa) ) {
         break ;
      
	  
	  }
	  	if(r=='C')c++;
	if(r=='H')h++;
	if(r=='N')n++;
	if(r=='S')s++;
if(r=='O')o++;
	  
    //  printf("%c", r);
   }
   	fprintf(out ,"C: %d, H: %d, N: %d, N: %d, S %d ,O: %d" ,c,h,n,s,o);


			
			

		 
	
	 

	
	 
	
	return 0;
 
}
