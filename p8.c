#include<stdio.h>
#include<ctype.h>
void arrayinsertion(char arr[], int n, int value, int maxsize, int index)
{
  if (n >= maxsize)
  {
    printf("overflow");
  }
  else
  {
    for (int i = n; i >= index; i--)
    {
      arr[i + 1] = arr[i];
    }
    arr[index] = value;
    printf("the value is inserted");
    n++;
  }
}
int main(){
    char* a[100]={" 1234fns3r"};
    char b[100];
    int n=0;
    // printf("enter a char:");
    // scanf("%s",&a);
    int size=sizeof(a)/sizeof(int);
    int size1=sizeof(b)/sizeof(int);
    for(int i=0;i<size;i++){
        if(a[i]==" "){
            continue;
        }
        else if(isalpha(a[i])){
            break;
        }
        else if(isdigit(a[i])){
            arrayinsertion(b,n,a[i],size1,n);
            n++;  
        }

    }
    return 0;
}
// #include <stdio.h> 
// #include <stdlib.h> 
  
// int main() 
// { 
//     char* str1 = "Geek 12345"; 
//     char* str2 = "12345 Geek"; 
  
//     int num1 = atoi(str1); 
//     int num2 = atoi(str2); 
  
//     printf("%d is of '%s'\n", num1, str1); 
//     printf("%d is of '%s'\n", num2, str2); 
  
//     return 0; 
// }