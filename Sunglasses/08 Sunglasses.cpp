// 08 Sunglasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"
#define ASTERISK '*'
#define SPACE ' '
#define VERTICAL_LINE '|'
#define SOLIDUS '/'

string setString(int, int, char);

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    output.append(setString(1, 2 * n, ASTERISK))
        .append(setString(1, n, SPACE))
        .append(setString(1, 2 * n, ASTERISK))
        .append(NEW_LINE);

    for (int i = 1; i <= n - 2; i++)
    {
        output.append(setString(1, 1, ASTERISK))
            .append(setString(1, 2 * n - 2, SOLIDUS))
            .append(setString(1, 1, ASTERISK));

        if (i == ((n - 1) / 2))
        {
            output.append(setString(1, n, VERTICAL_LINE));
        }
        else
        {
            output.append(setString(1, n, SPACE));
        }

        output.append(setString(1, 1, ASTERISK))
            .append(setString(1, 2 * n - 2, SOLIDUS))
            .append(setString(1, 1, ASTERISK))
            .append(NEW_LINE);
    }

    output.append(setString(1, 2 * n, ASTERISK))
        .append(setString(1, n, SPACE))
        .append(setString(1, 2 * n, ASTERISK));

    cout << output << endl;

    return 0;
}

string setString(int start, int end, char simbol)
{
    string result = string();

    for (int i = start; i <= end; i++)
    {
        result.append(1, simbol);
    }

    return result;
}

//Напишете програма, която чете цяло число n (3 ≤ n ≤ 100), въведено от потребителя, и печата слънчеви очила с размер 5*n x n като в примерите:
//Примерен вход и изход
//вход	изход
//3	******   ******
//*////*|||*////*
//******   ******
//4	********    ********
//*//////*||||*//////*
//*//////*    *//////*
//********    ********
//5	**********     **********
//*////////*     *////////*
//*////////*|||||*////////*
//*////////*     *////////*
//**********     **********
//Подсказки:
//•	Отпечатайте най-горния ред от очилата:
//o 2 * n звездички; n интервала; 2 * n звездички
//•	Отпечатайте средните n-2 реда:
//o звездичка; 2 * n - 2 наклонени черти; звездичка; n интервала; звездичка; 2 * n - 2 наклонени черти; звездичка
//	  o	когато редът е (n-1) / 2 - 1, печатайте n вертикални черти вместо n интервала
//•	Отпечатайте най-долния ред от очилата:
//o 2 * n звездички; n интервала; 2 * n звездички
