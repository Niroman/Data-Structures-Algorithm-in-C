#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Find if the input string has duplicates

*/
void match_pattern(char *s,char *A, char *B)
{
  int count_A = 0;
  int count_B = 0;
  int string_length_A = strlen(s)-1;
  int string_length_B = strlen(A);
  string_length_A = string_length_A - (strlen(A)-1);
  //printf("%d",string_length);
  for (int i = 0; i<strlen(A);i++)
  {
    if(s[i] == A[i] && s[string_length_A] == A[i])
    {
      count_A++;
    }
    string_length_A++;
  }
  for (int i = 0; i<strlen(B);i++)
  {
    if(s[string_length_B] == B[i])
    {
      count_B++;
    }
    string_length_B++;
  }
  if (count_A == strlen(A) && count_B == strlen(B))
  {
    printf("The pattern is ABA \n");
    printf("A: %s \n",A);
    printf("B: %s \n",B);
    printf("Original String: %s \n",s);
  }
  else
  {
    printf("Its is not in the pattern ABA \n");
    printf("Original String is: %s \n",s);
  }
}
int main()
{
  // ptr=(cast-type*)malloc((sizeof(cast-type)*N))
  //Calloc -> Assigns each value with a zero
  char *s = malloc(sizeof(char)*256);
  char *A = malloc(sizeof(char)*256);
  char *B = malloc(sizeof(char)*256);
  printf("Enter the Original Strings \n");
  //getchar();//Must press enter before you can type the Input
  scanf("%[^\n]*c",s);
  printf("Enter the Sub-String A \n");
  getchar(); //Stop the program and take another user input
  scanf("%[^\n]*c",A);
  printf("Enter the Sub-String B \n");
  getchar();
  scanf("%[^\n]*c",B);
  match_pattern(s,A,B); //Function Call passing by reference
}
