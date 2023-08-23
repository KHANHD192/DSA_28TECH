/*
[Xâu kí tự cơ bản]. Bài 15. Từ chẵn lẻ.
Cho xâu kí tự S, trong xâu S có nhiều từ được phân cách nhau bởi 1 hoặc 1 vài dấu cách. Nhiệm vụ của bạn là đối với những từ xuất hiện ở vị trí lẻ thì thì in ra từ đó, còn những từ xuất hiện ở vị trí chẵn thì trước khi in từ đó bạn phải lật ngược từ đó trước. Các từ khi in viết cách nhau đúng 1 dấu cách và sau từ cuối cùng ko có dấu cách thừa.
*/
#include<bits/stdc++.h>
#include <algorithm>
using namespace std ;

int main (){
    string s ;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int i = 1;
    while(ss >> word){
        if(i % 2 != 0){
        cout << word  << " ";
    } else {
          reverse(word.begin(),word.end());
            cout << word  << " ";
    }
    i++;
    }
}