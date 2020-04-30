#include <stdio.h>

 char lines [ 128 ]; /* or other suitable maximum line size */

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
      //char line [ 128 ]; /* or other suitable maximum line size */
      while ( fgets ( lines, sizeof lines, file ) != NULL ) /* read a line */
      {
         //fputs ( line, stdout ); /* write the line */
      }
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }
   return 0;}
