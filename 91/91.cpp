#include <iostream>

using namespace std;

int main()
{
    
        setlocale(LC_CTYPE, "ukr");
        cout << "++++++++++++++++++++++++++++++++++++\n";
        cout << "            Iнформацiя:           \n";
        cout << "Група: IПЗ-I 18к                  \n";
        cout << "ПІБ: Соляной Александр Олегович\n";
        cout << "Номер теми: 1.3.1 \n";
        cout << "Номер завдання: 91 " << "\n";
        cout << "+++++++++++++++++++++++++++++++++++\n\n";


    int b[5][5];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cout << "Vvedite matrici: ";
            cin >> b[i][j];
        }

    int success = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i != j)
                if (b[i][j] == b[j][i])
                    success = 1;
                else
                    success = 0;

    if (success)
        cout << "Kvadrat simetrichen \n";
    else
        cout << "Kvadrat ne simetrichen \n";

}
