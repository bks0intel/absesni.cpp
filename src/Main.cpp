#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

int main()
{
    int com;
    do
    {
        std::cout << "please select a command bellow\n";
        std::cout << "4.exit\n";
        std::cin >> com ;
        if(com > 4)
        {
            system("cls");
            std::cout << "wrong input";
            Sleep(250);
            system("cls");
        

        }

    }while (com != 4);
    
    
}