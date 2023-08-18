/*
[Xâu kí tự cơ bản]. Bài 12. Đếm từ in hoa
*/
#include<bits/stdc++.h>
using namespace std ;
string to_UPPER(string s){
    for(auto &x  : s){
        x = toupper(x);
    }
    return s;
}
int main (){
    string s  ;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt = 0 ;
    while(getline(ss,word,' ')){
      if(word == to_UPPER(word)){
           cnt++;
      }

    }
    cout << cnt;
}