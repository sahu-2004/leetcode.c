#include<stdio.h>
void removeelement(int arr[], int n,int value)
{
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=value){
            temp[j++]=arr[i];
        }
    }
    for(int i=0;i<j;i++){
        printf("%d",temp[i]);
    }
}
int main(){
    int a[]={1,2,4,4,4,5,5,6,6,7,7,9,4,2,4,9};
    int lena=sizeof(a)/sizeof(int);
    removeelement(a,lena,4);
    return 0;
}