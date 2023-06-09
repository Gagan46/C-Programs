#include <stdio.h>
#include<iostream>
using namespace std;

void quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
	int a[30],n,i;
    cout<<"Enter the number of data element to be stored: ";
    cin>>n;
    cout<<"\n Enter array elements: \n";
    for(i=0;i<n;i++)
        cin>>a[i];
        quicksort(a,0,n-1);
        cout<<"\nSorted Data \n";
        for(i=0;i<n;i++)
            cout<<"->    "<<a[i]<<"\n";
	return 0;
}
void quicksort(int a[],int l ,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quicksort(a,l,j-1);
        quicksort(a,j+1,u);
    }
}
int partition(int a[],int l,int u)
 {
     int v,i,j,temp;
 
 v=a[l];
 i=l;
 j=u+1;
do
{
    do
    i++;
    while(a[i]<v&&i<=u);
    do
    j--;
    while(v<a[j]);
    if(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i<j);
a[l]=a[j];
a[j]=v;

return(j);
}