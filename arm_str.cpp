#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ori = n;
    
    int sum = 0;

    while(n>0){
        int lastdigit = n%10;
        sum+=pow(lastdigit,3);
        n = n/10;

    }
    if (sum == ori){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    
    return 0;

} 