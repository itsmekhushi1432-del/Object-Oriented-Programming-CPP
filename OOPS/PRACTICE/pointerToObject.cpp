/*Calculate the sum of the coefficients of the binomial expansion using pointer to object*/

#include<iostream>
#include<cmath>

using namespace std;

class Binomial{
    public:
    int n;

    void setValue(int x){
        n = x;
    }

    void calculateBinomial(){
        cout<<pow(2,n);
    }

};
int main(){
    
    Binomial b;
    Binomial *ptr = &b;
    int n;
    cin>>n;

    ptr->setValue(n);
    ptr->calculateBinomial();
    return 0;
}