#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void myfunc(int x) {
    x=100;
}

int main()
{
    int var = 20;
    myfunc(var);
    cout << var;
    /*Save (CTRL+S), then g++ .\NameOfFile,
    then ./a. You don't have to do the g++ thing
    if you didn't make any edits to the file*/
    
    return 0; 
}

