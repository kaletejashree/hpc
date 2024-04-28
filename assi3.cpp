#include<iostream>
#include<omp.h>
using namespace std;

int minval(int arr[],int n)
{
    int minval=arr[0];
    #pragma omp parallel reduction for(min:minval)
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minval)
        {
            minval=arr[i];
        }
    }
    return minval;
}

int maxval(int arr[],int n)
{
    int maxval=arr[0];
    #pragma omp parallel reduction for(max:maxval)
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxval)
        {
            maxval=arr[i];
        }
    }
    return maxval;
}

int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int average(int arr[],int n)
{
    return sum(arr,n)/n;
}
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    cout<<"min value="<<minval(arr,n);
    cout<<"max value="<<maxval(arr,n);
    cout<<"sum value="<<sum(arr,n);
    cout<<"avg value="<<average(arr,n);

}