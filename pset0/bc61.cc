#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int count = 0;
    while(getc(stdin) != EOF)
    {
        count++;
    }
    cout << count << endl;
}
