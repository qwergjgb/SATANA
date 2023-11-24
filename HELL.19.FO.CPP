#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    string filename;
    cout << "Ââåäè èìÿ ôàéëà äëÿ çàïèñè: ";
    cin >> filename;

    ofstream file(filename, ios::app);
    if (!file) {
        cerr << "ÒÀÊÎÃÎ ÔÀÉËÀ ÍÅÒ ÔÈÃÓØÊÈ ß ÅÃÎ ÒÅÁÅ ÎÒÊÐÎÞ !!!!!!!!!" << endl;
        return 1;
    }

    cout << "Ââåäè òåêñò ÍÀÏÈØÈ ÕÎÒÜ ×ÒÎ-ÍÈÁÓÄÜ!!!!(ââåäè 'q' ÷òîáû çàêîí÷èòü):\n";
    string input;
    cin.ignore();
    while (getline(cin, input) && input != "q") {
        file << input << endl;
    }

    cout << "Äàííûå óñïåøíî çàïèñàíû â ôàéë.ÌÎËÎÄÅÖ.ÂÎÇÜÌÈ Ñ ÏÎËÊÈ ÏÈÐÎÆÎÊ" << endl;
    return 0;
}
