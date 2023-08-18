/*
[Xâu kí tự cơ bản]. Bài 6. Sắp xếp chữ số
Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình,
 trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    string s =  to_string(n);
    for(int i = 0 ; i < s.size() ;i++){
      for(int j = i + 1 ; j < s.size() ;j++){
        if(s[i] > s[j]){
            char tmp = s[i] ;
            s[i] = s[j] ;
            s[j] = tmp;
        }
      }
    }
    cout << stoi(s) ;
}