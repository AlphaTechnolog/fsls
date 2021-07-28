// Show the list of files in a passed directory path
#include <iostream>
#include <vector>
#include <string>
#include <dirent.h>

using namespace std;

// Show the usage of this app
void show_usage(char * argv[]) {
    cout << "usage: " << argv[0] << " [-h] dir (default = ./) -l" << endl;
}


// Main function. Returns int (status code)
int main(int argc, char * argv[]) {
    DIR *dir; struct dirent * entry;
    vector<string> filenames;
    string path;
    bool show_hidden = false;

    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-' && argv[i][1] == 'h') {
            show_usage(argv);
            exit(0);
        }
        if (argc < 2 || (argv[i][0] == '-' && argc == 2)) {
            path = "./";
        } else {
            path = argv[1];
        }
        if (argv[i][0] == '-' && argv[i][1] == 'l') {
            show_hidden = true;
        }
    }

    if ((dir = opendir(path.c_str())) != NULL) {
        while ((entry = readdir(dir)) != NULL) {
            filenames.push_back(entry->d_name);
        }
        closedir(dir);
    } else {
        perror("opendir");
        return 1;
    }

    for (string filename : filenames) {
        if (filename == ".") continue;
        if (filename == "..") continue;
        if (filename[0] == '.' && !show_hidden) continue;
        cout << filename << endl;
    }

    return 0;
}