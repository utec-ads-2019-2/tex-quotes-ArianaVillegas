#include <iostream>

using namespace std;

bool first=1;

void newLine(char letter){
    if (letter == '"'){
        if (first){
            cout << "``";
        } else {
            cout << "''";
        }
        first = !first;
    } else {
        cout << letter;
    }
}

int main(int argc, char *argv[]) {
    char letter;
    while(scanf("%c",&letter)==1){
        newLine(letter);
    }
}

