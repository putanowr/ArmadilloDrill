#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char *argv[])
{
   // Initialize matrix for initializer list
   auto A = mat{{1.0,2.0,3.0},{4.0, 5.0,6.0},{7.0, 8.0, 9.0}};
   cout << A << endl;

   // Zero filled matrix and direct element
   // initialization 
   auto B = mat(3,3, fill::ones);
   B(1,1) = 10;
   cout << B << endl;

   // Elementwise multiplication
   auto C = A % B;


   auto b = vec{6.0, 60.0, 24.0};

   auto x = solve(C,b);

   cout << x << endl;

   return 0;
}
