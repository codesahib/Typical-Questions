//Gursahib Singh(codesahib)
/*Problem Statement
Given an unsorted array,print the missing values in range 0-99 only
*/
#include<iostream>
using namespace std;
int get(bool map_table[],int j);
int main()
{
    int n,end,start,j,end1;
    int arr[]={88,105,3,2,200,0,10};
    n=sizeof(arr)/sizeof(arr[0]);
    bool map_table[100];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<100)
        map_table[arr[i]]=true;
    }

    int i=0;
    while(i<100)
    {
        if(map_table[i]!=true)
        {
            start=i;
            j=i+1;
            end=get(map_table,j);
            if(end>100)
                end=99;

            if(end==start)
               {
            cout<<start<<endl;
            i=end+1;}
            else
            {cout<<start<<"-"<<end<<endl;
            i=end+1;}
        }
        else
            i++;
    }
    return 0;
}
int get(bool map_table[],int j)
{
    if(j<100){
    if(map_table[j]!=true)
    {
        return get(map_table,j+1);
    }
    else
  return (j-1);
    }
    else
    return 99;
}
