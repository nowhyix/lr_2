#include <iostream>
using namespace std;

int main()
{
    char* c = new char[30];
    int cou = 0;
    int len = 0;
    bool flag;
    for (int i = 1; i <= 5; i++) {
        cin >> c;
        while (c[len]) {
            len++;
        }
        flag = true;

        int j = 0;
        while ((j < len / 2) && flag) {
            if (c[j] != c[len - 1 - j])
                flag = false;
            j++;
        }
        if (flag) {
            cou++;
        }
    }
    cout << cou;
    delete c;
    return 0;
}