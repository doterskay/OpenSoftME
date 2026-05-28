#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    time_t now = time(0);
    tm* local = localtime(&now);
    
    string months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    cout << "\n┌─────────────────────────────────┐\n";
    cout << "│         SYSTEM TIME v1.0        │\n";
    cout << "├─────────────────────────────────┤\n";
    cout << "│ DATE: ";
    cout << local->tm_mday << " " << months[local-> tm_mon] << " "<< local->tm_year + 1900;
    cout << "               │\n";
    cout << "│ TIME : ";
    cout << local -> tm_hour << ":";;
    if (local-> tm_min < 10) cout << "0";
    cout << local->tm_min<< ":"; 
    if( local -> tm_sec < 10) cout << "0";
    cout << local -> tm_sec;
    cout << "                  │\n";
    cout << "└─────────────────────────────────┘\n";
    
    return 0;
}