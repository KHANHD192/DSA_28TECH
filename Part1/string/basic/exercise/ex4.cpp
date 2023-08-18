/*
[Xâu kí tự cơ bản]. Bài 4. Số đẹp
Cho số nguyên dương N có ít nhất 2 chữ số,
 một số được coi là số đẹp nếu 2 chữ số liền kề của nó chỉ lệch nhau đúng 1 đơn vị,
 ví dụ về số đẹp : 12345, 121212, 78987. Hãy kiểm tra xem N có phải là số đẹp hay không?
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n; 
    cin >> n ;
    bool flag = true;
    string s = to_string(n);
    for(int i = 0 ; i < s.size() ;i++){
        if(i == 0){
            // cout << abs(s[i] - s[i+1]);
            if( abs(s[i] - s[i+1] ) != 1){
                cout << "NO";
                flag  =false;
                break;
            }
        }
        else if(i == s.size() - 1){
            if( abs(s[i] - s[i-1] ) != 1){
                cout << "NO";
                 flag  =false;
                 break;
            }
        }else {
              if( abs(s[i] - s[i-1]) != 1 && abs(s[i] - s[i+1] ) != 1 ){
                cout << "NO";
                 flag  =false;
                 break;
            }
        }
    }
    if(flag){
        cout << "Yes";
    }
    return 0;
}