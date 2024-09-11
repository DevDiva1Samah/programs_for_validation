#include <iostream>
#include <cmath>
using namespace std;


int isDigit(int);
bool isArmstrong(int);

int isDigit(int n){
    int counter = 0;
    while (n > 0){
        n = n / 10;
        counter++;
    }
    return counter;
}

bool isArmstrong(int n){
    int temp = n;
    int counter = isDigit(n);
    int sum = 0;
    while (n > 0){
        int remain = n % 10;
        n = n / 10;
        sum += pow(remain, counter);
    }
    if (sum == temp) {
        return true;
    } else {
        return false;
    }
}

int main() {
    for (int n = 1; n <= 10000; ++n){
        if (isArmstrong(n)){
            cout << n << " " << endl;
        }
    }
    return 0;
}