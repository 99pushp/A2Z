#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


long long helper_divisors(int n){
    long long int ans = 0;
    // Write Your Code here
    for(int i=1;i<=sqrt(n);i++){

    if(n%i==0){
        ans=ans+i;
        if(i!=(n/i))
        {ans=ans+(n/i);}
    }
}return ans;}


long long sumOfDivisors(int num)
    {
       long long final_answer = 0;
       for(int i=1;i<=num;i++){
           final_answer+=helper_divisors(i);
           cout<<"final ans"<<i<<"=="<<helper_divisors(i)<<endl;
       }
       return final_answer;
    }




vector<int> optimal(int num){
    vector<int>v2;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            v2.push_back(i);
            if(num/i!=i)
            {v2.push_back(num/i);}
        }
    }
    vector<int> :: iterator it;
    sort(v2.begin(),v2.end());
    return v2;
}



vector<int> brute_force(int num){
    vector<int>v1;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            v1.push_back(i);
        }
    }
    return v1;
}



int main(){
    cout<<"enter a number :"<<endl;
    int n;
    cin>>n;
    vector<int>ans=brute_force(n);
    cout<<"all the divisors are:"<<endl;
    vector<int>::iterator it;
    for(it = ans.begin();it!=ans.end();it++){
        cout<<(*it)<<",";
    }
    vector<int>ans2=optimal(n);
    cout<<"all the divisors are:"<<endl;
    vector<int>::iterator it2;
    for(it2 = ans.begin();it2!=ans.end();it2++){
        cout<<(*it2)<<",";
    }
    cout<<sumOfDivisors(n);
    return 0;
}
