#include<stdio.h>

int occurence_of_index(long,int);
int getIndex(long);
int main()
{
  long num=0; 
  int index=0,count=0;
  
  printf("Enter the number\n");
  scanf("%ld", &num);
  
  long temporary=num;
  int flag = 1;
  int numIndex = getIndex(num);
  int temporary2 = numIndex;
  
  while(temporary>0)
  {
    index = temporary%10;
    int count = occurence_of_index(num, numIndex);
    if(count != index)
    {
      printf("\nNumber is not a self descriptive");
      flag = 0;
      break;
    }
    temporary=temporary/10;
    numIndex--;
  } 
   
  if(flag)
  {
    printf("\nNumber is a self descriptive\n");
    for (int index = temporary2; index >= 0; index--)
    {
        printf("Position %d has value %d and there are %d %d(s) in the number. \n", index, (num%10), (num%10), index);
        num=num/10;
    }  
  }
  return 0;
}
 
/* check number of times the digit appear in number */
int occurence_of_index(long num,int digit)
{
  int count=0;
  while(num>0)
  {
    if(num%10 == digit)
    {
       count++;
    }
    num=num/10;
  }
  return count;
}
 
/* to check number of index(s) in the number */
int getIndex(long num)
{
  int digits = 0;
  while(num>0)
  {
    digits++;
    num=num/10;   
  }
  return (digits - 1);
}
