#include<iostream>
using namespace std
bool find(int ar2, n, int size)
{
    for(int j=0;j<size)
    {
        if(ar2[j]==n)
        {
            break;
        }
    }
    return true;
}
int factor(int ar1[], int ar2,int size)
{
    int j,count=0,c=0,max=0,num=0;
    while(count<=size)
    {
        for(j=1;j<=ar1[count];j++)
        {
            if(ar[count]%j==0)
            {
                if(find(ar2,j,size)==true)
                {
                    c++;
                }
            }
        }
        if(c>=max)
        {
            max=c;
            num=ar1[count];
        }
        c=0;
        count++;
    }
    cout<<"The number with max number of super-factor is: "<<num;
    return 0;
}
int main()
{
    cout<<"Enter a number: ";
    int innum,i=0;
    int ar1[20],ar2[40];
    cin>>innum;
    int copy=innum;
    while(copy>=0)
    {
        int d=copy%100;
        int d2=copy%10;
        ar1[i]=d;
        ar2[i]=d2;
        copy/=10;
        i++;
    }
    factor(ar1,ar2,i);
    return 0;
}
