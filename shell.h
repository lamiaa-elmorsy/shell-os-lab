#ifndef SHELL_H_INCLUDED
#define SHELL_H_INCLUDED
#include <vector>

class Shell{
    public:
        Shell();
        void runCommand();
    private:
        char str[256];
    //    std::vector <std::string> arg;
        char * arg[64];
};


#endif // SHELL_H_INCLUDED
