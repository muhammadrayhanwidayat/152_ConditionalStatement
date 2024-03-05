#include <iostream>
using namespace std;

int main()
{
    int nBilangan;
    string nStatus;

    srand(time(0));

    nBilangan = rand() % 6;
    if (nBilangan % 2 == 0) {
        nStatus = " genap";
    }
    else {
        nStatus = "ganjil";
    }


    cout << "angka " << nBilangan << endl;
    cout << "adalah bilangan  " << nStatus << endl;

    return 0;
}