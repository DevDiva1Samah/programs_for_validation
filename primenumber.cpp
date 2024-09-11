#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int entier);

bool isPrime(int entier){
    for (int i = 2; i <= sqrt(entier); ++i){
        if (entier % i == 0){
            return false;
        }
    }
    return true;

}

int main() {
    int n;
    for(n = 10; n <= 1000; ++n){
        if (isPrime(n)){
            cout << "Prime number: " << n << endl;
        }
    }
}
