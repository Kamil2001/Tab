#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int tab[12];
    string _months[12];
    _months[0] = "styczen";
    _months[1] = "luty";
    _months[2] = "marzec";
    _months[3] = "kwiecien";
    _months[4] = "maj";
    _months[5] = "czerwiec";
    _months[6] = "lipiec";
    _months[7] = "sierpien";
    _months[8] = "wrzesien";
    _months[9] = "pazdziernik";
    _months[10] = "listopad";
    _months[11] = "grudzien";

    for(int i=0; i<12; i++)
    {
        tab[i] = rand() % 10000 +1;
    }

    for(int i=0; i<12; i++)
    {
        cout << "W " << _months[i] << " zarobiles: " << tab[i] << "\n" ;
    }
    return 0;
}
