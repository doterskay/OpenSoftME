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
        cout << "│         SYSTEM TIME v1.2.2        │\n";
        cout << "├─────────────────────────────────┤\n";
        cout << "  1 - Показать дату и время\n";
        cout << "  2- Открыть просто браузер\n";
        cout << "  3 - Открыть YouTube в браузере      \n";
        cout << "  4 - VK в браузере      \n";
        cout << "  5 - Spotify в браузере      \n";
        cout << "  6 - Открыть впн      \n";
        cout << "  7 - Открыть telegram      \n";
        cout << "  8 - Погода в вашем регионе      \n";
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
        else if(choice == 2){
            cout<< "Open Bwowser...";
            system("start https://www.google.com/");
        }
        else if (choice == 3) {
            cout << "Open Youtube im Browser.....\n";
            system("start https://www.youtube.com");
        }
        else if( choice == 4) { 
            cout<< "Open Vk music... \n";
            system("start https://vk.com "); 
        }
        else if ( choice == 5) { 
            cout<< "Open Spotify... ";
            system("start https://www.spotify.com");
        }
        
        else if ( choice == 6){
              cout << "Open VPN.....\n";
        system("start \"\" \"C:\\Program Files (x86)\\v2RayTun\\v2RayTun.exe\"");

        }
        else if (choice == 7) {
            cout << "Open telegram...\n";
            system("start \"\" \"C:\\Users\\tripelss\\AppData\\Roaming\\Telegram Desktop\\Telegram.exe\"");
        }
        else if (choice == 8){
            cout<<"Погода по вашему место положени...";
            system("curl wttr.in/?0qM");
            cout<<"\n";
            system("pause");

        }
     
      
        
    } while (choice != 0);
   
    return 0;
}
