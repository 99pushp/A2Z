#include <iostream>
using namespace std;


void print_n(int n){
    if(n==0){
        return;
    }
    n--;
    print_n(n);
    cout<<"hello:"<<n+1<<endl;
}

void print_n_reverse(int n){
    if(n==0){
        return;
    }
    cout<<"hello:"<<n<<endl;
    n--;
    print_n_reverse(n);
}

int main(){
    int n;cout<<"enter the number n"<<endl;
    cin>>n;
    print_n(n);
    return 0;
}
