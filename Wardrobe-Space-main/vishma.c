
#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    char outfit1[][8000] = {"Option 1)\n* Brown blazer\n* Neon crop top\n* Black pants\n* Pointy toe heels\n", "\nOption 2)\n* Tshirt\n* Skin fit jeans\n* Sweater vest\n* Knee high socks\n* Loafers\n","\nOption 3)\n* Cardigan\n* A cami\n* Retro trousers\n"};
    float cost1[80]={4000.00,2000.00,1500.00};
    char outfit2[][8000]={"Option 1)\n* Ribbed knit dress\n* Heeled boots\n","\nOption 2)\n* Puffy sleeves top\n* Denim skirt\n* Hoops\n","\nOption 3)\n* Sweatshirt\n* Ribbed jeans\n* Sneakers\n"};
    float cost2[80]={2500.00,2000.00,1560.00};
    char outfit3[][8000]={"Option 1)\n* Tank top\n* Long skirt\n* Cute sandals\n","\nOption 2)\n* White tshirt\n* Denim jacket\n* Bootcut jeans\n","\nOption 3)\n* Formal shirt\n* Tousers\n* Pointy toe heels\n"};
    float cost3[80]={3500.00,1550.00,2890.00};
    char outfit4[][8000]={"Option 1)\n* Summer dress\n* Hoops\n* Cute sandals\n","\nOption 2)\n* A cute crop top\n* Boyfriend fit jeans\n* Boots\n","\nOption 3)\n* Sleeveless top\n* Meshed jacket\n* Baggy jeans\n"};
    float cost4[80]={1545.00,2000.00,1789.00};
    printf("lets decide your outfit based on time of the day and your current mood\n1.Night and Glamup\n2.Night and Simple and Elegant\n3.Day and Glamup\n4.Day and Simple and Elegant\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        for(i=0;i<=2;i++)
        {
            printf("\n%s->Estimated cost Rs %.2f\n",outfit1[i],cost1[i]);
        }
        break;
        case 2:
        for(i=0;i<=2;i++)
        {
            printf("\n%s->Estimated cost Rs %.2f\n",outfit2[i],cost2[i]);

        }
        break;
        case 3:
        for(i=0;i<=2;i++)
        {
            printf("\n%s->Estimated cost Rs %.2f\n",outfit3[i],cost3[i]);
        }
        break;
        case 4:
        for(i=0;i<=2;i++)
        {
            printf("\n%s->Estimated cost Rs %.2f\n",outfit4[i],cost4[i]);
        }
        break;
        default:
        printf("Oops!option not available :(");
        break;

    }
         
    getch();
    return 0;   
    }
        
    
    



        
    
    


