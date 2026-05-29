#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    int choice;
    string months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};


    do{
        SetConsoleOutputCP(CP_UTF8);
        cout << "\n┌─────────────────────────────────┐\n";
        cout << "│         SYSTEM TIME v1.1        │\n";
        cout << "├─────────────────────────────────┤\n";
        cout << "  1 - Показать время\n";
        cout << "  2 - Показать дату\n";
        cout << "  3 - Показать всё\n";
        cout << "  4 - Открыть YouTube в браузере      \n";
        cout << "  0 - Выйти\n";

        
        cout << "└─────────────────────────────────┘\n";
        cin >> choice;
        
        time_t now = time(0);
        tm* local = localtime(&now);


        if(choice == 1) {
            cout << "\n Time: "<< local-> tm_hour<< ":"
            << local->tm_min << ":" << local->tm_sec << "\n";
        }

        if(choice == 2) {
             cout << local->tm_mday << " " << months[local-> tm_mon] << " "<< local->tm_year + 1900;
        }
        if (choice == 3) { 
            cout << "\nTime: "<< local-> tm_hour<< ":"
            << local->tm_min << ":" << local->tm_sec << "\n";
            cout << local->tm_mday << " " << months[local-> tm_mon] << " "<< local->tm_year + 1900;

        }
        if (choice == 4) {
            cout << "Open Youtube im Browser.....\n";
            system("start https://www.youtube.com");
        }
      
        
    } while (choice != 0);
   
    return 0;
}