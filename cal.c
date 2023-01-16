#include<stdio.h>
#include<math.h>
int main(){
    int a,b; 
    char op ;
    printf("Enter a operator : ");
    scanf("%c",&op);
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    switch(op){
        case '+' : printf("%d",a + b);
                   break;
        case '-' : printf("%d",a - b);
                   break;
        case '*' : printf("%d",a * b);
                   break;
        case '/' : printf("%d",a/b);
                   break;
        case '%' : printf("%d",a%b);
                   break;
        case '^' : printf("%d",a*a);
                   break;
        default :  printf("enter a valid operator");
    }
}