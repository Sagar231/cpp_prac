#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int reverse;

    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10+lastdigit;
        n = n/10; //Here n is an integer so the value of n should be stored as integer not somthing like 12.4

    }
    cout<<reverse<<endl;


}