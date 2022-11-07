#include<stdio.h>
int main()
{
   int array1[4][3]={{1,2,3},{4,45,6},{7,8,9},{10,11,12}};
   int *ptr =&array1[0][0];
 //  int array2[4][3];
   int row=0,count=0;
for(row=0;row<12;row++)
{
   printf("%d ",*(ptr+row));
   count++;
   if(count==3)
   {
      count=0;
      printf("\n");
   }
}
return 0;

}