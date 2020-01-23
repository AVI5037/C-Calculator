#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int m,n,o=1;
    long long int p;
    float a,b;
    char  x;
    while(1)
    {
        system("clear");
        printf("*************CALCULATOR*************\n");
        printf("\nEnter (a) for Addition (A+B)\nEnter (s) for Subtraction (A-B)\nEnter (m) for Multiplication (A*B)\nEnter (d) for Division (A/B)\nEnter (f) for Factoriyal (A!)\nEnter (q) for Square (A^2)\nEnter (ctr+c) for Quit\n");
        printf("************************************\nEnter : ");
        scanf("%c",&x);
        printf("************************************\n");
        if(x=='a'||x=='s'||x=='m'||x=='d')
        {
            printf("Enter any two numbers\nA : ");
            getchar();
            scanf("%f",&a);
            printf("B : ");
            getchar();
            scanf("%f",&b);
        }
        if(x == 'f'||x=='q')
        {
            printf("Enter any number\nA : ");
            getchar();
            scanf("%f",&a);
        }
        printf("***********************************\n");
       
        switch(x){
            case 'a': printf("a = %.2F",a+b);
                break;
            case 's': printf("s = %.2f",a-b);
                break;
            case 'm': printf("m = %.2F",a*b);
                break;
            case 'd': printf("d = %.2F",a/b);
                break;
            case 'f':
                m=a; 
                if(m<0 || m!=a)
                {
                    printf("error factorial of negative or float number dosen't exist");
                }
                else {
                    for(n=1;n<=m;n++)
                    {
                        o=o*n;    
                    }
                printf("factorial of %d numbers is %d",m,o);
                }
                break;
            case 'q': getchar();
                p=a;
                printf("square of %lld is %lld",p,p*p);
                break;
            
            
        }
        
        printf("\npress any key to continue...");
        getchar();
        getchar();
    }
    return 0;
}
