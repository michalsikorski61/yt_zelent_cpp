#include <iostream> 

using namespace std; 

int liczba_cukierkow;
int liczba_uczniow;
int ile_cukierkow_dla_kazdego;
int ile_cukierkow_zostaje;
int main(){
    cout<<"Ile cukierkow kupila mama: "<<endl;
    cin>>liczba_cukierkow;

    cout<<"Ile uczniow jest w klasie: "<<endl;
    cin>>liczba_uczniow;

    ile_cukierkow_dla_kazdego = liczba_cukierkow / (liczba_uczniow-1);

    ile_cukierkow_zostaje = liczba_cukierkow - (liczba_uczniow-1)*ile_cukierkow_dla_kazdego;

    cout<<"Kazdy powinien otrzymac: "<<ile_cukierkow_dla_kazdego<<" cukierkow. "<<endl;
    cout<<"Na wieczoro zostaje: "<<ile_cukierkow_zostaje<<" cukierkow"<<endl;

    return 0; 

}