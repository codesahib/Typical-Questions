/*Gursahib Singh(codesahib)
Problem Statement
Given a string,'S', of length 'N' that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as  space-separated strings on a single line
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


int main() {
       int n,j,i;
    cin>>n;
    vector<string> allStrings;
    string str; int len;
i=0;
//**************************
    while (i < n && cin>>str) {
    allStrings.push_back(str);
    i++;
}
//***************************

   for(j=0;j<n;j++)
   {
        str=allStrings[j];
       len=str.size();


        int k=0;

       while(k<len)
       {cout<<str[k];k=k+2;}
       cout<<" ";
       k=1;
       while(k<len)
       {cout<<str[k];k=k+2;}
    cout<<endl;

   }


    return 0;
}
