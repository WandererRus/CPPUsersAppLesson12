// CPPUsersAppLesson 12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    ////task1
    //char symbol = 0;
    //int countword = 0;
    //bool wordstart = false;
    //cin >> symbol;
    ////tolower(symbol); if we need get count symbol without register symbol
    //if (symbol != 127)
    //{
    //    symbol = symbol % 127;
    //}
    //file* file;
    //fopen_s(&file, "d:\\task12_1.txt", "r");
    //    while (!feof(file))
    //{
    //    char get = fgetc(file);
    //    //tolower(get); if we need get count symbol without register symbol
    //    if (!wordstart)
    //    {
    //        if (get == symbol)
    //        {
    //            wordstart = true;
    //            countword++;
    //        }
    //        else
    //        {   
    //            wordstart = true;
    //        }
    //    }
    //    if (get == 32)
    //    {
    //        wordstart = false;
    //    }
    //}
    //cout << countword;

    ////task2
   /* FILE* file;
    FILE* fileresult;
    fopen_s(&file, "d:\\task12_2.txt", "r");
    fopen_s(&fileresult, "d:\\task12_2result.txt", "w");
    while (!feof(file))
    {
        char digit = fgetc(file);
        if (digit == '0')
        {
            fputc('1', fileresult);
        }
        else if (digit == '1')
        {
            fputc('0', fileresult);
        }
        else if (digit == EOF)
        {
            
        }
        else
        {
            fputc(digit, fileresult);
        }
    }

    fclose(file);
    fclose(fileresult);*/
    
    ////Task3
    //string* massiveStrings = new string[5]{ "First","Second","Third","Fourth","Fifth" };
    //FILE* fileresult;
    //fopen_s(&fileresult, "d:\\task12_3result.txt", "w");
    //for (int i = 0; i < 5; i++)
    //{
    //    fputs(massiveStrings[i].c_str(), fileresult);
    //    fputc('\n', fileresult);
    //}
    //fclose(fileresult);

    ////Task4
    //int countSymbols = 0;
    //char symbol = ' ';
    //FILE* file;
    //fopen_s(&file, "d:\\task12_4.txt", "r");
    //
    //while (!feof(file))
    //{
    //    symbol = fgetc(file);
    //    if (symbol != EOF && symbol != '\n')
    //    {
    //        countSymbols++;
    //    }
    //}
    //fclose(file);
    //cout << countSymbols;

    /*Task5*/
    /*int counter = 0;
    FILE* file;
    fopen_s(&file, "d:\\task12_5.txt", "r");
    while (!feof(file))
    {
        fgets(new char[128], 127, file);
        counter++;
    }
    cout << counter;*/


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
