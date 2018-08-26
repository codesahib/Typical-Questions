/*
Given a string, remove the unique character one by one and get lexographically smallest string formed;
Input: appleap
Output: alea
*/
#include <iostream>
using namespace std;

int main() {
	string input;
	cin>>input;
	int l=input.size();
	int arr[256]={0};
	for(int i=0;i<l;i++){
		arr[int(input[i])]=1;
	}
	string min_string="~";
	for(int i=0;i<256;i++){
		if(arr[i]==1){
			char ch=char(i);
			string temp="";
			for(int j=0;j<l;j++){
				char c=input[j];
				if(c!=ch){
					temp+=c;
				}
			}
			min_string=min(min_string,temp);
		}
	}
	cout<<min_string;
return 0;
}
