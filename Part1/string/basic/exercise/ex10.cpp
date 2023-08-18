/*
[Xâu kí tự cơ bản]. Bài 10. Kí tự lặp lại đầu tiên
Cho xâu kí tự S, bạn hãy tìm kí tự được lặp lại đầu tiên trong xâu S. Nếu xâu S không có kí tự bị lặp lại thì in ra NONE
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    string current;
    string s ;
    bool flag = false;
    getline(cin,s);
    for(int i = 0 ; i < s.size() ;i++){
        if(i == 0){
            current.push_back(s[i]);
        }else{
            if(current.find(s[i]) != string::npos ){
                cout << s[i];
                flag  =true;
                break;
            }else{
                 current.push_back(s[i]);
            }
        }
    }
    if(flag == false){
        cout << "NONE";
    }
}