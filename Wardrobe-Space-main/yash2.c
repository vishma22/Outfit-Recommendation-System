#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    char outfit1[][8000] = {,3000,2000};
    float cost1[80]={,,};
    char outfit2[][8000]={"","",""};
    float cost2[80]={,,};
    char outfit3[][8000]={"Navy Blue Varsity Jacket+Solid White Tshirt+Blue Denim Pants+White and Blue Sneakers","Lavender Coloured Relaxed Fit Tshirt+Black Cargo Pants+Black High Top Sneakers","Green Flannel Shirt+Black Tshirt+Black Chino Pants+White Low Top Sneakers"};
    float cost3[80]={5000.00,3600.00,3900.00};
    char outfit4[][8000]={"Black V-Neck Tshirt+Blue Ripped Jeans+White Low Top Sneakers","White Sweatshirt+Grey Joggers+Grey Sneakers","Black Hoodie+Olive Green Joggers+Black Sneakers"};
    float cost4[80]={3300.00,2900.00,3200.00};
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