#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("GCD of %d and %d is %d\n",a,b,c);
    return 0;
}
int gcd(int a,int b){
    int t;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    while(b>0){
        t=a%b;
        a=b;
        b=t;
    }
    return a ;
}
