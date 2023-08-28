/*
[Xâu ký tự]. Bài 5. Ký tự xuất hiện ở cả 2 xâu.
Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, 
chú ý mỗi kí tự chỉ liệt kê một lần.
 Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s1,s2 ;
    getline(cin,s1);
    getline(cin,s2);
    set<char> myset1,myset2;
    for(char i : s1){
        myset1.insert(i);
    }
    for(char i : s2){
        myset2.insert(i);
    }
    cout << endl;
    string ss =  s2 + s1;
    string rest;
    for(char  i  : ss){
          if(myset1.count(i) == 1 && myset2.count(i) == 1){
            cout << i ;
            myset1.erase(i);
            myset2.erase(i);
          }else {
                 rest+=i;
          }
    }
    sort(rest.begin(),rest.end());
    cout <<endl;
    cout <<rest;
}