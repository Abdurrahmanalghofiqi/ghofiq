#include<iostream>
using namespace std;

int main(){ // Begin
//Numeric bil
int bil;
//character status
string status;
//Display "masukkan bilangan = "
cout<< "masukkan bilangan = ";
//accept bil
cin>> bil;
//if (bil==0)
if (bil == 0)
//status = "noL"
status = "nol";
//else if (bil %2 == 0)
else if (bil %2 == 0)
//status = "genap"
status = "genap";
//else
else
//status = "ganjiL"
status = "ganjiL";
//display "bilangannya = " + status
cout<< "bilangannya = " << status;
}//end
