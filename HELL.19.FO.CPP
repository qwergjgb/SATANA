#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    string filename;
    cout << "����� ��� ����� ��� ������: ";
    cin >> filename;

    ofstream file(filename, ios::app);
    if (!file) {
        cerr << "������ ����� ��� ������� � ��� ���� ������ !!!!!!!!!" << endl;
        return 1;
    }

    cout << "����� ����� ������ ���� ���-������!!!!(����� 'q' ����� ���������):\n";
    string input;
    cin.ignore();
    while (getline(cin, input) && input != "q") {
        file << input << endl;
    }

    cout << "������ ������� �������� � ����.�������.������ � ����� �������" << endl;
    return 0;
}
