#include<stdio.h>
int main(){
    int n=1234567;
    int e,sum=0,u;
    while(n!=0){
        e = n%10;
        if(e%2==0){
            sum=sum+e;
        }
        n = n/10;
    }
    printf("the value of sum is %d",sum);
    return 0;
}