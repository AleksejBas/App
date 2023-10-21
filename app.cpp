// Программа на С++ для тестирования данных передаваемых на GitHub
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
 int main(int argc, char* argv[]){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Проверка вводимой информации в программу: ";
    for(int i = 0; i < argc; i++)
        cout << argv[i] << " ";
    system("pause");
    return 0;
 }