#include<iostream>
using namespace std;
int numberOfWays(int m,int n){
    // Base case
    if(m==1 || n==0){
        return 1;
    }
    // relation between subproblems
    return numberOfWays(m-1, n) + numberOfWays(m,n-1);
}
int main(){
    cout<<numberOfWays(4,3)<<endl;
}