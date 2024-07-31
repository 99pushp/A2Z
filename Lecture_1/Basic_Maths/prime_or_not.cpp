#include <iostream>
#include <cmath>
using namespace std;


bool isPrimeBrute (int num){
    //one is not prime O(sqrt(N))
    if(num==1){
        return false;
    }
    int count=0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            count++;
            if(i!=num/i){
                count++;
            }
        }
        if(count>2){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(isPrimeBrute(n)){
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
    return 0;
}
