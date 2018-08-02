#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;vector<string> s;cout<<"No. of strings?: ";
    cin>>n;
    for(int i=0;i<n;i++){
            string str;cout<<"Enter string: ";
            cin>>str;
        s.push_back(str);
    }

    int *endswith=new int[n];
    endswith[0]=1;
    for(int i=1;i<n;i++ ){
        endswith[i]=1;
        int j=0;
        while(j<i){
            if(s[j]>s[i]){
                endswith[i]+=endswith[j];
            }
            j++;
        }
    }
    int all=0;
    for(int i=0;i<n;i++){
        all+=endswith[i];
    }
    cout<<"Total Subsequences: "<<all;
return 0;
}
