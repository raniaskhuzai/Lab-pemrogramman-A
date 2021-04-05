#include <stdio.h>
#include <string.h>

int main(void)
  {
     char* line = "its time,\t\tGoodbye world\0";
     int space = 0;
     int tab = 0;
     int i;
     int max = strlen(line);

     for (i = 0; i < max; i++ )
       {
          if ( line[i] == ' ' )
           {
              space++;
           }
          if ( line[i] == '\t' )
          {
             tab++;
          }
      }

   printf("Number of spaces: %i\n", space);
   printf("Number of tabs: %i\n", tab);

}
