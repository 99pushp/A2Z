// remember how to convert int to str
// reverse the str
// str to integer

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int func(int num){
    string str = to_string(num);
    reverse(str.begin(),str.end()); //algorithm
    int ans = stoi(str);            //string
    return ans;
}

int func2 (int num){
    int n = num;int ans=0;int prev_val = 0;
    while(n!=0){
        int last_digit = n%10;
        ans = (last_digit + prev_val)*10;
        prev_val =ans;
        n=n/10;
    }
    return ans/10;
}

int main(){
    int n; cout<<"enter the number:";cin>>n;
    cout<<"reversed number:"<<func2(n);
    return 0;
}
