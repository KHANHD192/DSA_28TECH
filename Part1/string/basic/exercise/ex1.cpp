/*
[Xâu kí tự cơ bản]. Bài 1. Chữ số đứng giữa
Cho số nguyên không âm N, hãy xác định chữ số đứng giữa của N, 
trong trường hợp N không có chữ số đứng giữa thì in ra "NOT FOUND".
 Ví dụ N = 12345 thì số đứng giữa là 3, N = 2213 thì không có chữ số đứng giữa.
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ; 
    cin  >> n ; 
    string s = to_string(n);
    if(s.size() % 2  != 0 ){
       cout << s[s.size() / 2];
    }else {
        cout << "NOT FOUND";
    }
}