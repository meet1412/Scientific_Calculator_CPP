#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//function deceleration

void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();

//call funtion

int main(){

    cout << "\t\t\t\tWELCOME TO THE SCIENTIFIC CALCULATOR CREATED BY ALPHA!!\n\n";

    cout << "Press 1 for Addition: \n";
    cout << "Press 2 for Subtraction: \n";
    cout << "Press 3 for Multiplication: \n";
    cout << "Press 4 for Division: \n";
    cout << "Press 5 for Factorial: \n";
    cout << "Press 6 for Power: \n";
    cout << "Press 7 for Square: \n";
    cout << "Press 8 for Cube: \n";
    cout << "Press 9 for Squareroot: \n";
    cout << "Press 0 to exit calculator.\n";

    int choice;

    while (1){
        cout << "\nPlease enter the process which you want to process: ";
        cin >> choice;

        switch(choice){

               case 1:
                   addition();
                   break;
               case 2:
                   subtraction();
                   break;
               case 3:
                   multiplication();
                   break;
               case 4:
                   division();
                   break;
               case 5:
                   factorial();
                   break;
               case 6:
                   power();
                   break;
               case 7:
                   square();
                   break;
               case 8:
                   cube();
                   break;
               case 9:
                   squareroot();
                   break;
               case 0:
                   exit(0);
                   break;
               default:
                   cout << "~~~~~~~~~~~~~Wrong Number!Kindly re-enter you choice.~~~~~~~~~~~~~";
                   break;
  }
 }
}

//Function definition

void addition(){
    int a,b,c;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    c = a+b;
    cout << "Addition of A and B is: " << c << endl;
}

void subtraction(){
    int a,b,c;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    c = a-b;
    cout << "Subtraction of A and B is: " << c << endl;
}

void multiplication(){
    int a,b,c;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    c = a*b;
    cout << "Multiplication of A and B is: " << c << endl;
}

void division(){
    double a,b,c;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    c = (float)a/(float)b;
    cout << "Addition of A and B is: " << c << endl;
}

void factorial(){
    int n;
    int facto=1;
    cout << "Enter the number which you want factorial of = ";
    cin >> n;

    for (int i=1; i<=n; ++i){
        facto=facto*i;
    }
   cout << "Factorial of " << n << " is: " << facto << endl;
}

void power(){
    double base,expo,power;
    cout << "Enter Base = ";
    cin >> base;
    cout << "Enter Exponent = ";
    cin >> expo;
    power = pow(base,expo);
    cout << "Power of " << base << " is: " << power << endl;
}

void square(){
    double base,sq;
    cout << "Enter the number which you want square of: ";
    cin >> base;
    sq = pow(base,2);
    cout << "Square of " << base << " is: " << sq << endl;
}

void cube(){
    double base,cube;
    cout << "Enter the number which you want square of: ";
    cin >> base;
    cube = pow(base,3);
    cout << "Square of " << base << " is: " << cube << endl;
}

void squareroot(){
    double sr,formula;
    cout << "Enter the number: ";
    cin >> sr;
    formula = sqrt(sr);
    cout << "Squareroot of " << sr << " is: " << formula << endl << endl;
}
