#include <cmath>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
//gcd*lcm = a*b;
int optimal_GCD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if (a == 0){
        return b;
    }
    return a;
}



int GCD(int n,int m){
    // find the divisors of the small no
    vector<int>v1;
    int small_no = n;int big_no = m;
    if(n>m){
        small_no = m;
        big_no = n;
    }
    //putting the factors of the small no in a vector
    for(int i=1;i<=sqrt(small_no);i++){
        if(small_no%i==0){
            v1.push_back(i);
            if(i!=small_no/i){
                v1.push_back(small_no/i);
            }
        }
    }
    vector<int> :: iterator it;
    sort(v1.begin(),v1.end(),greater<int>());
    //biggest factor should be checked first
    for(it=v1.begin();it!=v1.end();it++){
        if(big_no%(*it)==0){
            return *it;
        }
    }
    return 1;
}

int main(){
    cout<<"enter the first no:"<<endl;
    int n;int m;
    cin>>n;
    cout<<"enter the second no:"<<endl;
    cin>>m;
    cout<<"GCD:"<<GCD(n,m);
    cout<<"Optimal GCD"<<optimal_GCD(n,m);
    return 0;
}
