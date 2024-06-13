#include<stdio.h>
int main(){
    int num1[]={1,3,4};
    int numsize1 = sizeof(num1)/sizeof(int);
    int num2[]={5,7,8,9};
    int numsize2 = sizeof(num2)/sizeof(int);
    int mergesize=numsize1+numsize2;
    int num3[mergesize];
    for(int i=0;i<numsize1;i++){
        num3[i]=num1[i];
    }
    for(int i=0,j=numsize1;i<numsize2,j<mergesize;i++,j++){
        num3[j]=num2[i];
    }
    for(int k=0;k<mergesize;k++){
        printf("%d",num3[k]);
    }
    printf("\n");
    
    int lr=0;
    int up=mergesize;
    if((mergesize) % 2 == 0){
        int g=num1[numsize1-1];
        int h=num2[0];
        double m=(g+h)/2.0;
        printf("median of even length sorted array is %f",m);
    }
    else{
        int mid=(lr+up)/2;
        printf("%d",num3[mid]);
    }
}