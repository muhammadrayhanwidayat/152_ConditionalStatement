#include <iostream>
using namespace std;

int main()
{
    int nBilanganA, nBilanganB;
    string status;

    srand(time(0));

    nBilanganA = rand() % 6;
    nBilanganB = rand() % 2;

    if (nBilanganA == nBilanganB) {
        status = "sama Besar";
    }
    else if (nBilanganA > nBilanganB) {
        status = "Bilangan A lebih besar dari bilangan B";
    }
    else {
        status = "Bilangan A  lebih kecil dari bilangan B";
    }

    cout << "bilangan pertama adalah " << nBilanganA << endl;
    cout << "bilangan kedua adalah " << nBilanganB << endl;
    cout << "status" << status << endl;
    return 0;
}
