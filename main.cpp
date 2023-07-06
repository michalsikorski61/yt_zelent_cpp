#include <iostream>


using namespace std;

string imie; int liczba_powtorzen;
int main()
{

    cout<<"Ile razy wypisac imie: ";
    cin>>liczba_powtorzen;

    cout<<"Podaj imie: ";
    cin>>imie;

    for(int i = 0;i<liczba_powtorzen;i++){
        cout<<i+1<<". "<<imie<<endl;
    }

    return 0;
}