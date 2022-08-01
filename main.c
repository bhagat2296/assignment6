#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int sum=0,n;                                        //Question 1
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of %d natural numbers is %d\n",n,sum);*/




   /* int sum=0,n;                                        //Question 2
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*2;
    }
    printf("sum of %d even numbers is %d\n",n,sum);*/





    /*int sum=0,n;                                        //Question 3
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i-1);
    }
    printf("sum of %d odd natural numbers is %d\n",n,sum);*/



    /*int sum=0,n;                                        //Question 4
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of square %d natural numbers is %d\n",n,sum);*/




   /* int sum=0,n;                                            //Question 5
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("sum of cube of %d natural numbers is %d\n",n,sum);*/



    /*int fact=1,n;                                              //Question 6
    printf("enter how many number\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of %d number is %d\n",n,fact);*/



    /*int count=0,n;                                              //Question 7
    printf("enter number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("total number of digit in the number is %d\n",count);*/


    /*int n,count=0;                                              //Question 8

    printf("enter number to check prime or not\n");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            count=1;
            break;

        }

    }
    if(count==0)
        printf("number is prime");*/


        /* int n1,n2,max;                                               //Question 9
        printf("enter first number\n");
        scanf("%d",&n1);
        printf("enter 2nd number\n");
        scanf("%d",&n2);
        max=n1>n2?n1:n2;

        while(1)
        {
            if(max%n1==0&max%n2==0)
            {
                printf("lcm of %d and %d is %d",n1,n2,max);

                break;
            }
            max++;
        }*/



       /* int n,temp=0,reverse=0;                                           //Question 10
        printf("enter number\n");
        scanf("%d",&n);


       while(n!=0)
      {
          temp=n%10;
          reverse=reverse*10+temp;
          n=n/10;

      }

      printf("reverse of digits of the number is %d",reverse);*/



    return 0;

}
