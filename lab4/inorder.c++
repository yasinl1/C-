#include <iostream>

using namespace std;

int main(){

int p1, p2, p3, x, y, z;

cout<<"Enter a number : "; cin >>x;

cout<<"\nEnter another number : "; cin >>y;

cout<<"\nEnter another number : "; cin >>z;


if(x > y && x > z){

p1 = x;

}

else if(y > x && y > z){

p1 = y;

}

else if(z > x && z > y){

p1 = z;

}


if(x < y && x < z){

p3 = x;

}

else if(y < x && y < z){

p3 = y;

}

else if(z < x && z < y){

p3 = z;

}

if( p1 != x && p3!= x ){

p2 = x;

}

else if( p1 != y && p3!= y ){

p2 = y;

}

else if( p1 != z && p3!= z ){

p2 = z;

}

cout<<endl<<"Numbers in arrange : "<<p3<<" "<<p2<<" "<<p1<<endl;

return 0;

}