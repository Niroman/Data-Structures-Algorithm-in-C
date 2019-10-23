#include<stdio.h>
#include<stdlib.h>
//Initilaization a structure
//Typedef is used to name existing data structure with aliasing name.
typedef struct
{
  int first_month;
  int first_day;
  int second_month;
  int second_day;
}date;
int main()
{
  date d;
  int days_after=0;
  int days_before=0;
  int first_month_diff=0;
  int second_month_diff=0;
  int count_first = 0;
  int access_month_first=0;
  int count_second = 0;
  int access_month_second =0;
  scanf("%d %d %d %d",&d.first_month, &d.first_day,&d.second_month, &d.second_day);
  //char *month[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  char Month[12][5]={" ",
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
  };
  int *Month_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  first_month_diff = Month_days[d.first_day];
  second_month_diff = Month_days[d.second_day];
  if(d.first_month<d.second_month)
  {
    /*
    Input:{Month1, Day in month1,Month2,Days to achieve in month2}
    Output:{Difference between the dates in number of days between them}
    Algorithm/PseudoCode
    1. Checked if the dates are in ascending or descending order
    2. Calculated the number of days left in the first Month
    3. Added the remianing days in the first month with the days provided in the second Month
    4. Checked for the number of months between the given two dates and added the number of days between the two Months.
    */
    days_after = ((first_month_diff - d.first_day)+d.second_day)-1;
    count_first = d.first_month+1;
    while(count_first < d.second_month)
    {
      access_month_first = Month_days[count_first];
      days_after = days_after + access_month_first;
      count_first++;
    }
    printf("%s. %d is %d days after %s. %d.",Month[d.second_month],d.second_day,days_after,Month[d.first_month], d.first_day);
  }
  else
  {
    days_before = ((second_month_diff - d.second_day)+d.first_day)-1;
    count_second = d.second_month+1;
    while(count_second < d.first_month)
    {
      access_month_second = Month_days[count_second];
      days_before = days_before + access_month_second;
      count_second++;
    }
    printf("%s. %d is %d days before %s. %d.",Month[d.second_month],d.second_day,days_before,Month[d.first_month], d.first_day);
  }
}
