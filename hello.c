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
#include<stdio.h>
int main(){
    int a = 16;
    printf("size of a :%d\n",sizeof(a));
    printf("size of int :%d\n",sizeof(int));
    printf("size of char :%d\n",sizeof(char));
    printf("size of float :%d\n",sizeof(float));
    printf("size of double :%d\n",sizeof(double));

}