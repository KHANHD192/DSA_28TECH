/*
[Xâu kí tự cơ bản]. Bài 9. Chèn
Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    string s;
    getline(cin,s);
    int n ; 
    cin >> n ;
    string word = "28tech";
    // cout <<word.size();
     s.insert(n,word);
     cout << s;
     return 0;
}