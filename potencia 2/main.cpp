#include <iostream>

using namespace std;

int main()
{

//1ro
 int x;
 cin >> x;
 int y = x;
 while(x != 0 && x%2 == 0){x = x/2;}
 if(x==1)
    {cout<< y <<" es potencia de 2"<< endl;}
 else
    {cout<< y <<" no es potencia de 2"<< endl;}

 //2do
 int n;
 cin >> n;

 int m = n;
 int i = n;
 int v = 0;

 while(i != 0){
    if(n%i == 0){v++;};
    i--;
     }
 if(v == 2)
    {cout<< n <<" es primo"<< endl;}
 else
    {cout<< n <<" no es primo"<< endl;}

//3ro
 for(int e = 1; e <= 100;e++)
    {int v = 0;
     int i = e;
     while(i != 0){
        if(e%i == 0){v++;};
        i--;}
     if(v == 2)
        {cout<< e << endl;}}

 //4to
 int a;
 cin >> a;

 int b = a;
 int c = a-1;
 int d = 0;

 while(c != 0){
    if(a%c == 0){d = d+c;};
    c--;
     }
 if(d == a)
    {cout<< a <<" es perfecto"<< endl;}
 else
    {cout<< a <<" no es perfecto"<< endl;}






}
