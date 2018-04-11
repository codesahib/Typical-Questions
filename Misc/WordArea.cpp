/*
Given a list of letter heights in the alphabet and a string. Using the letter heights given, determine the area of the rectangle highlight in mm sq. assuming all letters are 1mm  wide.
*/
#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    vector <int> height;
    int len=word.size();
    for(int i=0;i<len;i++)
    {
        int ch;
        ch=word[i];
        int index1=ch-97;
        height.push_back(h.at(index1))  ;  
    }
    
    int len_height=height.size();
    int maxheight=height.at(0);
    for(int i=1;i<len_height;i++)
    {
        if(height.at(i)>maxheight)
            maxheight=height.at(i);
    }
    int area;
    area=len_height*maxheight;
    return area;
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
