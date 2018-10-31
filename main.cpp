#include <iostream>
#include "binary.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;
    boolean b(11);
    b.bitOn(5);
    b.bitOn(0);
    b.bitOn(10);
    for(int i =0;i<11;i++){
    	cout<<b[i];
    }
    b.clear();
    cout<<endl;
    for(int i =0;i<11;i++){
    	cout<<b[i];
    }
    system("read");
    return EXIT_SUCCESS;
}

