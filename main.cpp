#include <iostream> 

using namespace std; 

string PIN;

int main(){
    cout <<"Witaj w naszym banku!"<<endl;
    cout<<"Podaj numer PIN:";
    cin>>PIN;

    if(PIN=="1234")
    {
        cout<<"Poprawny PIN";
    }else{
        cout<<"PIN niepoprawny";
    }

    return 0; 

}