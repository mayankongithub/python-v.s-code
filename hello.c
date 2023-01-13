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
}
#include<stdio.h>
int sum_of (int a,int b);

int main(){
    int a = 3;
    int b = 2;
    int c = sum_of(a,b);
    printf("%d",c);
}
int sum_of (int a,int b){
    return (a+b);

}
#include<stdio.h>
int sum_of (int a,int b);

int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    int c = sum_of(a,b);
    printf("%d",c);
}
int sum_of (int a,int b){
    return (a+b);
}
#include<stdio.h>
int adding(int a,int b);
int main(){
    int a=2;
    int b=3;
    int c=adding(a,b);
    printf("%d",c);

    return 0;
}
int adding(int a,int b){
    return (a+b);
}
#include<stdio.h>
int multiply(int a,int b);
int main(){
    int a = 2;
    int b = 3;
    int c = multiply(a,b);
    printf("%d",c);
    return 0;
}
int multiply(int a,int b){
    return (a*b);
}
#include<stdio.h>
int cal(int a,int b);
int main(){
    int a=10;
    int b= 3;
    cal(a,b);
}
int cal(int a,int b){
    printf("%d\n",a+b);
    printf("%d\n"  ,a-b);
    printf("%d",a*b);
}
#include<stdio.h>
void table(int n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    table(n);
}
void table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
#include<stdio.h>
#include<math.h>
void square(float a);
void circle(float r);
void rectangle(float l,float b);
int main(){
    float a = 3;
    square(a);
    float r = 3;
    circle(r);
    float l = 3;
    float b = 2;
    rectangle(l,b);
    return 0;
}
void square(float a){
    printf("%f\n",pow(a,2));
}
void circle(float r){
    printf("%f\n",3.14*pow(r,2));
}
void rectangle(float l,float b){
    printf("%f",l*b);
}
#include<stdio.h>
void printhw(int count);
int main(){
    int count = 5;
    printhw(5);

}
void printhw(int count){
    if(count==0){
        return;
    }
    printf("hello world\n");
    printhw(count-1);
}
#include<stdio.h>
void printhw(int count);
int main(){
    int count = 5;
    printhw(5);

}
void printhw(int count){
    if(count==0){
        return;
    }
    printf("%d\n",count);
    printhw(count-1);
}
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);

    int sum=a+b;
    printf("sum is: %d",a+b);

}
#include<stdio.h>
#define pi 3.014159
int main(){
    printf("%.2f",pi);
    return 0;
}
#include<stdio.h>
int main(){
    char x = 't';
    char y = 'y';
    y=x;
    printf("%c\n",y);
    printf("%c",x);
}
#include<stdio.h>
void add(int a,int b){
    printf("%d",a+b);
}
int main(){
    int a = 4;
    int b = 4;
    add(a,b);
    return 0;
}
#include<stdio.h>
int fact(int n){
    if (n==1){
        return 1;
    }
    int factNM1 = fact(n-1);
    int factN = factNM1 * n;
}
int main(){
    printf("%d",fact(5));

    return 0;
}
#include<stdio.h>
int main(){
    int i =1;
    while(i<=10){
        printf("%d",i);
        i++;
    }

}
// power function
#include<stdio.h>
void power(int a){
    printf("%d",a*a);
}
int main(){
    int a=5;
    power(a);
    return 0;
}
#include<stdio.h>
int fibo(int n){
    int a = 0;
    int b = 1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=2;i<=n;i++){
        int c = a+b;
        a = b;
        b = c;
        printf("%d\n",c);
    
    }
    
}
int main(){
fibo(6);
return 0;
}
#include<stdio.h>
int fibo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fiboNM1 = fibo(n-1);
    int fiboNM2 = fibo(n-2);
    int sum = fiboNM1 + fiboNM2;
    return sum;
}
int main(){
    printf("%d",fibo(6));
    return 0;
}
#include<stdio.h>
int main(){
    printf("hello people");
    return 0;
}
#include<stdio.h>
int main(){
    int a ;
    int b ;
    printf("Enter a number for a: ");
    scanf("%i",&a);
    printf("enter a number for b : ");
    scanf("%i",&b);
    printf("%i",a+b);
    //return 0;
}
#include<stdio.h>
int main(){
    int a = 456;
    int *ptr = &a;
    int _a = *ptr;
    printf("%d\n",ptr);
    printf("%d",_a);
}
#include<stdio.h>
int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);
    printf("%d\n",&ptr);
    printf("%d",&pptr);
    return 0;
}
#include<stdio.h>
void _swap(int *a,int *b);
int main(){
    int a = 3, b = 4;
    _swap(&a,&b);
    printf("a = %d & b = %d\n",a,b);
    return 0;
}
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
#include<stdio.h>
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d",a,b);
}
int main(){
    int a = 3;
    int b = 4;
    //printf("a = %d & b = %d",a,b); 
    swap(a,b);
    return 0;
}
#include<stdio.h>
void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a = 3,b = 4;
    swap(&a,&b);
    printf("a = %d & b = %d",a,b);
    return 0;
}*/
#include<stdio.h>
void spa(int a,int b,int *sum,int *product,int *average){
    *sum = a+b;
    *product = a*b;
    *average = a+b/2;
}
int main(){
    int a = 3,b = 5;
    int sum,product,average;
    spa(a,b,&sum,&product,&average);
    printf("sum = %d & product = %d & average = %d",sum ,product,average);
    return 0;
}

