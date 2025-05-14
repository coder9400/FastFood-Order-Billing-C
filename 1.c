#include<stdio.h>
int main()
{
    char str[10][100] = {
        "Pav Bhaji",
        "Italian Pizza",
        "Arabiata Pasta",
        "Cheese Burger",
        "Jain Burger",
        "French fries",
        "Curly fries",
        "Thumbs up",
        "Coca cola",
        "Sprite",
    };
    float arr[10] = {80.00,250.00,202.00,40.00,35.00,75.00,85.00,30.00,25.00,25.00};
    float sum = 0;
    float total = 0;
    float discount = 0;
    int n,o[10],q[10],a=0;
    char ch;
    printf("\n\n*********** Hello and welcome to Good Vibes fast food restaurant **********************\nWhere we serve food with good vibes :) \n");
    printf("\n");
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1. View the menu\n2. Order food\n3. Exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("SRNO                            ITEM                          PRICE\n");
            for(int i=0;i<10;i++)
            {
            printf("%d                  %20s                     %.2f\n",i,str[i],arr[i]);
            }
            printf("...             ...\n");
        }
        else if(n==2)
        {
            do{
                printf("Enter your order : ");
                scanf("%d",&o[a]);
                printf("Order(%s).Enter Quantity : ",str[o[a]]);
                scanf("%d",&q[a]);
                a++;
                printf("Want to order more good food?(y/n) : ");
                fflush(stdin);
                scanf("%c",&ch);
            }while(ch!='n');
            printf("\nCalculating total order.......\n");
            for(int i=0;i<a;i++)
            {
                sum = sum + (arr[o[i]]*q[i]);
            }
            printf("Amount : %f\n",sum);
            if(sum<=301) discount = 0.02;
            else if(sum>301 && sum<=600) discount = 0.04;
            else discount = 0.08;
            printf("Discount : %f           GST : 5%%\n",discount);
            total = (sum-(sum*discount)+(sum*0.05)); 
            printf("Net Amount : %.0f-(%.2f*%.2f)+(%.2f*0.05) = %.4f\n",sum,sum,discount,sum,total);
            printf("Thank you for shopping with us. \nHave a great day :)\n");
            return 0;
        }
        else if(n==3)
        {
            printf("Thank you for visiting us. \nHave a great day :)\n");
            return 0;
        }
    }
    return 0;
}