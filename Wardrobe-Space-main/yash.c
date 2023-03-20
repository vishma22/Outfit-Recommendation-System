#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    char outfit1[][8000] = {"White crew neck Tshirt+Black Leather Jacket+Black Denim Pants+Black Chelsea Boots","Blue and White Varsity Jacket+Black Round Neck Tshirt+Beige Cargo Pants+High Top Sneakers","Tan Corduroy Jacket+Black T-Shirt"};
    float cost1[80]={6800.00,5500.00,4800.00};
    char outfit2[][8000]={"Black Button Down Shirt+Navy Blue Denim Pants+White Sneakers","White Oversized Printed Tshirt+Black Relaxed Fit Denim Pants+White Sneakers","Black Hoodie+Creme Cargo Pants+Black Sneakers"};
    float cost2[80]={4000.00,3600.00,3800.00};
    char outfit3[][8000]={"Sky Blue Sweatshirt+White Shirt+Off-White Pants+White Sneakers","Grey Round Neck Tshirt+Navy Blue Denim Jacket+Black Denim Pants+Black Chelsea Boots","Black Floral Shirt+Brown Chino Pants+Black Sneakers"};
    float cost3[80]={3500.00,4500.00,3800.00};
    char outfit4[][8000]={"Baby Pink Half Sleeves Shirt+Off-White Chino Shorts+White Sneakers","Off-White Printed T-Shirt+Dark Green Cargo Pants+High Top Sneakers","White Linen Shirt+Beige Chino Pants+Brogues"};
    float cost4[80]={3200.00,3500.00,4000.00};
    printf("lets decide your outfit based on time of the day and your current mood\n1.night and glamup\n2.night and simple and elegant\n3.day and glamup\n4.day and simple and elegant");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit1[i],cost1[i]);
        }
        break;
        case 2:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit2[i],cost2[i]);
        }
        break;
        case 3:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit3[i],cost3[i]);
        }
        break;
        case 4:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit4[i],cost4[i]);
        }
        break;
        default:
        printf("oops!option not available");
        break;

    }
         
    getch();
    return 0;   
}
