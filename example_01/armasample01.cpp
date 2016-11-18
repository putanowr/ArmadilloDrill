#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char *argv[])
{
   // Initialize matrix for initializer list
   auto A = mat{{1.0,2.0},{3.0, 4.0}};
   cout << A << endl;

   // Zero filled matrix and direct element
   // initialization 
   auto B = mat(3,3, fill::zeros);
   B(1,1) = 99;
   cout << B << endl;
}
