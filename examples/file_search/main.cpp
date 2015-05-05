#include <iostream>
#include <dirent.h>
using namespace std;

int main(){
	DIR *dir;
	struct dirent *ent;
	string str = ".";
	if ((dir = opendir (str.c_str())) != NULL) {
		/* print all the files and directories within directory */
		cout << "This file contains: ";
		while ((ent = readdir (dir)) != NULL) {
			cout << ent->d_name << " ";
		}
		closedir (dir);
		cout << endl;
	} else {
		/* could not open directory */
		perror ("");
		return EXIT_FAILURE;
	}
}

