/*#include<stdio.h>
int p;
int main(){
    int a,b;
    a = 25;
    b = 34;
    p = a+b;
    printf("value of a=%d,b=%d and p=%d\n",a,b,p);
}
#include<stdio.h>
int main(){
    int a=10,b=2,c=3;
    if(a>b && a>c){
        printf("a is greater");
    }
    if(b>a && b>c){
        printf("b is greater");
    }
    if(c>a && a>b){
        printf("c is greater");
    }
}
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int j = 4;
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
int main(){
    int p = 7,q = 2;
    p = p+q;
    q = p-q;
    p = p-q;
    printf("p = %d\nq = %d",p,q);
    return 0;
}
#include<stdio.h>
int main(){
    int a=2,b=3;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}*/
#include<stdio.h>
int main(){
    int a=2,b=3;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d %d",a,b);
    return 0;
}