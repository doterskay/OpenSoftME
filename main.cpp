#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);
    tm* local = localtime(&now);
    

    cout << " Day end Time : ";
    cout << local -> tm_mday << ".";
    cout << local -> tm_mon << ".";
    cout << local -> tm_year + 1900<< " ";
    cout << local-> tm_hour << ":";
    cout << local-> tm_min << ":";
    cout << local -> tm_sec << endl;
    
    return 0;
}