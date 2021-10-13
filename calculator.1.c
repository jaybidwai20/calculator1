#include<stdio.h>
int main()
{
    int a,b,c;
    printf("1=addition\n2=substraction\n3=multiplication\n4=division");
    printf("\nenter number to perform that operation \n");
    scanf("%d",&c);
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    switch(c)
    {
        case 1:
        {
            printf("sum is %d",a+b);
            break;
        }
        case 2:
        {
            printf("substraction  is %d",a-b);
            break;
        }
        
        case 3:
        {
            printf("multiplication is %d",a*b);
            break;
        }
          case 4:
        {
            printf("division is %d",a/b);
            break;
        }
        
        
        
        
    }
    
    
}