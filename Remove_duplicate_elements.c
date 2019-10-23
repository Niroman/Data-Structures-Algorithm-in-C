#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int count_output =0;
  int count1_repeat = 0;
  char original_input[100]=" "; //In C program we get Input strings as Character array only
  char copy_input[100]=  " ";//Initialize it with the space to avoid the garbage value at the end
  char output_input[100]=" ";
  scanf("%[^\n]*c",original_input); //Get Input as a string with a space and end it with a new line
  //printf("%s",original_input);//Print it as a string
  int str_len=0;
  str_len = strlen(original_input);
  printf("string :%d \n",str_len);
  for (int i = 0 ; i<str_len ; i++)
  {
    copy_input[i]=original_input[i];
  }
/*
Algorithm
  1. Copy the values to another set of array
  2. Add the first element to the outptut list
  3. Check for the elements in the output list, if the character is not found add this character to the output list
*/
  int i = 0;
  char temp;
  while(copy_input[i] != '$')
  {
    temp = copy_input[i]; //Copy the unique character to be searched and added to the outputlist
    if (count_output == 0) //Adding the 1st value to the list
    {
      output_input[count_output] = copy_input[i];
      count_output++;
      i++;
    }
    else
    {
      for(int j = 0; j<=count_output ; j++) //Linear check to find if the element is present in the output list
      {
        if (temp!=output_input[j])
        {
          count1_repeat++;
        }
      }
      count1_repeat--; //Subtracting one so that the count value starts from zero offset
      if(count1_repeat == count_output)
      {
        output_input[count_output] = temp; //adding the unique value to the o/p list
        count_output++;
        i++;
        count1_repeat=0;
      }
      else
      {
        count1_repeat=0;
        i++; //Incrementing if a duplicate character is found
      }
    }
  }
  printf("%d \n",strlen(output_input));
  printf("%s \n",output_input); //Print it as a String
  return 0;
}
