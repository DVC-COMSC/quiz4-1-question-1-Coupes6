#include <iomanip>

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	double width, height, radius;
	double area;

	cout << "Geometry Calculator\n";
	cout << "\t1. Calculate the Area of Circle\n";
	cout << "\t2. Calculate the Area of Rectangle\n";
	cout << "\t3. Calculate the Area of Triangle\n";
	cout << "\t4. Quit\n\n";
	cout << "Enter your number (1-4): ";
	cin >> number;

  if((number < 0) || ((number >= 5)) {

cout << "UNKNOWN INPUT\n";
  }
  
    double rad, pi = 3.14159;
    double L, W;
    double B,H;
  switch (number) {
    case 1:
    cout<< "Enter Radius Of Circle:";
    cin >> radius;
      if (radius < 0)
      cout << "UNKNOWN INPUT\n";
          else
     area = pi * pow(radius, 2);
    cout << setprecision(2)<< fixed;
    cout <<"AREA:" << area << endl;

    case 2:
    cout << "Enter Length and Width of Rectangle";
     cin>> L >> W ;
    area = L* W;
          if (area > 0)
    cout << "AREA:" << area << endl;
         else
           cout << "INVALID

    
  }
        
  
  
  
  
  cout << area << endl;
}
