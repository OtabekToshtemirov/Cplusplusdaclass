#include <iostream>
#include <cmath>
//newblankk
using namespace std;
int main(int argc, char** argv) {
    double a,b,c,x,r,t;
    cout << "A=";
    cin >> a;
    cout << "B=";
    cin >> b;
    cout << "C=";
    cin >> c;
    cout << "X=";
    cin >> x;
    cout << "T=";
    cin >> t;
    if( x > 1 and x <= 2){
        r = pow(x,3)*a+x*x*b+c;

    }
    if( x > 2 and  x <= 3){
        r=a/x*x+b*x+c/ pow(x,1/2);
    }
    if(x>3){
        r= pow((a+b+c),t);
    }
    cout << "R=" << r;

    return 0;
}
