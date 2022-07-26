#include<stdio.h>
 int main()
    {
        int i,j,num;
        printf("enter the number");
        scanf("%d",&num);
        for(i=num-1;i>=0;i--)
        {
            j=2*i+1;
            printf("%d\n",j);
        }

        return 0;
    }

