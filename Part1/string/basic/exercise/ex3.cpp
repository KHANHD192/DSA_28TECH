/*
[Xâu kí tự cơ bản]. Bài 3. Kí tự trong đoạn
Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.
*/
#include<bits/stdc++.h>
using namespace std ;
// number of ascii table range is 48 - 57 
int main (){
    string s ;
    getline(cin,s);
    int sum = 0 ;
    for( auto x : s){
        if( x >= 48 && x <= 57){
            sum+= x -'0';
        }
    }
    cout << sum ;
}