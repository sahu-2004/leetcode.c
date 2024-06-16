#include<stdio.h>
int maxreturn(int a[],int len){
    int area=0;
    int min,max;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            min=a[i];
            if(a[i]>a[j]){
                min=a[j];
            }
            int self=min*(j-i);
            max=area;
            if(max<self){
                max=self;
            }
        }
    }
    return max;
}
int main(){
    int a[]={1,8,6,2,5,4,8,3,7};
    int len=sizeof(a)/sizeof(int);
    
    printf("%d",maxreturn(a,len));
}