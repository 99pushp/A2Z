#include <iostream>
#include <string>
#include <set>
using namespace std;

int evenlyDivides(int N){
        //code here
        int num = N;
        int count=0;
        while(num!=0){
            int d = num%10;
           if(d!=0 && N%d==0){
              count++;
           }
            num=num/10;
    }return count;}

int evenlyDividesUnique(int N){
        //code here
        set<int> st;
        int num = N;int count=0;
        while(num!=0){
            int d = num%10;
            if(d!=0)
            {st.insert(d);}
            num=num/10;
        }
        cout<<"set:";
        set<int>::iterator it;
        for(it = st.begin();it!=st.end();it++){
            cout<<*it<<" ";
        }
        cout<<"ans:";

        for(it = st.begin();it!=st.end();it++){
             cout<<N<<"%"<<(*it)<<"= "<<N%(*it)<<endl;
            if (N%(*it)==0) {
                count++;
            }
        }
        return count;
    }



//using mod
int count_digits_2(int n){
    if(n==0){
        return 1;
    }
    int number = n;
    int ans = 0;
    while(number!=0){
        ans++;
        number=number/10;
    }
    return ans;
}



//convert the interger to string
int count_digits(int n){
    if(n<0){
        n=n*(-1);
    }
    int ans = 0;
    string str = to_string(n);
    ans = str.length();
    return ans;
}

int main(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"Number of digits are:"<<count_digits(n)<<endl;
    cout<<"Number of digits are:"<<count_digits_2(n)<<endl;
    cout<<"Number of digits are:"<<evenlyDividesUnique(n)<<"<--";
    return 0;
}
