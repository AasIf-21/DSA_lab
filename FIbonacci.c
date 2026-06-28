#include<stdio.h>

 int fib(int m){
    if (m==0){
     return 0;
    }
    else if (m==1){
        return 1;
    }
    else{
        return fib(m-2) + fib(m-1);
    }
 }
 int main(){
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        printf ("%d",fib(i));
    }
 }