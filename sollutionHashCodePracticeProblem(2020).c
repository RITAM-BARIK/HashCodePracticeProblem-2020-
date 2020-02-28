#include <stdio.h>
#include <stdlib.h>

int main()
{   int Total_slices,Total_pizza,result1=0,result2=0,x=0,i,j,z,h;
   int *arr;
   int *arr2,*arr3;

    scanf("%d %d",&Total_slices,&Total_pizza);

    arr=(int *)malloc(Total_pizza*sizeof (int));
     arr2=(int *)malloc(Total_pizza*sizeof (int));
      arr3=(int *)malloc(Total_pizza*sizeof (int));
    for(i=0;i<Total_pizza;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<Total_pizza;i++)
    {x=0;
        for(j=(Total_pizza-1-i);j>=0;j--)
        {  if((result1+(*(arr+j)))<=Total_slices)
             {
                 result1+=(*(arr+j));
             *(arr2+x)=j;

              x++;

               }
        }

        if(result1>result2)
        {for(h=0;h<x;h++)

          {
            (*(arr3+h))=(*(arr2+h));
          }

        result2=result1;
        }

      result1=0;


    }

    printf("%d\n",h);
    for(i=h-1;i>=0;i--)
    {
        printf("%d ",*(arr3+i));

    }


}
