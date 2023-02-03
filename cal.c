/*#include<stdio.h>
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
#include<stdio.h>
#include<math.h>
int main(){
    int maths,physics,chemistry,hindi,biology;
    float sum;
    char name[100];
    fgets(name,100,stdin);
    printf("%s",name);
    int roll_no;
    printf("Enter a roll number");
    scanf("%d",&roll_no);
    printf("Enter marks of maths");
    scanf("%d",&maths);
    printf("Enter marks of physics");
    scanf("%d",&physics);
    printf("Enter marks of chemistry");
    scanf("%d",&chemistry);
    printf("Enter marks of hindi");
    scanf("%d",&hindi);
    printf("Enter marks of biology");
    scanf("%d",&biology);
    sum = maths+physics+chemistry+hindi+biology;
    float divide = sum/500;
    float mul = divide*100;
    printf("\n%f",sum);
    printf("%f\n",divide);
    printf("%f",mul);
}*/
#include <stdio.h>
int main() {
  char ch;
  

  while (2>1){
    printf("Enter the character : ");
    scanf("%c\n", &ch);
    printf("ASCII value is %d\n",ch);
  

  }
  
  return 0;
}