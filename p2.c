#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
}
int reversenumber(struct node *ptr)
{
    int num=0;   
    num=ptr->data*100+num;
    ptr=ptr->next;
    num=ptr->data*10+num;
    ptr=ptr->next;
    num=ptr->data*1+num;
    // printf("%d\n",num);
    int a=num;
    int rev=0;
    while (a!=0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    return rev;
}
int main(){
    struct node *head = createnode(1);
    struct node *second = createnode(2);
    struct node *third = createnode(3);
    head->next = second;
    second->next = third;
    third->next = NULL;
    struct node *head1 = createnode(6);
    struct node *second1 = createnode(1);
    struct node *third1 = createnode(8);
    head1->next = second1;
    second1->next = third1;
    third1->next = NULL;
    int reverse1=reversenumber(head);
    int reverse2=reversenumber(head1);
    printf("reverse number of first linked list is %d\n",reverse1);
    printf("reverse number of second linked list is %d\n",reverse2);
    int sum=reverse1+reverse2;
    printf("sum of their reverse number is %d\n",sum);
    int revv=0;
    int a=sum;
    while (a!=0)
    {
        revv=revv*10+a%10;
        a=a/10;
    }
    printf("reverse of sum of reverse number of two linked list is %d",revv);
}