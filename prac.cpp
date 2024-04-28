#include<iostream>
#include<omp.h>
using namespace std;

int minval(int a[],int n)
{
    int minval=a[0];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<minval)
        {
          minval=a[i];
        }
    }
    return minval;

}

int maxval(int a[],int n)
{
    int maxval=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxval)
        {
          maxval=a[i];
        }
    }
    return maxval;

}

int sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;

}
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    cout<<"min value="<<minval(arr,n);
    cout<<"max value="<<maxval(arr,n);
    cout<<"sum value="<<sum(arr,n);
}