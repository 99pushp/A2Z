#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_palindrome(int n){
    string str = to_string(n);
    string str2 = to_string(n);
    reverse(str.begin(),str.end());
    return str==str2;
}

int main(){
    cout<<"enter a num:"<<endl;
    int n;
    cin>>n;
    bool ans = is_palindrome(n);
    if(ans){
        cout<<"yes the number is palindrome"<<endl;
    }
    else {
        cout<<"no the number is not palindrome"<<endl;
    }
    return 0;
}
