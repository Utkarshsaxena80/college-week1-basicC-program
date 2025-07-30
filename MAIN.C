#include<stdio.h>

int main (){
int n=0;
printf("enter the 3 digit number ");
scanf("%d",&n);
int m=0;

while(n!=0){
int temp=n%10;
m+=temp*10;
n/=10;

}
printf("%d",m);
return 0;
}
