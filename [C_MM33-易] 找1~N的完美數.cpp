#include <iostream>
using namespace std;

int FactorSum(int num){
    int sum = 0;
    int i;
    // check whether is factor and sum them
    for(i = 1; i*i < num; i++){
        if(num % i == 0){
            sum += i;
            sum += (num / i);
        }
    }
    if(i*i == num) sum += i;
    return sum - num;
}

int main(){
    int num;
    cin >> num;

    for(int i = 6; i <= num; i++){
        if(FactorSum(i) == i){
            if(i != 6) cout << " ";
            cout << i;
        }
    }
    cout << endl;
}