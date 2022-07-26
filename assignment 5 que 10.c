#include<stdio.h>
 int main()
    {
        int i,j,num;
        printf("enter the number");
        scanf("%d",&num);
        for(i=1;i<=10;i++)
        {
            j=num*i;
            printf("%d\n",j);
        }

        return 0;
    }

