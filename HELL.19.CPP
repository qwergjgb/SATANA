#include <windows.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
bool isHeader(const string& line) {
    return line.length() < 40 && !line.empty();
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream file("D:\\ëàáû\\îàèï\\HELL 19\\HELL.txt");

    if (!file.is_open()) {
        cerr << "ÏÐÎÁËÅÌÀ Ñ ÔÀÉËÎÌ ÔÈÃ ß ÅÃÎ ÎÒÊÐÎÞ!!!!" << endl;
        return 1;
    }

    string line;
    bool inh = false;
    bool outputh = false;
    while (getline(file, line)) {
        if (!inh && isHeader(line)) {
            inh = true;
            outputh = true;
            cout << line << endl;
        } else if (inh && line.empty()) {
            inh = false;
            outputh = false;
        } else if (outputh) {
            cout << line << endl;
        }
    }

    file.close();

    return 0;
}
