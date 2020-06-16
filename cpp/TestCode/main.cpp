#include <iostream>
#ifdef LINUXOS
#include <unistd.h>
#else
#include <Windows.h>
#endif
using namespace std;

int main()
{
#ifdef LINUXOS
	cout << "LINUXOS" << endl;
#else
	cout << "Windows" << endl;
#endif
    //cout << "Hello world" << endl;

    sleep(2);

    return 0;
}