#include <stdio.h>                                    
int main(){
    int key;
    printf("Enter a number from 1 to 5 to get the information of Food item and it's price : ");
    scanf("%d",&key);
    switch(key){
        case 1: 
        printf("Food Item : Pizza\nPrice : Rs 199\n");
        break;
        case 2: 
        printf("Food Item : Burger\nPrice : Rs 99\n");
        break;
        case 3: 
        printf("Food Item : Chole Bhature\nPrice : Rs 299\n");
        break;
        case 4: 
        printf("Food Item : Paneer Butter Masala\nPrice : Rs 359\n");
        break;
        case 5: 
        printf("Food Item : White Sause Pasta\nPrice : Rs 259\n");
        break;
        default : printf("INVALID INPUT!\n");
    }                     
return 0;
}
