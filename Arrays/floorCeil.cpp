//Gursahib Singh(codesahib)
/*Problem Statement
In a sorted array,find floor and ceil of a given number,x
floor=greatest element smaller or equal to x
ceil=smallest element greater or equal to x
*/

#include<iostream>
#include<cstdlib>
using namespace std;


int floor(int arr[],int x);
int ceil(int arr[],int x);
int main()
{
    int f,c,x,n;
    cout<<"Enter x";
    cin>>x;
    int arr[7]={1,2,8,10,10,12,19};
    int i,index;
    n=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<n;i++)
   {
       if(x>=arr[i])
        index=i;
       else
       {
        if(i==0){index=0;break;}
        else{index=i-1;break;}
       }
   }

    if(index==0)                               //boundary
        {
            if(x==arr[index])
            {cout<<"Ceil ="<<arr[index]<<endl;
            cout<<"Floor ="<<arr[index]<<endl;
            exit(0);}
            else{ cout<<"Floor Doesn't exist"<<endl;
            cout<<"Ceil ="<<arr[0]<<endl;
            exit(0);}

        }
    else if(index==(n-1))                      //boundary
          {
              if(x==arr[index])
           {
            cout<<"Ceil ="<<arr[index]<<endl;
            cout<<"Floor ="<<arr[index]<<endl;
            exit(0);}
            else{
            cout<<"Ceil doesn't exist"<<endl;
            cout<<"Floor ="<<arr[n-1]<<endl;
            exit(0);
            }
          }
    else if(x==arr[index])
        {
            cout<<"Ceil ="<<arr[index]<<endl;
            cout<<"Floor ="<<arr[index]<<endl;
            exit(0);
        }
    else{
            cout<<"Ceil ="<<arr[index+1]<<endl;
            cout<<"Floor ="<<arr[index]<<endl;
            exit(0);
        }

return 0;
}


