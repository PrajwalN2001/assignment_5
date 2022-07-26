#include<stdio.h>
 int main()
    {
        int i,j,num;
        printf("enter the number");
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            j=2*i+1;
            printf("%d\n",j);
        }

        return 0;
    }

