#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char *input_file, *temp_input;
   int i;
   input_file = (char*)malloc(100*sizeof(char));
   temp_input = (char*)malloc(100*sizeof(char));
   FILE *fptr;
   int temp_count = 0;
   int reverse_for_count=0;
   char a;
   int j;
   char b;
   int reverse_count1 = 0;
   int dot_count = 0;
   fptr = fopen("/Users/niromanjoearoc/Downloads/DSA/HW1/niro.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Input File: ");
   gets(input_file);
   fprintf(fptr,"%s",input_file);
   fprintf(fptr,"\n");
   for(i=0;i<=strlen(input_file);i++)
   {
     a = input_file[i];
     if(a != ' '|| i == strlen(input_file)) //if there is no space increase the counter and store it in an array
     {
       temp_input[temp_count]=a;
       temp_count = temp_count + 1;
     }
     if (a == ' ' || a == '$' || a =='?' || a == '#' || a == '!' || a == '^' || i == strlen(input_file))
     {
       if( input_file[i-1] == '.' || input_file[i-1] == '!' || a == '?' || a=='$')
       { //To keep the special characters in place
         reverse_count1=temp_count;
         reverse_count1=reverse_count1 - 1;
         reverse_for_count = reverse_count1;
         dot_count = dot_count+1;
       }
       else
       { //to reverse the characters
         reverse_count1=temp_count;
         reverse_for_count = reverse_count1;
       }
       for(j=0;j<reverse_for_count;j++)
       { //To reverse the string
         b=temp_input[reverse_count1-1];
         fprintf(fptr,"%c",b);
         printf("%c",b);
         reverse_count1=reverse_count1-1;
       }
       if (dot_count == 1)
       {
         if (a == '?' || a == '$'|| a == '!')
         { //TO print the special characters
           fprintf(fptr,"%c",a);
           printf("%c",a);
           dot_count=0;
         }
         else
         {  // To print the special characters
           fprintf(fptr, "%c", input_file[i-1]);
           printf("%c",input_file[i-1]);
           dot_count=0;
         }
       }
       if(a == ' ')
       { //To print the space
         fprintf(fptr,"%c",a);
         printf("%c",a);
         temp_count=0;
       }
       else
       { //To restart the count of each string inorder to reverse it
         temp_count=0;
       }
     }
   }
   printf("\n");
   fclose(fptr);
   return 0;
 }
