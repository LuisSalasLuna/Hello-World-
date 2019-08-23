#include <iostream>

using namespace std;

int main()
{
    int a = 15;
    int b = 6;
    int c = 7;
    if(a>b){
        if(a>c){
            cout<< a << " es el mayor"<<endl;}
        else{
            cout<< c << " es el mayor"<<endl;}
    }
    else{
        if(b>c){
            cout<< b <<" es el mayor"<<endl;}
        else{
            cout<< c <<" es el mayor"<<endl;}
    }

}
