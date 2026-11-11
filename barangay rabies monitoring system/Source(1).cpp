#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y)
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    _COORD pos;
    pos.X = x;
    pos.Y = y;


    SetConsoleCursorPosition(hConsole, pos);
    static CONSOLE_FONT_INFOEX fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 100;
    fontex.dwFontSize.X = 30;
    fontex.dwFontSize.Y = 20;
    SetCurrentConsoleFontEx(hOut, NULL, &fontex);
}

void border()
{
    char x, y;
    gotoxy(32, 4);
    cout << "Veterinary Management System";
    x = 2;


    for (int j = 0; j <= 90; j++)
    {
        gotoxy(x, 1);
        cout << "X";
        x += 1;
    }

    x = 2;
    for (int j = 0; j <= 90; j++)
    {
        gotoxy(x, 22);

        cout << "X";
        x += 1;
    }



    y = 2;
    for (int j = 0; j <= 20; j++)
    {
        gotoxy(2, y);
        cout << "X";
        y += 1;
    }
    y = 2;
    for (int j = 0; j <= 20; j++)
    {
        gotoxy(92, y);
        cout << "X";
        y += 1;
    }

}
void displaymenuAdmin(int currentOption2)
{
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    border();
    gotoxy(35, 10);
    cout << "Select an option:" << endl;
    gotoxy(35, 12);
    SetConsoleTextAttribute(hConsole, 2);
    cout << (currentOption2 == 0 ? "  > " : "  ") << "Animal Vaccination Record" << endl;
    gotoxy(35, 13);
    cout << (currentOption2 == 1 ? "  > " : "  ") << "Vaccination Status Report" << endl;
    gotoxy(35, 14);
    cout << (currentOption2 == 2 ? "  > " : "  ") << "Cat & Dog Census Count" << endl;
    gotoxy(35, 15);
    cout << (currentOption2 == 3 ? "  > " : "  ") << "Help" << endl;
    gotoxy(35, 16);
    cout << (currentOption2 == 4 ? "  > " : "  ") << "Exit" << endl;
}
void add()
{

}

void view()
{

}

void censuscount()
{
    int dogCount = 0;
    int catCount = 0;
    string animal;

    cout << "Welcome to the pet census program. Please enter 'dog' or 'cat' for each animal, type 'exit' to finish." << endl;

    while (true) {
        cout << "Enter animal: ";
        cin >> animal;

        if (animal == "dog") {
            dogCount++;
        }
        else if (animal == "cat") {
            catCount++;
        }
        else if (animal == "exit") {
            break;
        }
        else {
            cout << "Invalid input. Please enter 'dog', 'cat', or 'exit'." << endl;
        }
    }

    cout << "Total number of dogs: " << dogCount << endl;
    cout << "Total number of cats: " << catCount << endl;

    system("pause");
}
void help()
{
    border();

}

void exit()
{

}
int main()
{
    int currentOption = 0;
    int currentOption2 = 0;
    int currentOption3 = 0;


    int ch;
    string user, pass;
    int currentOption2 = 0;
    bool running2 = true;

    char x, y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    x = 2;
    for (int j = 0; j <= 90; j++)
    {
        gotoxy(x, 1);
        Sleep(20);
        cout << char(219);
        x += 1;
    }
    y = 2;
    for (int j = 0; j <= 20; j++)
    {
        gotoxy(92, y);
        Sleep(20);
        cout << char(219);
        y += 1;
    }
    SetConsoleTextAttribute(hConsole, 3);
    gotoxy(25, 20);
    cout << "Barangay rabies vaccination monitoring system";
    gotoxy(30, 5);
    cout << "        000        000" << endl;
    gotoxy(30, 6);
    cout << "       00000      00000" << endl;
    gotoxy(30, 7);
    cout << "       00000      00000" << endl;
    gotoxy(30, 8);
    cout << "  000   000        000   000" << endl;
    gotoxy(30, 9);
    cout << " 00000      000000      00000" << endl;
    gotoxy(30, 10);
    cout << " 00000    0000000000    00000" << endl;
    gotoxy(30, 11);
    cout << "  000   00000000000000   000" << endl;
    gotoxy(30, 12);
    cout << "      00000000000000000" << endl;
    gotoxy(30, 13);
    cout << "    000000000000000000000" << endl;
    gotoxy(30, 14);
    cout << "  0000000000000000000000000" << endl;
    gotoxy(30, 15);
    cout << "  0000000000000000000000000" << endl;
    gotoxy(30, 16);
    cout << "   0000000000    000000000" << endl;
    gotoxy(30, 17);
    cout << "    0000             0000" << endl;
    SetConsoleTextAttribute(hConsole, 5);
    y = 2;
    for (int j = 0; j <= 20; j++)
    {
        gotoxy(2, y);
        Sleep(20);
        cout << char(219);
        y += 1;
    }

    x = 2;
    for (int j = 0; j <= 90; j++)
    {
        gotoxy(x, 22);
        Sleep(20);
        cout << char(219);
        x += 1;
    }



    Sleep(100);
    system("cls");


    border();
    gotoxy(35, 10);
    cout << "enter your username:";
    cin >> user;
    gotoxy(35, 12);
    cout << "enter your password:";
    ch = _getch();

    while (ch != 13)
    {
        if (ch == 8)
            {
                if (!pass.empty())
                {
                    pass.erase(pass.size() - 1);
                    cout << "\b \b";
                }
            }
        else
        {
            pass.push_back(ch);
                cout << "*";
        }

        ch = _getch();

    }
    system("cls");
    if (user == "username" && pass == "password")
    {
        while (running2) {
            displaymenuAdmin(currentOption2);


            switch (_getch()) {
            case 72:
                SetConsoleTextAttribute(hConsole, 3);
                currentOption2 = (currentOption2 - 1 + 5) % 5;
                break;
            case 80:
                currentOption2 = (currentOption2 + 1) % 5;
                break;
            case 13:
                system("cls");
                switch (currentOption2) {
                case 0:
                    border();
                    add();
                    break;
                case 1:
                    border();
                    view();

                    break;
                case 2:
                    border();
                    censuscount();

                    break;
                case 3:
                    border();
                    gotoxy(35, 10);
                    cout << "kumain kana ba??" << endl;

                    break;

                case 4:
                    running2 = false;
                    cout << "Exiting..." << endl;
                    break;
                }
                if (currentOption2 != 4) {
                    cout << "Press any key to continue...";

                    _getch();
                }
                break;
            }
        }
    }
    else
    {
        cout << "access denied";

    }

    return 0;
}