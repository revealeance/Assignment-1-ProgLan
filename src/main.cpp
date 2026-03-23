#include <iostream>
#include <string>

using namespace std;

string userinput;

int main(int argc, char ** argv) {
    cout << "Silakan input nama anda: ";
    getline(cin, userinput);
    cout << "Nama anda adalah: " << userinput << endl;

    return 0;
}