#include <stdio.h>

#include "Aweight.h"

 char lines [ 128 ]; /* or other suitable maximum line size */
	int AW=0;
int readAndPrint ( void )
{
   static const char filename[] = "aminosav.txt";
   FILE *file = fopen ( filename, "r" );
   if ( file != NULL )
   {
      char line [ 128 ]; /* or other suitable maximum line size */
      while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
      {
         fputs ( line, stdout ); /* write the line */
      }
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }
   return 0;
}




int read ( void )
{
   static const char filename[] = "aminosav.txt";
   FILE *file = fopen ( filename, "r" );
   if ( file != NULL )
   {
   					
   					int k= 0;
   					int i =0;
   					
      //char line [ 128 ]; /* or other suitable maximum line size */
      while ( fgets ( lines, sizeof lines, file ) != NULL ) /* read a line */
      {
      
      	
         fputs ( lines, stdout ); /* write the line */
       
	
		  }
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }
   
   count(lines);
   
   return 0;}
