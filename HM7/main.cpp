#include <iostream>
#include <random> // random
using namespace std;

int main()
{
    // random
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10);
    cout<<"---Перевірка таблиці множення---"<<endl;

    int usAnswer[10] = {}; // userAnswers

    int pcAnswer[10] = {}; // pcAnswers and questions
    for (int i = 0; i < 10; i++)
    {
        int num = dist(mt);
        pcAnswer[i] = ( i+ 1 ) * num;

        cout<< ( i + 1 ) << " * " << num << " = ";
        cin >> usAnswer[i];

        if (pcAnswer[i] == usAnswer[i])
        {
            cout << "Правильно :D" << endl;
        }
        else
        {
            cout << "Не правильно :(" << endl;
        }
    }

    return 0;
}