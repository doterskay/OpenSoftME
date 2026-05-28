#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);
    char* time_str = ctime(&now);


    cout<< "Now time: " << time_str;


    return 0;
} ////YES ITS JOB