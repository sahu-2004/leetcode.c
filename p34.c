#include<stdio.h>
int main(){
    int a[]={3,5,6,8};
    int len=sizeof(a)/sizeof(int);
    int target=24;
    int b=0,c=0;
    for (int i=0;i<len;i++){
        if(target==a[i]){
            b=i;
            break;
        }
    }
    for(int j=b+1;j<len;j++){
        if(target==a[j]){
            c=j;
        }
    }
    if(b==0){
        b=-1;
    }
    if(c==0){
        c=-1;
    }
    printf("[%d,%d]",b,c);
}