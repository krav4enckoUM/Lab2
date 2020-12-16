#include <iostream>

double Var1 = 40'000'000'000.0f;

int main()
{
  using namespace std;
  
  cout << Var1 << endl;
  Var1 = Var1 + 1.0f;
  cout << Var1 << endl;  
 
  return 0;
}


