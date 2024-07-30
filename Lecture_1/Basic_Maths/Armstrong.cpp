#include<iostream>
using namespace std;

bool is_Armstrong(int n){
    int num = n;int ans=0;
    while(num!=0){
        int x = num%10;
        ans=ans+(x*x*x);
        num=num/10;
    }
   return ans==n;
}


int main(){
    int n;cout<<"enter the number:"<<endl;
    cin>>n;
    is_Armstrong(n)?cout<<"yes its armstrong":cout<<"not Armstrong";
    if(is_Armstrong(n)==true){
        cout<<"yes its true"<<endl;
    }else{
        cout<<"no it's not armstrong"<<endl;
    }
    return 0;
}
