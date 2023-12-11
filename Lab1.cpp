#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n , i;
    
    cout << "Input number : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout <<  "[" << i << "]"<<" Hello world\n";
    }
}