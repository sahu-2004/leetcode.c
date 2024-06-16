#include<stdio.h>
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int temp[n];
    int j=0;
    for (int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++]=arr[i];
        }
    }
    for(int i=0;i<j;i++){
        printf("%d",temp[i]);
    }
    printf("\n");
    return j;
}
int main(){
    int a[]={1,2,4,4,4,5,5,6,6,7,7,9,9};
    int lena=sizeof(a)/sizeof(int);
    printf("the length of none duplicates element in array is %d\n",removeDuplicates(a,lena));
    return 0;
}