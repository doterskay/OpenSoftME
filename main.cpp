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
        cout << "│         SYSTEM TIME v1.2        │\n";
        cout << "├─────────────────────────────────┤\n";
        cout << "  1 - Показать всё\n";
        cout << "  2 - Открыть YouTube в браузере      \n";
        cout << "  3 - VK в браузере      \n";
        cout << "  4 - Spotify в браузере      \n";
        cout << "  5 - Ping in DNS 8.8.8.8      \n";
        cout << "  0 - Выйти\n";
        cout << "└─────────────────────────────────┘\n";
        cin >> choice;
        
        time_t now = time(0);
        tm* local = localtime(&now);


        

        
         if (choice == 1) { 
            cout << "\nTime: "<< local-> tm_hour<< ":"
            << local->tm_min << ":" << local->tm_sec << "\n";
            cout << local->tm_mday << " " << months[local-> tm_mon] << " "<< local->tm_year + 1900;

        }
        else if (choice == 2) {
            cout << "Open Youtube im Browser.....\n";
            system("start https://www.youtube.com");
        }
        else if( choice == 3) { 
            cout<< "Open Vk music... \n";
            system("start https://vk.com "); 
        }
        else if ( choice == 4) { 
            cout<< "Open Spotify... ";
            system("start https://www.spotify.com");
        }
        else if (choice == 5) {
            cout<< "PING WIFI\n";
            system("ping 8.8.8.8 -n 3");
        }
     
      
        
    } while (choice != 0);
   
    return 0;
}