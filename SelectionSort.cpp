#include<iostream>
using namespace std;
int print(int ar[],int n)
{
    cout<<"\nThe sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
int SelectionSort(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[i])
            {
                int temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    print(ar,n);
    return 0;
}
int BubbleSort(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
            }
        }
    }
    print(ar,n);
    return 0;
}
int InsertionSort(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        int current=ar[i];
        int j=i-1;
        while(ar[j]>current && j>=0)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
    print(ar,n);
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter a element: ";
        cin>>ar[i];
    }
    cout<<"\nThe original array: ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\nSorting Techniques available are: \n1. Selection Sort \n2. Bubble Sort \n3. Insertion Sort \n\nEnter your choice: ";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            SelectionSort(ar,n);
            break;
        case 2:
            BubbleSort(ar,n);
            break;
    case 3:
            InsertionSort(ar,n);
            break;
    default:
            cout<<"Choice number not present in the list.";
            break;
    }
    return 0;
}
