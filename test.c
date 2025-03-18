#include <stdio.h>
// #include <string.h>
// #include <math.h>

int main(){

    int ent , i; 
    printf("Enter your number :");
    scanf("%d",&ent);
    for (  i = ent - 1 ; i > 1 ; i-- ){
        if(ent%i == 0){
            printf("this number [%d] is not Prime\n",ent);
            return 0;}
        
    }

printf("this number [%d] is Prime  \n", ent);




    return 0;
}


