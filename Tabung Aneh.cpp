#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
    stack <char> stacks;
    char masukan[200];
    cin>>masukan;
    int i;
    for(i = 0;i<strlen(masukan);i++)
    {
         stacks.push(masukan[i]);
    }
    for(i = 0;i<strlen(masukan);i++)
    {
        if(stacks.top() == masukan[i])
        {
            stacks.pop();
        }

    }
    if(stacks.empty())
    {
        printf("Tabung Kosong");
    }
   while (!stacks.empty()) {
        cout << stacks.top();
        stacks.pop();
    }




}
