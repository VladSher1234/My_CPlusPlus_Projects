#include <iostream>
#include <cmath>
#include <ctime>
#include <unistd.h>
using namespace std;

int main()
{
    while (true)
    {
        system("clear");
        time_t t = time(NULL);
        tm* tPtr = localtime(&t);
        cout << "Current Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl; 
        cout << "Current Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
        sleep(1);
    }
}