#include <iostream>
using namespace std;

double rerata(double a, double b)
{
    return (a + b) / 2;
}
string status(double d)
{
    if (d >= 60)
    return "lulus";
    else
    return "gagal";
}
string status2(double r, double n)
{
    if (r >= 60 && n >= 70)
    return "lulus";
    else
    return "gagal";
}

int main()
{
    double niLM, niLB;

    cout<< "masukkan nilai matematika = ";
    cin>> niLM;
    cout<< "masukkan nilai bahasa inggris = ";
    cin>> niLB;
    //rerata = (niLM + niLB) / 2;
    //rata = rerata(niLM = niLB) ;
    //st = status(rata);
    //st = status(rerata(niLM, niLB));
    cout<< "status kelulusannya" << status(rerata(niLM, niLB)) << endl;
    cout<< "status kelulusannya 2 " << status2(rerata(niLM, niLB), niLM);
    }