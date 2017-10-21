#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double a, b, c, x;
  cout << "Input a:";
    cin >> a;
  cout << "Input b:";
    cin >> b;
  cout << "Input c:";
    cin >> c;
 if( a == 0.0 )
 {
  cout << "The equation is linen" << endl;
 }
 else
 {
     if ((b*b - 4 * a * c) >= 0)
     {
       x = (-1 * b + sqrt((b*b) - 4 * a * c)) / (2 * a);
      cout << "First " << x << endl;
      x = (-1 * b - sqrt((b*b) - 4 * a * c)) / (2 * a);
     cout << "Second " << x << endl;
     }
    else
    {
      cout << "No solutions" << endl;
    }
 }
return 0;
}
