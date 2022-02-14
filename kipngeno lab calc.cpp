#include<iostream>
using namespace std;
class LAB
{
double l,w,tilearea;
int numberoftiles;
friend void compute();
};//end of class
void compute()
{
class LAB TILE;//object TILE in class LAB
TILE.tilearea=0.36;
cout<<"Enter the lab length in meters=";
cin>>TILE.l;
cout<<"Enter the lab width in meters=";
cin>>TILE.w;
TILE.numberoftiles=(TILE.l*TILE.w)/TILE.tilearea;
cout<<"Tiles needed="<<TILE.numberoftiles;
}
main()
{
compute();
}
