#include<stdio.h>	//Pre-processor directive


void count(char s[128]){
	int i=0;
	
	while (i!=128){
		int k ;
		if(i==2){
			i=k;
			
		}
		
	
		if(i%8==0 || k==2){
			k=i;
			AweightC((int)s[k]);
			
			AweightH((int)s[k+1]);
			
			
			AweightO((int)s[k]+2);
			
			AweightN((int)s[k+3]);
			
			
			AweightS((int)s[k+4]);
			
			k=0;
			
		}
		
		i++;
	}
	
	
	
	
}




int AweightC (int a){
int w;

w= a;




return w;
}
int AweightH (int a){
int w;

w= a*1;

return w;
}
int AweightO (int a){
int w;

w= a*16;


return w;
}


int AweightN (int a){
int w;

	w= a*14;


return w;
}
int AweightS (int a){
int w;

w= a*12;




return w;
}




