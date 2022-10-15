#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};

int main(){
    struct node *head,*newnode,*temp,*tail,*nextnode;
    head=0;
    int choice;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            temp=newnode;
            head=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("Do you wanna continue (0,1): ");
        scanf("%d",&choice);
    }
    tail=temp;

    temp=head;
    while(temp!=0){
        nextnode=temp->next;
        temp->next=temp->prev;
        temp->prev=nextnode;
        temp=nextnode;
    }
    temp=head;
    head=tail;
    tail=temp;
    

    temp=head;
    printf("After reversing the resultant list is: ");
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
