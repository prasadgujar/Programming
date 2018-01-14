#include <iostream>
#include <ctime>
#include <cstdlib> //_sleep()  --- just a function that waits a certain amount of milliseconds

using namespace std;

int main()
{

    clock_t cl;     //initializing a clock type

    cl = clock();   //starting time of clock


    cout << cl/(double)CLOCKS_PER_SEC << endl;  //prints the determined ticks per second (seconds passed)


    return 0;
}
