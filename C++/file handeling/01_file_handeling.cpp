#include <iostream>
using namespace std;

int main() {
    static const char *originalfile = "originalfile.txt";
    static const char *editedfile = "editedfile.txt";
    rename(originalfile,editedfile); //file is renamed
    remove(editedfile); //file deleted

    // FILE *fh = fopen(originalfile,"w"); //opens the file name originalfile, if not exist it creates
    // fclose(fh);
    return 0;
}