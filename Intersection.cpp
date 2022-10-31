#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start1,*start2;

void create1(int n)
{
    struct node *ptr, *temp;
    int data, i;
    start1 = (struct node *)malloc(sizeof(struct node));
    if(start1 == NULL)
    {
        cout<<"\nList is empty.\n";
    }
    else
    {
        cout<<"\nEnter the value of Start: ";
        cin>>data;
        start1->data = data;
        start1->next = NULL;
        temp = start1;
        for(i=2; i<=n; i++)
        {
            ptr = (struct node *)malloc(sizeof(struct node));
            if(ptr == NULL)
            {
                cout<<"\nList is empty.\n";
                break;
            }
            else
            {
                cout<<"\nEnter next element: ";
                cin>>data;
                ptr->data = data;
                ptr->next = NULL;
                temp->next = ptr;
                temp = temp->next;
            }
        }
    }
}

void create2(int n)
{
    struct node *ptr, *temp;
    int data, i;
    start2 = (struct node *)malloc(sizeof(struct node));
    if(start2 == NULL)
    {
        cout<<"\nList is empty.\n";
    }
    else
    {
        cout<<"\nEnter the value of Start: ";
        cin>>data;
        start2->data = data;
        start2->next = NULL;
        temp = start2;
        for(i=2; i<=n; i++)
        {
            ptr = (struct node *)malloc(sizeof(struct node));
            if(ptr == NULL)
            {
                cout<<"\nList is empty.\n";
                break;
            }
            else
            {
                cout<<"\nEnter next element: ";
                cin>>data;
                ptr->data = data;
                ptr->next = NULL;
                temp->next = ptr;
                temp = temp->next;
            }
        }
    }
}

void reverse1()
{
    struct node *ptr = start1;
    struct node *prev = NULL, *next = NULL;
    while (ptr != NULL)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    start1 = prev;
}

void reverse2()
{
    struct node *ptr = start2;
    struct node *prev = NULL, *next = NULL;
    while (ptr != NULL)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    start2 = prev;
}

void print1()
{
    struct node *ptr;
    if(start1 == NULL)
    {
    cout<<"\nList is empty\n";
    }
    else
    {
        ptr=start1;
        while(ptr != NULL)
        {
            cout<<ptr -> data<<" ";
            ptr = ptr -> next;
        }
    }
}

void print2()
{
    struct node *ptr;
    if(start2 == NULL)
    {
    cout<<"\nList is empty\n";
    }
    else
    {
        ptr=start2;
        while(ptr != NULL)
        {
            cout<<ptr -> data<<" ";
            ptr = ptr -> next;
        }
    }
}
void intersect()
{
    struct node *ptr1= start1, *pre1;
    struct node *ptr2= start2, *pre2;
    int c=0,l=0;
    while(ptr1 -> next != NULL || ptr2 -> next != NULL)
    {
        if((ptr1 -> next) -> data != (ptr2 -> next) -> data)
        {
            c=1;
            break;
        }
        pre1=ptr1;
        ptr1 = ptr1 -> next;
        pre2=ptr2;
        ptr2 = ptr2 -> next;
        l++;
    }
    cout<<l<<endl;
    if(c==0)
    {
        cout<<" Both the list are equal. Intersection Point: ";
    }
    else if(l==1)
    {
        if(pre1 -> data == pre2 -> data)
        {
            cout<<ptr1 -> data;
        }
        else
        {
            cout<<" No intersection point found.";
        }
    }
    cout<<ptr1 -> data;
}

int main()
{
    int n1,n2;
    cout<<"\nEnter the number of nodes of list 1: ";
    cin>>n1;
    create1(n1);
    cout<<"\nList 1: ";
    print1();
    cout<<"\nEnter the number of nodes of list 2: ";
    cin>>n2;
    create2(n2);
    cout<<"\nList 2: ";
    print2();
    reverse1();
    reverse2();
    cout<<"\nIntersection Point of two list: ";
    intersect();
}
