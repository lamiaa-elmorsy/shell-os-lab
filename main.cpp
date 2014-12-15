#include <iostream>
#include <string.h>
#include <sstream>
#include "shell.h"
using namespace std;

int main()
{
    char str[265] ;
    cout<<("Hello... type \"start\" or \"s\" to use shell \n>>");
    cin.getline(str, 265);
    //cout <<str;
    if (strcmp (str , "start") == 0 || strcmp (str, "s") == 0){
            Shell s;
    }
    else if (strcmp (str, "exit") == 0){
        cout<<("Shell Has Been Terminated");
        return 0;
    }

    return 0;
}
