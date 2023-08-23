/*
[Xâu kí tự cơ bản]. Bài 17. Sắp xếp các từ
*/
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    vector<string> v ;
    string s ; 
    getline(cin ,s) ; 
    stringstream ss(s);
    string word ;
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin() , v.end()); // tăng dần 
    for(auto x : v){
        cout << x  << " " ;
    }
     sort(v.begin() , v.end(),greater<string>()); // giảm dần 
     
 for(auto x : v){
        cout << x  << " " ;
    }

}