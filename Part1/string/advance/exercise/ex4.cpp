/*
[Xâu ký tự]. Bài 4. Ký tự xuất hiện nhiều nhất trong xâu.
Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu 
và kí tự có số lần xuất hiện nhiều nhất ở trong xâu. 
Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

*/
#include<bits/stdc++.h>
using namespace std ;

bool cmp(pair<char,int> a , pair<char,int> b){
    if(a.second < b.second){
        return true;
    }else if(a.second == b.second){
        if(a.first < b.first){
            return true;
        }else{
            return false ;
        }
    }
    return false ;
            
}
int main (){
    string s ; 
    getline(cin ,s);
    map<char,int> myMap;
  
    for(char x : s){
         myMap[x] ++ ;

    }
      vector<pair<char,int> > myVector(myMap.begin() ,myMap.end()) ; 
     sort(myVector.begin(),myVector.end(),cmp);
    //   for(auto x : myVector){
    //      cout << x.first << " " <<x.second << endl;

    // }
    pair<char,int> fistElement =  *myVector.begin();
    std::vector<pair<char,int> >::iterator it = myVector.end(); 
    pair<char,int> lastElement = *(it - 1);

    cout << fistElement.first << " " << fistElement.second<< endl;
    cout << lastElement.first << " " << lastElement.second;

}