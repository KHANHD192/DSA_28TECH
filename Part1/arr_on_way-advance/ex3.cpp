/*
Bài 4. Die hard
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu
phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá
100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có
thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và
bán vé theo đúng thứ tự mọi người trong hàng không? 
*/
#include<bits/stdc++.h>
using namespace std ;
 
bool refun (int a[] ,int n){
    int Treasury = 0;
    for(int i = 0 ; i < n ; i++){
        int numberOfRefun = a[i] - 25;
        if(Treasury < numberOfRefun){
            return false ;
        }else{
            Treasury+=25;
        }
    }
    return true;
}

int main (){
    int n ;
    cin >> n; 
    int a[n];
    for( auto &x : a){
        cin >> x ;
    }
    if(refun(a,n)){
        cout << "yes";
    }else {
        cout <<"no";
    }
    return 0;
}