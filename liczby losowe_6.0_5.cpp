#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    srand(time(NULL));
    for (int i=0; i<=100; i++)
    {
        liczba = rand()%9 + 17;
        cout<<liczba<<" nr."<<i<<endl;

    }
    return 0;
}
