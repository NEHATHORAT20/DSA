#include<iostream>
using namespace std;

double AdditionDouble(double no1, double no2)
{
    double Ans = 0.0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    double iRet = 0.0;

    iRet = AdditionDouble(11.7, 11.3);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}