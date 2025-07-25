#include <iostream>
using namespace std;

constexpr int maxbuffer = 1024;
int main() {
    const char * filename = "myfile.txt";
    const char * information = "My file has some info.\n";

    FILE * fh = fopen(filename,"w");
    /*
    w - write in file(deletes prev information)
    r - used to read the file only
    a -  append (preserves prev data and writes another data)
    */
    for (int i = 0; i < 20; i++)
    {
        fputs(information,fh);
    }
    fclose(fh);
    
    
    return 0;
}