#include <iostream>


using namespace std;

int populacja=1;
int godzin=0;
int main()
{

    while (populacja<=1000000000)
    {
        godzin++;
        populacja*=2;

        cout<<"Minelo "<<godzin<<"godzin. Populacja wynosi "<<populacja<<endl;
    }
    

    return 0;
}