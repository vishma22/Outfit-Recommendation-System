#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <time.h>
struct user{
    int age;
    char name[100], pass[100];
}u;

int main(){
    int x;
    char password[100];
    printf("Please enter your name: \n");
    scanf("%s", u.name);
    printf("\nPlease enter your age: \n");
    scanf("%d", &u.age);
    printf("\nPlease enter a password(should not exceed 10 characters): \n");
    scanf("%s", u.pass);
    if (strlen(u.pass)>10){
        printf("\nConditions not met");
    }
    else{
        printf("\nYour password has been saved");
    }
    printf("\nHello %s!", u.name);
    pass:
    printf("\nPlease enter your password to start\n\n");
    scanf("%s", password);
    printf("\nVerifying.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    
    if (strcmp(password, u.pass)==0){
        printf("\nCorrect password!");
        display();
        return;
    }
    else{
        printf("\nIncorrect password please try again");
        goto pass;
    }
    getch();
    return 0;
}

void sleep(int no_of_sec){
    int milli_sec = 1000*no_of_sec;
    clock_t start_time = clock();
    while (clock() < start_time + milli_sec);
}
void display(){
    int x;
    printf("\nWelcome to WardrobeSpace!!!");
    printf("\nLets pick an outfit for you\n");
    pattern();
    printf("\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1: 
        male();
        break;
        case 2:
        female();
        break;
        default:
            printf("invalid input");
    }
}
void male(){
    int n;
    printf("What occasion are you dressing up for");
    printf("\n1) Date Night \n2) Outing with friends \n3) College Outfit");
    scanf("%d", &n);
    switch(n){
        case 1:
        datenight_m();
        break;
        case 2:
        outing_m();
        break;
        case 3:
        college_outfit_m();
        break;
        default:
        printf("OOPS! sorry can't recommend any outfit.");
    }

}
void pattern(){
      char a[]=  "1) Male   2)Female";
    
printf(" ------------------- \n");
    
    for (int j = 0; j<5; j++)
    {
        printf("|");
        if(j!=2){
        for(int i = 0; i<sizeof(a)/sizeof(a[0]);i++){
            printf(" ");
            
        }

        printf("|\n");
        }
        if(j==2){
            printf("1) Male   2)Female |");
            printf("\n");
        }
        
    }
    
    
printf(" ------------------- ");
}
void datenight_m(){
    int x, sum=0;
    char top1[][8000] = {"black tee", "white tee", "red tee"};
    int costt1[80]={100, 200, 300};

    char bottom1[][8000] = {"trouser", "jeans", "cargo"};
    int costb1[80] = {200,300,100};

    char foot1[][8000] = {"Sneakers", "sport shoes", "formals"};
    int costf1[80]= {500,200,700};

    printf("\n1.Day\n2.Night");
    scanf("%d", &x);
    switch(x){
        case 1: 

            for(int i = 0; i<=2; i++){
                if(i==0){
                    red();
                }
                else if(i==1){
                    purple();
                }
                else{
                    cyan();
                }
                printf("\noption %d:", i+1);
                printf("\n%s\n%s\n%s", top1[i], bottom1[i], foot1[i]);
                sum = costt1[i]+ costb1[i]+costf1[i]+sum;
                printf("\nTotal cost: %i", sum);
                printf("\n");
                sum = 0;
                }
                reset();
        break;    

    }   
}
void outing_m(){
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
}
void college_outfit_m(){
    printf("In progress");
}
void female()
{
    int n;
    printf("what occassion are you dressing up for??\n1.Date night\n2.outing with friends\n3.college outfit");
    scanf("%d",&n);
    switch(n)
    {
        case 1: datenight();
        break;
        case 2: outing_with_friends();
        break;
        case 3: college_outfits();
        break;
        default: printf("oops!sorry cant reccomand any outfits");
        break;
    }
}
void datenight(){
    int i,j,k, n;
    float sum=0.0;
    char top1[][100]={"mesh top","halterneck","bodysuit"};
    float costtop1[100]={1000.00,869.90,990.00};
    char bottom1[][100]={"leather pants","skirt","cargo pants"};
    float costbottom1[100]={1080.00,789.90,557.89};
    char footwear1[][100]={"stilletos","wedges","sneakers"};
    float costfootwear1[100]={989.89,1000.00,750.00};
    char top2[][100]={"body suit","off shoulder","tank top"};
    float costtop2[100]={1000.00,869.90,990.00};
    char bottom2[][100]={"leather pants","blue denims","cargo pants"};
    float costbottom2[100]={1080.00,789.90,557.89};
    char footwear2[][100]={"white sneakers","wedges","boots"};
    float costfootwear2[100]={989.89,1000.00,750.00};
    char top3[][100]={"tank top","","bodysuit"};
    float costtop3[100]={1000.00,869.90,990.00};
    char bottom3[][100]={"leather pants","skirt","cargo pants"};
    float costbottom3[100]={1080.00,789.90,557.89};
    char footwear3[][100]={"stilletos","wedges","sneakers"};
    float costfootwear3[100]={989.89,1000.00,750.00};
    printf("choose an option based on time of the day and mood\n1.night and glamedup\n2.night and simple&elegant\n3.day and glamed up\n4.day and simple&elegant");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top1[i],bottom1[j],footwear1[k]);
                    sum=sum+costtop1[i]+costbottom1[j]+costfootwear1[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
         break;
         case 2:
          for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top2[i],bottom2[j],footwear2[k]);
                    sum=sum+costtop2[i]+costbottom2[j]+costfootwear2[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
         break;
         case 3:
          for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top3[i],bottom3[j],footwear3[k]);
                    sum=sum+costtop3[i]+costbottom3[j]+costfootwear3[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
        break;
        case 4:
        //  for(i=0;i<=2;i++)
        // {
        //     for(j=0;j<=2;j++)
        //     {
        //         for(k=0;k<=2;k++)
        //         {
        //             printf("outfits:%s+%s+%s\n",top4[i],bottom4[j],footwear4[k]);
        //             sum=sum+costtop4[i]+costbottom4[j]+costfootwear4[k];
        //             printf("estimated price:%f\n",sum);
        //         }
        //     }
            
        // }
        break;
        default:
        printf("ivalid input");
        break;
         
    
    
    }
}
void outing_with_friends(){
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
}
void college_outfits(){
    int i,j,n;
    char outfit1[][8000] = {"black satin dress+silver jewllery+heels","crop top+mini skirt+boots","blazer dress+knee high boots+silver jewllery"};
    float cost1[80]={4000.00,2000.00,1500.00};
    char outfit2[][8000]={"leather jacket+turtleneck+mom fit jeans","vest top+skirt+layered necklace+black leather boots","plaid shirt+jeans+choker"};
    float cost2[80]={2500.00,2000.00,1560.00};
    char outfit3[][8000]={"white crop top+plaid skirt+black pumps","floral dress+bracelet+lace ballet flats","sleeves top+shorts+leather jacket+black nose ring"};
    float cost3[80]={3500.00,1550.00,2890.00};
    char outfit4[][8000]={"denim jacket+floral dress+bright sandals+sunglasses to look gorgeous","Jumpsuit+statement clutch+flat heels","grey sweatshirt+blue ribbed jeans+black shoes"};
    float cost4[80]={1545.00,2000.00,1789.00};
    printf("lets decide your outfit based on time of the day and your current mood\n1.night and glamup\n2.night and simple and elegant\n3.day and glamup\n4.day and simple and elegant\n");
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
}
void red(){
    printf("\033[1;31m");
}
void purple(){
    printf("\033[0;35m");
}
void cyan(){
    printf("\033[0;36m");
}
void reset(){
    printf("\033[0m");
}