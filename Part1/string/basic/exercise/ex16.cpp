/*
[Xâu kí tự cơ bản]. Bài 16. Sắp xếp kí tự
Cho xâu kí tự S, tiến hành sắp xếp kí tự trong xâu S theo thứ tự tăng dần, giảm dần theo thứ tự từ điển rồi in ra màn hình.
*/
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    string s ;
    getline(cin,s);
    sort(s.begin(), s.end(),greater<char>()) ; 
    cout << endl <<  s ; 
    sort(s.begin(), s.end()) ; 
    cout << endl <<  s ; 

    return  0 ;
}