#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int a[100],i,n,j,temp;
  cout<<"\nEnter the array size\n";
  cin>>n;
  cout<<"Enter the array elements\n";
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"The Unsorted Array:\n";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
  for(j=1;j<n;j++)
  {
    temp=a[j];
    i=j-1;
    while((temp<a[i])&&(i!=-1))
    {
    a[i+1]=a[i];
    i=i-1;
    a[i+1]=temp;
    }
  }
  cout<<"The Sorted Array\n";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
   return 0;
}
