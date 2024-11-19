#include<stdio.h>
int sum(int a[],int size){
    int i,sum=0;
    for(int i=0; i < size;i++){
        sum+=a[i];
    }
    return sum;
}
int double1(int a[],int size){
    int i,sum;
    for(int i = 0;i < size;i++){
        a[i]=2*a[i];
    }
    return sum;
}
int main(){
    int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int total =sum(a,size);
    printf("%d\n",total);
    double1 (a,size);
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
    return 0;
}