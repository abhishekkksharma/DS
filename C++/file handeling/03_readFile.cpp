#include <iostream>
using namespace std;
constexpr int maxbuffer = 1024;

int main() {
    const char * filename = "myfile.txt";
    const char * information = "My file has some info.\n";
    char buf[maxbuffer];
    FILE *fh = fopen(filename,"r");
    while (fgets(buf,maxbuffer,fh))
    {
        fputs(buf,stdout);
    }
    fclose(fh);
    return 0;
}