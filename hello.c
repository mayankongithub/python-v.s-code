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
}
#include<stdio.h>
void spa(int a,int b,int *sum,int *product,int *average){
    *sum = a+b;
    *product = a*b;
    *average = a+b/2;
}
int main(){
    int a = 4,b = 5;
    int sum,product,average;
    spa(a,b,&sum,&product,&average);
    printf("sum = %d & product = %d & average = %d",sum ,product,average);
    return 0;
}
#include<stdio.h>
int main(){
    int n = 153;
    int x = n;
    int l,sum=0;
    while (n>0){
        l = n%10;
        sum = sum + l*l*l;
        n = n/10;
    }
    if (x==sum){
        printf("true");
    }
    else{
        printf("false");
    }
}
#include<stdio.h>
int main(){
    char a [100];
    char b [100];
    printf("enter a statment a : ");
    //scanf("%[^\n]*c",&a);

    //scanf("%[^\n]*c",&b);
   // printf("%s\n",a);
    //printf("%s",b);
    fgets(a,100,stdin);
    printf("%s\n",a);
    printf("enter a statment b : ");
    fgets(b,100,stdin);
    printf("%s\n",b);
    return 0;
}
#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter a marks for physics : ");
    scanf("%d",&marks[0]);
    printf("Enter a marks for chemistry : ");
    scanf("%d",&marks[1]);
    printf("Enter a marks for maths : ");
    scanf("%d",&marks[2]);
    printf("physics = %d & chemistry = %d & maths = %d\n",marks[0],marks[1],marks[2]);
    int result = (marks[0] + marks[1] + marks[2])*0.4;
    printf("%d",result);
    return 0;
}
#include<stdio.h>
int main(){
    int a = 8;
    int b = 0;
    if (a>b){
        printf("a is greater then b");
    }
    else{
        printf("b is grater then a");
    }
}
#include<stdio.h>
int main(){
    int arr[5];
    int *ptr = arr;
    for (int i = 0;i<5;i++){
        printf("%d index = ",i);
        scanf("%d",&arr[i]);    
    }
    //output
    for (int i=0;i<5;i++){
        printf("%d index = %d\n",i,arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[4];
    int *ptr = arr;
    for (int i=0;i<5;i++){
        printf("%d index = ",i);
        scanf("%d",&arr[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d index = %d\n",i,arr[i]);
    }
    return 0;
}
#include<stdio.h>
void printnumber(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[] = {2,3,4,5,6};

    printnumber(arr,5);
    return 0;
}
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
#include<stdio.h>
int main(){
    int arr[4];
    int n = 4;
    int *ptr = arr;
    for(int i=0;i<n;i++){
        printf("index  %d =",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("index  %d = %d\n",i,arr[i]);
    }

}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}*/
// #include<stdio.h>
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int count = 0;
//     for(int i=0;i<7;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0;i<5/2;i++){
//         int first_value = arr[i];
//         int second_value = arr[5-i-1];
//         arr[5-i-1] = first_value;
//         arr[i] = second_value;

//     }
//     for(int i=0;i<5;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=4;i>=0;i--){
//     }
//     for(int i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char s[100];
//     char h[100];
//     fgets(s,100,stdin);
    
//     fgets(h,100,stdin);
//     printf("%s",s);
//     printf("%s",h);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n = 10;
//     int a = 0;
//     int b = 1;
//     for(int i=2;i<n;i++){
//         int c = a+b;
//         a = b;
//         b = c;
//         printf("%d\t",c);
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n = 10;
//     int arr[n];
//     int a = 0;
//     int b = 1;

//     for (int i=2;i<n;i++){
//         int c = a+b;
//         a = b;
//         b = c;
//         printf("%d\t",c);
//     }
//     return 0;
// }
// int main(){
// fibo(6);
// return 0;
// }
// #include<stdio.h>
// int fibo(int n){
//     if (n==0){
//         return 0;
//     }
//     if (n==1){
//         return 1;
//     }
//     int fiboNM1 = fibo(n-1);
//     int fiboNM2 = fibo(n-2);
//     int sum = fiboNM1 + fiboNM2;
//     return sum;
// }
// int main(){
//     printf("%d",fibo(6));
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char ch[100];
//     char s[100];
//     char sen[100];
//     fgets(ch,100,stdin);
//     fgets(s,100,stdin);
//     fgets(sen,100,stdin);
//     printf("%s",ch);
//     printf("%s",s);
//     printf("%s",sen);

// }
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     float c,d;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%f",&c);
//     scanf("%f",&d);

//     printf("%d\n",a+b);
//     printf("%.1f %.1f",c+d,c-d);
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     if(a>b && a>c && a>d){
//         printf("%d",a);
//     }
//     else if(b>a && b>c && b>d){
//         printf("%d",b);
//     }
//     else if(c>a && c>b && c>d){
//         printf("%d",c);
//     }
//     else{
//         printf("%d",d);
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int max_of_four(int a,int b,int c,int d){
//     if(a>b && a>c && a>d){
//         printf("%d",a);
//     }
//     else if(b>a && b>c && b>d){
//         printf("%d",b);
//     }
//     else if(c>a && c>b && c>d){
//         printf("%d",c);
//     }
//     else{
//         printf("%d",d);
//     }
// }
// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     max_of_four(a, b, c, d);
    
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// void update(int *a,int *b) {
//     // Complete this function  
//     int add , sub;
//     add = *a+*b;
//     sub = abs(*a-*b);  
//     *a = add;
//     *b = sub;
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// } 
// #include<stdio.h>
// int main(){
//     int a = 10564;
//     int sum = 0;
//     for(int i=0;a>0;i++){
//         sum = sum + i;
//     }
//     printf("%d",sum);
//     return 0;
// }
// #include<stdio.h>
// int main() {
	
//     int n,x;
//     scanf("%d", &n);
//     int sum = 0;
//     while(n>0)
//     {
//     x = n%10;
//     sum = sum + x;
//     n = n/10;
//     }
    
//     printf("%d",sum);

//    // printf("%d",sum);

//     return 0;

// }
// #include<stdio.h>
// int main() {
	
//     int n,x;
//     scanf("%d", &n);
//     int sum = 0;
//     while(n>0){
//         x = n%10;
//         sum = sum + x;
//         n = n/10;
//     }
    
//     printf("%d",sum);

//    // printf("%d",sum);

//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int a = 2;
//     int *ptr = &a;
//     printf("%d\n",ptr);
//     *ptr ++;
//     printf("%d",ptr);
//     return 0;
// }
/*#include<stdio.h>
int main(){
    int a=5;
    int b=4;
    printf("%d",a|b);
}*/
// #include<stdio.h>
// int main(){
//     int a = 16;
//     printf("size of a :%d\n",sizeof(a));
//     printf("size of int :%d\n",sizeof(int));
//     printf("size of char :%d\n",sizeof(char));
//     printf("size of float :%d\n",sizeof(float));
//     printf("size of double :%d\n",sizeof(double));

// }
// #include<stdio.h>
// int main(){
//     int d;
//     gets(d);
//     //printf("%c",d);
//     puts(d);

// }
/*
#include<stdio.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    printf("%s",a);
}
#include<stdio.h>

int main(){
    int n,k,and=0,or=0,xor=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if((i&j)>and&&(i&j)<k){
                and = i&j;
            }
            if((i|j)>or&&(i|j)<k){
                or = i|j;
            }
            if((i^j)>xor&&(i^j)<k){
                xor = i^j;    
            }
        }
    }
        printf("%d\n%d\n%d",and,or,xor);
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n  : ");
    for(int i=0;i<=n;i++){
        for(int j=0;i<=n;j++){
            printf("*");
        }
    }
    printf("\n");

}

#include<stdio.h>
int main(){
    int a = 10<<2;
    printf("%d",a);
}
#include<stdio.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    for(int i=0;i<=n/2;i++){
        int first_value = arr[i];
        int second_value = arr[n-i-1];
        arr[i] = second_value;
        arr[n-i-1] = first_value;   
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
        printf("%d\t",fibo[i]);
    }
    printf("\n");
    return 0;
}
// #include<stdio.h>
// int main(){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int tables_store[n][m];
//     for(int i=0;i<=m;i++){
//         tables_store[n][m] = 2 * (i+1);
//         printf("%d\n",tables_store);

//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int a = 20>> 3;
    printf("%d",a);
}
 #include<stdio.h>
 int max_of_four(int a,int b,int c,int d){
     if(a>b && a>c && a>d){
         printf("%d",a);
     }
     else if(b>a && b>c && b>d){
         printf("%d",b);
     }
     else if(c>a && c>b && c>d){
         printf("%d",c);
     }
     else{
         printf("%d",d);
     }
 }
 int main() {
    int a, b, c, d;
     scanf("%d %d %d %d", &a, &b, &c, &d);
     max_of_four(a, b, c, d);
    
     return 0;
 }
#include<stdio.h>
int main(){
    int a=2,b=3,c=4,d;
    d = a+b-(c*a);
    printf("%d",d);
}
#include<stdio.h>
int main(){
    int a ;
    printf("Enter a : ");
    scanf("%d",&a);
    if(a>0){
        printf("a is positive");
    }
    else if(a==0){
        printf("zero");
    }
    else if(a<0){
        printf("a is negative");
    
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 12345;
    int sum = 0;
    while (n>0) {
        int a = n%10;
        sum = sum + a;
        n = n/10;
    }
    
    printf("%d",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("n is divisible by 5"); 
    }
    else if(n%11==0){
        printf("n is divisible by 11");
    }
    else{
        printf("n is not divisible either by 5 ");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a = 10;
    int b = 2;
    int c = 3;
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>a && b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a  : ");
    scanf("%d",&a);
    if(a==100){
        if(a<150){
            printf("a is smaller then 150\n");

        }
        if(a<120){
            printf("a is smaller then 120");
        }
    }
   
    else{
        printf("a is not present");
    }
    return 0;
}
#include<stdio.h >  
  
int main(){ 
    int num, start, rem, sum; 
    int upto;
    printf("Enter start : ");
    scanf("%d",&start);
    printf("Enter upto : ");
    scanf("%d",&upto); 
  
    while(start <= upto){ 
        num = start;  
        sum = 0;  
  
        while(num){ 
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(start == sum){  
            printf("%d is a Armstrong number\n", start);  
        }  
  
        start++;
    }
}
#include<stdio.h>
int main(){
    char op;
    printf("Enter a operator : ");
    scanf("%c",&op);
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    switch(op){
        case '+' : printf("%d",a+b);
                   break;
        case '-' : printf("%d",a-b);
                   break;
        case '*' : printf("%d",a*b);
                   break;
        case '/' : printf("%d",a/b);
                   break;
        default : printf("Enter a valid operator");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf(" %d",&n);
    switch(n){
        case 0 : printf("Zero");
                   break;
        case 1 : printf("One");
                   break;
        case 2 : printf("Two");
                   break;
        case 3 : printf("Three");
                   break;
        case 4 : printf("Four");
                   break;
        case 5 : printf("Five");
                   break;
        case 6 : printf("Six");
                   break;
        case 7 : printf("Seven");
                   break;
        case 8 : printf("Eight");
                   break;
        case 9 : printf("Nine");
                   break;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int fact=1,n=5;
    for(int i=1;i<=5;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}
#include<stdio.h>
int main(){
    char a[100];
    fgets(a,100,stdin);
    printf("%s",a);
    return 0;
}
#include<stdio.h>
int main(){
    char b[1];
    gets(b);
    printf("%s",b);
    return 0;
}
#include<stdio.h>
int main(){
    for(int i=0;i<=10;i++){
        printf("Mayank Sharma\n");
    }
}
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        printf("%d\n",i);
        if(i==6){
            printf("Mayank Sharma\n");
        }
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}
#include<stdio.h>
void main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}

printf("%d X %d = %d \n",num,i,num*i);
#include<stdio.h>
int swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
    //printf("%d %d",a,b);
}
int main(){
    int a = 2;
    int b = 4;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5] = {1,1,1,1,1};
    int sum = 0;
    for(int i=1;i<5;i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);

    return 0;
}
#include<stdio.h>
int main(){
    int arr1;
    int arr2;
    for(int i=0;i<=5;i++){
        for(j)
    }
}

#include<stdio.h>
void add(int a,int b);
int main(){
    int a =0 ;
    int b = 9;
    add(a,b);
}
void add(int a,int b){
    printf("%d",a+b);
}
#include<stdio.h>
int main(){
    int a = 5;
    printf("Enter a : ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}
#include<stdio.h>
int main(){
    char a[100]; 
    fgets(a,100,stdin);
    printf("%s",a);
}
#include<stdio.h>
int main(){
    char a=1;
    printf("%d",a>>2);
    return 0;
}

#include<stdio.h>
int main(){
     char ch[100];
     char s[100];
     char sen[100];
     fgets(ch,100,stdin);
     fgets(s,100,stdin);
     fgets(sen,100,stdin);
     printf("%s",ch);
     printf("%s",s);
     printf("%s",sen);

}
#include<stdio.h>
int main(){
    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=n;i>0;--i){
        for(int j=0;j<i;j++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    for(int i=n-1;i>0;--i){
        for(int j=0;j<i;j++){
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;--j){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;--j){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
CHECK
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=n;i>0;--i){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}
#include<stdio.h>
int main(){
    int n = 4;
    for(int i=n;i>0;--i){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 4;
    for(int i=n;i>0;--i){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n=5;
    int i=1;
    while (i<=n){
        printf("%d\n",i);
        i++;

    }

    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }
    while (i<=n);
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    int i = 1;
    do{
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    while(i<=10);
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    if(n<0){
        printf("n is smaller then 0");
    }
    else if(n>=0 && n<=10){
        printf("n lies in range[0-10]");
    }
    else if(n>10 && n<=20){
        printf("n lies in range[11-20]");
    }
    else if(n>20 && n<=30){
        printf("n lies in range[21-30]");
    }
    else if(n>30 && n<=40){
        printf("n lies in range[31-40]");
    }
    else if(n>31 && n<=50){
        printf("n lies in range[41-50]");
    }
    else{
        printf("number not lies in range[1-50]");
    }
    if(n%2==0){
        printf("\nn is even");
    }
    else{
        printf("\nn is odd");
    }
}

#include<stdio.h>
#include<stdlib.h>
int main() {
  char ch;
  
  //printf("Enter the character to get the ASCII value: \n");
  //scanf("%c", &ch);
  while (2>1){
    printf("Enter the character to get the ASCII value: \n");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d\n", ch,ch);
    //printf("Enter a character");
    //scanf("%c",&ch);
  }
 
  return 0;
}
#include<stdio.h>
int main(){
    char name;
    printf("Enter a name of student : ");
    scanf("%s",&name);
    printf("%s",name);
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=n;i>0;--i){
        for(int j=1;j<=i;j++){
            printf("*");
        } 
        printf("\n");
    }
}

#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;--j){
            printf("*");
            printf("\n");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=n;i>0;--i){
        for(int j=1;j<=i;j++){
            printf("*");
        } 
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int number = 1;
    repeat:
    printf("%d\n",number);
    number++;

    if(number<=10)
    goto repeat;
}
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number<=0)
        goto end;
    printf("Number is : %d",number);

    end:
        printf("\nless then 0");
    return 0;
}
#include<stdio.h>
int main(){
    int sum = 0;
    int number = 12345;
    int n = number;
   
    while(number>0){
        int d = number%10;
        sum = sum*10+d;
        number = number/10;

    }
    printf("%d",sum);


}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;--i){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n = 5;
    printf("%c",n);
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d",arr[4]);
}
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[3] = {1,2,3};
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    printf("%d",&arr[2]);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%c",(char)a+64);
            a++;
        }
        printf("\n");
    }
    for(int i=n-1;i>0;--i){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%c",(char)a+64);
            a++;
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter element of index %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("\n%d",sum);
    return 0;
}
#include<stdio.h>
int fun(){
    static int count = 0;
    //count++;
    count = count + 1;
    return count;
}
int main(){
    int count = 0;
    printf("%d\n",fun());
    printf("%d",fun());
    return 0;
}
#include<stdio.h>
int g = 20;
int main(){
    g = 10;
    printf("%d",g);
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;
    for(int i=1;i<=5;i++){
        product = product * i;
    }
    printf("%d",product);    
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    int greater = arr[0];
    for(int i=0;i<n;i++){
        if(greater<arr[i]){
            greater = arr[i];
        }
    }
    printf("%d",greater);


}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    int greater = arr[0];
    for(int i=0;i<n;i++){
        if(greater>arr[i]){
            greater = arr[i];
        }
    }
    printf("%d",greater);


}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i%2!=0){
            printf("%d ",arr[i]*2);
        }
        else{
            printf("\n%d",arr[i]+10);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 2;
    int count = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>n){
            count++;
        }    
    }
    printf("%d",count);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d : ",i+1);
        scanf("%d",&arr[i]); 
    }
    int sum = 12;
    int total_pair = 0;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==12){
                total_pair++;
            }
        }
    }
    printf("%d",total_pair);
}
#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 12;
    int count = 0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==12){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int second_max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
     for(int i=0;i<n;i++){
        if(arr[i]!=max && second_max<arr[i]){
            second_max = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",second_max);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[8] = {17,24,33,42,15,36,17,58};
    int max = arr[0],second_max;
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            second_max = max;
            max = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",second_max);
    return 0;
}
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int second_max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && second_max<arr[i]){
            second_max = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",second_max);
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int new_arr[5];
    for(int i=0;i<5;i++){
        new_arr[i] = arr[i];
    }
    for(int i=4;i>=0;--i){
        printf("%d",new_arr[i]);
    }
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int a = 2;
    int b = 4;
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d \nb = %d",a,b);
}
#include<stdio.h>
void reverse(int n,int arr[]){
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(n,arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,2,1};
    int j = 4;
    for(int i=0;i<5;i++){
        if(arr[i] == arr[j]){

        }
    }
    printf("Palindorme");

    
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int j = 4;
    int k = 3;
    int temp;
    while(i<j){
        i = j;
        j = k;
        k = temp;
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);    
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 4;
    int j = 9;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int max = INT_MIN,second_max = INT_MIN;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && second_max<arr[i]){
            second_max = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",second_max);
    return 0;
}
#include<stdio.h>
void reverse(int n,int arr[]){
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d place : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(n,arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
#include<conio.h>
int main(){
    int a = 3;
    int b = 3;
    printf("%d",a+b);
}
#include<stdio.h>
int main(){
    char s[100] = "Mayank sharma";
    printf("%s",s);
}
#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%c",(char)a+64);
            a++;
        }
        printf("\n");
    }
    for(int i=n-1;i>0;--i){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%c",(char)a+64);
            a++;
        }
        printf("\n");
    }
    
}
#include<stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr,4,9);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 2, j= 4;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
#include<stdio.h>
void reverse(int a,int b,int arr[]){
    int i = 2;
    int j = 4;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 2;
    int j = 4;
    reverse(i=2,j=4,arr);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int arr2[2][2] = {{1,2},{3,4}};
    int result[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",result[i][j] = arr[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

  //  for(int i=0;i<2;i++){
    //    for(int j=0;j<2;j++){
      //      printf("%d ",result[i][j]);
        //}
        //printf("\n");
    //}
    
}
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter r : ");
    scanf("%d",&r);
    printf("Enter c : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter all the elments : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum +=arr[i][j];
        }
    }
    printf("\n%d",sum);
}
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter r : ");
    scanf("%d",&r);
    printf("Enter c : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter all the elments : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    printf("\n%d",max);
}
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int max = 0;
    for(int i=0;i<2;i++){
        int sum = 0;
        for(int j=0;j<2;j++){
            sum += arr[i][j];
            if (max<sum){
                max = sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[3][4] = {{1,1,0,1},{0,1,0,0},{1,1,1,1}};
    int max = 0;
    int max_index = 0;
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j] == 1) count++;
        }
        if(max<count){
            max = count;
            max_index = i;
        }
    }
    printf("%d\n",max);
    printf("%d",max_index);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int max = 0;
    int max_index = 0;
    for(int i=0;i<2;i++){
        int sum = 0;
        for(int j=0;j<2;j++){
            sum += arr[i][j];
        }
        if(max<sum){
            max = sum;
            max_index = i;
        }
    }
    printf("Maximum sum is : %d",max);
    printf("\nIndex having maximum sum is : %d",max_index);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int arr2[2][2] = {{5,6},{7,8}};
    int result[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the elments : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter m : ");
    scanf("%d",&m);
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the elments : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int brr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int result[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            result[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    return 0;
}
#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter r and c : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at index[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    int max = INT_MIN;
    int max_index = INT_MIN;
    for(int i=0;i<3;i++){
        sum = 0;
        for(int j=0;j<2;j++){
            sum += arr[i][j];
            if(max<sum){
                max = sum;
                max_index = i;
            }
        }
    }
    printf("%d\n",max);
    printf("%d",max_index);
}
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter r and c : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int max = 0;
    int max_index = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element at index[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
            }
            if(max<count){
                max = count;
                max_index = i;
            }
        }
    
    }
    printf("%d\n",max);
    printf("%d",max_index);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element of index[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //rotate
    for(int i=0;i<n;i++){
        int j = 0;
        int k = n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    //printing
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


