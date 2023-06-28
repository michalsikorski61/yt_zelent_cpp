#include <iostream> 

using namespace std; 

int wiek;

int main(){

    cout<<"Ile masz lat: ";
    cin>>wiek;

    if(wiek>=18){
        cout<<"Jestes pelnoletni ";
    }else{
        cout<<"Jestes niepelnoletni ";
    }

    if(wiek>=35){
        cout<<"Mozesz kandydowac na prezydenta";
    }else{
        cout<<"NIe mozesz kandydowac na prezydenta";
    }
    return 0; 

}