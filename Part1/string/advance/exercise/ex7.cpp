/*
[Xâu ký tự]. Bài 7. Xâu đối xứng.
Cho một xâu ký tự S chỉ bao gồm các chữ cái, hãy kiểm tra xem xâu nhập vào có phải là xâu đối xứng hay không?
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){

    string s1;
    getline(cin,s1);
    int index_center =  s1.size();
    if(s1.size() % 2 != 0){
        cout << "no";
        return 0;
    }else {
       int i = 0 , j = index_center ;
       while(i < index_center && j < s1.size()){
                 if(s1[i] != s1[j]){
                    cout << "NO";
                    return 0 ;
                 }
       }
    }
    cout << "YES";
    return 0;
}