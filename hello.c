
#include<stdio.h>
#include<conio.h>
int num,n;
  printf("enter testcase"); 
  scanf("%d",&n); 
  while(n>0) 
  {
      printf("enter number");
      scanf("%d",&num); 
      if(num>0)
      {
          printf("positive"); 
          
      }
      else if(num<0) 
      { 
          printf("negative"); 
          }
          else 
          {
              printf("zero");
              }
              n--;
              }
              getch();
return 0;
}
