#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    int count = 0;
    int words = 0;
    int sentences = 0;
    char c;
    bool counted_word = false;
    while((c = getc(stdin)) != EOF)
    {
        if(isspace(c)) {
            counted_word = false;
        }
        if ((isspace(c) == 0) && (counted_word==false)) {
                counted_word = true;
                words++;
        }
        if(c == '\n') {
            counted_word = false;
            sentences++;
        }
        count++;

    }
    cout << '\t' << sentences << '\t' << words << '\t' << count << endl;
}
