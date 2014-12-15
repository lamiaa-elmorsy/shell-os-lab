#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "shell.h"

using namespace std;
Shell::Shell() {
    //  vector<string> tokens;
    int size ;
    cout<< "Shell> ";
    cin.getline(str, 265);
    //spliting the string
    istringstream iss (str);
    int i=0;
    do {
        string sub;
        iss>>sub;
        arg[i]= sub;
        i++;
    } while (iss);
    //end of split

    size = sizeof(arg)/sizeof(arg[0]);
    cout<< size<<endl;
    for (i=0 ; i<size; i++) {
        cout <<arg[i]<<endl;

    }
    //runCommand
    runCommand();
}

void Shell::runCommand() {
    int pID = -1;
//    char* arg0 =arg[0];
//    char** arg_list= arg;
    //create a chile process
    pID= fork();
    if(pID == 0) {
       // cout << endl << "I am the child. My pid is " << getpid() << "." << endl;
        execvp(arg[0], arg);
        return;
    } else if(pID > 0) {
        cout  << endl << "I am the parent. My pid is " << getpid() << "." << endl;
    } else {
        cerr << "Fork error. Quitting Program." << endl;

        // Bail out of the program.
        //exit(EXIT_FAILURE);
    }
}


/*    for (int i=0 ; i<tokens.size();i++)
        cout << tokens[i];
*/
