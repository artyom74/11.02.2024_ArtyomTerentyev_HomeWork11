#include <iostream>
#include <string>
using namespace std;

string answer(int answer1) {
    const int MTS = 916;
    const int Byline = 906;
    const int Megafon = 926;
    const int MGTS = 499;

    switch (answer1) {

    case MTS:
        return "MTS";

    case Byline:
        return "Byline";

    case Megafon:
        return "Megafon";

    case MGTS:
        return "MGTS";
    }
}

    int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru");

    int operator1;
    cout << "��� (916, 910)" << endl << "������(906, 902, 901, 905)" << endl << "������� (926, 925)" << endl << "���� (499, 498)" << endl << "������� ��� ���������, ������� ��� �����: " << endl;
    cin >> operator1;

    cout << answer(operator1);
}
    