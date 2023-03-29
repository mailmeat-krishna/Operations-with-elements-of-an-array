#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b[7],i,c;
    char wish;
    
    do
    {
    printf("Enter 7 elements = ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&b[i]);
    }   
    printf("1.Product\n2.Sum\n3.Even and Odd Numbers\n4.Largest Number\n5.Smallest Number");
    printf("\nEnter the operation that you want to perform = ");
    scanf("%d",&a);
    
        switch(a)
        {
            case 1:
                c=(b[0]*b[1]*b[2]*b[3]*b[4]*b[5]*b[6]);
                printf("\nProduct = %d",c);
                break;
            case 2:
                c=(b[0]+b[1]+b[2]+b[3]+b[4]+b[5]+b[6]);
                printf("\nSum = %d",c);
                break;
            case 3:
                for(i=0;i<7;i++)
                {
                    if(b[i]%2==0)
                    printf("\n%d = Even",b[i]);
                    
                    else
                    printf("\n%d = Odd",b[i]);
                }
                break;
            case 4:
                c=b[0];
                for(i=1;i<7;i++)
                {
                    if(b[i]>c)
                    {
                        c=b[i];
                    }
                }
                printf("\nLargest Number = %d",c);
                break;
            case 5:
                c=b[0];
                for(i=1;i<7;i++)
                {
                    if(b[i]<c)
                    {
                        c=b[i];
                    }
                }
                printf("\nSmallest Number = %d",c);
                break;
                
                default:
                    printf("Invalid operation chosen");
                    break;
                
        }
        printf("\nDo you want to continue (if yes press 'y' other wise 'n' = )");
//  scanf("%s",&wish);
//  wish=getchar();
        scanf(" %c",&wish);
    }
    while(wish=='y');
    return 0;
}
