#include<iostream>
using namespace std;

float AdditionFloat(float no1, float no2)
{
    float Ans = 0.0f;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float iRet = 0.0f;

    iRet = AdditionFloat(11.7, 10.3);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}