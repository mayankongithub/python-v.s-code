/*#include<stdio.h>
int main(){
    printf("hellooo world \n");
    int a,b,c;
    a = 0;
    b = 9;
    c = a+b;
    printf("%d",c);
    return 0;
}

#include<stdio.h>
int main(){
    float side;
    scanf("%f",&side);
    float area;
    area = side*side;
    printf("area of square is %f",area);
    return 0;
}

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int multiply = a*b;
    printf("%d",multiply);
    return 0;
}

#include<stdio.h>
int main(){
    printf("%d",4==0);
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%2==0){
        printf("even");
    }
    else{
        printf("no its not even number");
    }
    return 0;
}
#include<stdio.h>
int main(){
    // TERNARY OPERATOR
    int age = 9;
    age >=18 ? printf("adult") : printf("teenager");//condition and ? if condition is True then print statement before : else after :
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=1 ; i<=6 ; i=i+1) { 
        printf("%d \n",i);
    
    }
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=0;i<=10;i+=1){
        printf("%d",i);
        
    }
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=1;i<6;i++){
        if(i==3){
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}
#include<stdio.h>
int  main(){
    for(int i=5;i<51;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = i*fact;

    }
    printf("%d",fact);
    return 0;
}
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=5;i<51;i++){
        sum = sum+i;
    }
    printf("%d",sum);
}
#include<stdio.h>
int main(){
    //int n = 5;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    //int n = 5;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
void printHello(){
    printf("Hello People!!");
}

int main(){
    printHello();
    return 0;
}
#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("Enter a char i or f : ");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    } else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}*/


