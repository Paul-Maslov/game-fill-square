// Game1 fill the square.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
	srand(time(NULL));//подключаем в качестве базы случайных текущую дату
	int bot=rand();//генерируем случайное 
	system("cls");//очистка экрана
	bot = rand() % 10 + 1;//бот выбирает рисунок
    cout << "КОМПЬЮТЕР ПРЕДЛАГАЕТ ДОПОЛНИТЬ РИСУНОК = " << bot << endl;
    int row = 5;
    int column = row;
    int choice=0;
	Sleep(rand() % 1000);//пауза до 1 секунды
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | 0);

    switch (bot)
    {
        case 1:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
                else if (j + 1 >= i + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 2:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 <= i + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 3:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 >= i + 1 && i + j <= column + 1)	cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 4:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 <= i + 1 && i + j >= column + 1)	cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 5:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 >= i + 1 && i + j <= column + 1 || j + 1 <= i + 1 && i + j >= column + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 6:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 <= i + 1 && i + j <= column + 1 || j + 1 >= i + 1 && i + j >= column + 1)	cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 7:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 <= i + 1 && i + j <= column + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 8:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (j + 1 >= i + 1 && i + j >= column + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 9:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
                else if (i + j <= column + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
        case 10:
        {for (int i = 0; i < row + 2; i++)
        {
            for (int j = 0; j < column + 2; j++)
            {
                if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
                else if (i + j >= column + 1) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
        }
        break;
    }
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | 0);
    cout << "ВЫБЕРИТЕ НЕДОСТАЮЩИЙ РИСУНОК\n";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | 0);

    cout << "-------\t-------\t-------\t-------\t-------\t-------\t-------\n";
    cout << "|*****|\t|*    |\t|*****|\t|     |\t|*****|\t|     |\t|*****|\n";
    cout << "| ****|\t|**   |\t| *** |\t|     |\t| *** |\t|*   *|\t|*****|\n";
    cout << "|  ***|\t|***  |\t|  *  |\t|  *  |\t|  *  |\t|** **|\t|*****|\n";
    cout << "|   **|\t|**** |\t|     |\t| *** |\t| *** |\t|*****|\t|** **|\n";
    cout << "|    *|\t|*****|\t|     |\t|*****|\t|*****|\t|*****|\t|*   *|\n";
    cout << "-------\t-------\t-------\t-------\t-------\t-------\t-------\n";
    cout << "   1   \t   2   \t   3   \t   4   \t   5   \t   6   \t   7   \n\n\n";
    cout << "-------\t-------\t-------\t-------\t-------\t-------\t-------\n";
    cout << "|*   *|\t|*    |\t|    *|\t|*****|\t|    *|\t| ****|\t|**** |\n";
    cout << "|** **|\t|**   |\t|   **|\t|**** |\t|   **|\t|  ***|\t|***  |\n";
    cout << "|*****|\t|***  |\t|  ***|\t|***  |\t|  ***|\t|   **|\t|**   |\n";
    cout << "|** **|\t|**   |\t|   **|\t|**   |\t| ****|\t|  ***|\t|***  |\n";
    cout << "|*   *|\t|*    |\t|    *|\t|*    |\t|*****|\t| ****|\t|**** |\n";
    cout << "-------\t-------\t-------\t-------\t-------\t-------\t-------\n";
    cout << "   8   \t   9   \t   10  \t   11  \t   12  \t   13  \t   14  \n";
    
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | 0);
    cout << "Введите номер рисунка:\t1-Первый  \t2-Второй   \t3-Третий   \t4-Четвертый\t5-Пятый\n";
    cout <<"\t\t\t6 - Шестой\t7 - Седьмой\t8 - Восьмой\t9 - Девятый\t10 - Десятый\n";
    cout << "\t\t\t11 - Одиннадцатый\t12 - Двенадцатый\t13 - Тринадцатый\t14 - Четырнадцатый\n";
    cin >> choice;
    cout << "\n";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | 0);
    switch (choice)
    {
    case 1:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (j + 1 >= i + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 2:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 <= i + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 3:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 >= i + 1 && i + j <= column + 1)	cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 4:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 <= i + 1 && i + j >= column + 1)	cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 5:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 >= i + 1 && i + j <= column + 1 || j + 1 <= i + 1 && i + j >= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 6:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (j + 1 <= i + 1 || i + j >= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 7:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (j + 1 >= i + 1 || (j + 1 <= i + 1 && i + j <= column + 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 8:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 <= i + 1 && i + j <= column + 1 || j + 1 >= i + 1 && i + j >= column + 1)	cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 9:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 <= i + 1 && i + j <= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 10:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (j + 1 >= i + 1 && i + j >= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 11:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1) cout << "#";
            else if (i + j <= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 12:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (i + j >= column + 1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 13:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (j + 1 >= i + 1 || (j + 1 <= i + 1 && i + j >= column + 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    case 14:
    {for (int i = 0; i < row + 2; i++)
    {
        for (int j = 0; j < column + 2; j++)
        {
            if (i == 0 || j == 0 || i == row + 1 || j == column + 1)	cout << "#";
            else if (i + j <= column + 1 || (j + 1 <= i + 1 && i + j >= column + 1)) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    }
    break;
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | BACKGROUND_RED);
        default:cout << "НЕПРАВИЛЬНО ВЫБРАН РИСУНОК!!!\n"; break;
    }
    int n = 0;
    int temp = 5;
    int temp1 = 5;
    SetConsoleTextAttribute(hStdOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
    cout << "\n\n";
    cout << "ВЫ ВВЕЛИ РИСУНОК = " << choice;
    cout << "\n\n";
    if (bot == 1 && choice == 2 || bot == 2 && choice == 1 || bot == 3 && choice == 6 || bot == 4 && choice == 7 || bot == 5 && choice == 8 || bot == 6 && choice == 5 || bot == 7 && choice == 13 || bot == 8 && choice == 14 || bot == 9 && choice == 12 || bot == 10 && choice == 11)
        while (temp)
        {
            SetConsoleTextAttribute(hStdOut, n++ % 15);
            for (int i = 0; i < 1;i++)
            {
                cout << "#####\t#####\t  #  \t#####\t#   #\t  #  \t#    \t#   #\t ### \t  ##  \t\n";
                cout << "#   #\t#   #\t # # \t#   #\t#  ##\t # # \t#    \t#   #\t#   #\t  ##  \t\n";
                cout << "#   #\t#####\t#   #\t#####\t# # #\t#   #\t#####\t#####\t#   #\t  ##  \t\n";
                cout << "#   #\t#    \t#####\t#   #\t##  #\t#   #\t#   #\t#   #\t#   #\t      \t\n";
                cout << "#   #\t#    \t#   #\t#####\t#   #\t#   #\t#####\t#   #\t ### \t  ##  \t\n";
            }
            Sleep(1000);
            system("CLS");
            temp = temp--;

        }
    
    else 
        while(temp1)
        {
           SetConsoleTextAttribute(hStdOut, n++ % 15);
                for (int i = 0; i < 1;i++)
                {
                    cout << " ### \t# # #\t#   #\t#####\t#   #\t  #  \t\n";
                    cout << "#   #\t# # #\t#  ##\t#    \t#  # \t # # \t\n";
                    cout << "#   #\t# # #\t# # #\t#####\t###  \t#   #\t\n";
                    cout << "#   #\t# # #\t##  #\t#   #\t#  # \t#####\t\n";
                    cout << " ### \t#####\t#   #\t#####\t#   #\t#   #\t\n";
                }
                Sleep(1000);
                system("CLS");
                temp1 = temp1--;
        } 
    SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN);
    cout << "ПОПРОБУЙТЕ СНОВА!!!!!\n";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | 0);

}










