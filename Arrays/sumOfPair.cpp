/*Gursahib Singh(codesahib)
Problem Statement
Given an array,find out pair in array whose sum is equal to required sum
*/
#include<iostream>
using namespace std;
int* getpair(int arr[],int n,int sum);
int main()
{
    int* p;int n;
    int arr[]={1,4,45,6,10,-8};
    int sum=16;
    n=sizeof(arr)/sizeof(arr[0]);
    p=getpair(arr,n,sum);

    for(int i=0;i<2;i++)
    {
        cout<<*(p+i)<<endl;
    }
}

int* getpair(int arr[],int n,int sum)
{
static int pair[2];
int i=0;
while(i<n)
{
    for(int j=i;j<n;j++)
    {
    if(arr[i]+arr[j]==sum)
    {
        pair[0]=arr[i];
        pair[1]=arr[j];
        break;
    }
    }
    i++;
}

return pair;
}
/*Other approaches
Sorting
l=0,r=last index of array
if(A[l]+A[r]>sum,r--
if(A[l]+A[r]<sum,l++
   */
