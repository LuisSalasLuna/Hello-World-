#include <iostream>

using namespace std;

int main()
{
    //1
    /*int n ;
    int a; int b; int c; int d; int e;
    cin >> n ;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;
    cout << e <<'\t'<< d <<'\t'<< c <<'\t'<< b <<'\t'<< a <<'\t';

    int aux = 0;
    int num;
    cin >>num;
    cout << end0l;
    aux = num/10000;
    cout << aux<<'\t';
    num -= aux;
    aux = num/1000;
    cout << aux<<'\t';
    num -= aux;
    aux = num/100;
    cout << aux<<'\t';
    num -= aux;
    aux = num/10;
    cout << aux<<'\t';
    num -= aux;
    cout << num;

    //2
    int n=0;
    int a =1;
    int contador =0;
    cin >> n;
    while(a <= n)
    {contador ++;
    a= a*10;}
    cout << "tiene" <<contador<<"digitos";*/



    //3
    /*int n ;
    int a; int b; int c; int d; int e;
    cin >> n ;
    int m = n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;
    if(a == e && b ==d)
        cout <<m << "es palinndrome";*/
    /*char n;
    cin >> n;
    char p;
    int m = static_cast<int>(n);
    if(m >= 65 && m <= 90)
        {p = static_cast<int>(m+32);}
    if(m >= 97 && m <=122)
        {p = static_cast<int>(m-32);}
    cout << p;*/

    int p;
    int k = 1;
    int n1 = 0;
    int n2 = 1;
    cin >> p;
    int s;
    if(p==0 || p==1)
        {cout <<1;}
    else {while(p>k){
        s = n1+n2;
        n1 = n2;
        n2 = s;
        k++;
    cout << s;
    }}

    return 0;
}
