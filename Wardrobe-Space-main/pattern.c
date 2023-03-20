#include<stdio.h>
#include<string.h>

int main(){
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
    return 0;

}