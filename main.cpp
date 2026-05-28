#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);
    tm* local = localtime(&now);
    
    string months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    cout << " Day end Time : ";
    cout << local -> tm_mday << ". ";
    cout << months[local -> tm_mon]<<". ";
    cout << local -> tm_year + 1900<< " ";
    cout << local-> tm_hour << ":";
    cout << local-> tm_min << ":";
    cout << local -> tm_sec << endl;
    
    return 0;
}