#include<stdio>
int main(){
    int a,b,r,a1,b1;
    scanf("%d%d",&a,&b);    
    if(a>b){
        a1=b;
        b1=a;
    }
    else{
        a1=a;
        b1=b;
    }
    while(b1>0){
        r=a1%b1;
        a1=b1;
        b1=r;
    }
}