#include <stdio.h>
int main()
{
  int a[10], b[10], flag = 0, n1, n2, i, j;
  printf("Enter set1 size : ");
  scanf("%d",&n1);
  printf("Enter set2 size : ");
  scanf("%d",&n2);
  printf("Enter set1 elemnt :");
  for(i=0;i<n1;i++)
  scanf("%d",&a[i]);
  printf("Enter set2 elemnt :");
  for(i=0;i<n2;i++)
  scanf("%d",&b[i]);
  printf("Intersection");
  for(i=0;i<n1;i++)
  {
    for(j =0; j<n2; j++)
    {
      if(b[i] == a[j])
      {
        flag = 1;
      }
    }
   if(flag == 1)
   {
     printf("%d", b[i]);
   }
   flag = 0;
  }
 return 0;
}  
