#include <iostream>

double puissance(double x, int n) 
{
  double result = 1;
  for(int i = 0; i < n; i++)
   {
    result *= x;
  }
  return result;
}

float factorielle(int n)
 {
  float result = 1;
  for(int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

double tangente(double x, int precision) 
{
  double result = 0;
  for(int i = 0; i <= precision; i++) {
    double terme = puissance(x, 2*i+1) / factorielle(2*i+1);
    result += terme;
  }
  return result;
}

int main() 
{
  double x;
  int precision = 10; 
  // nombre de termes dans la série de Taylor
  std::cout << "Entrez la valeur de l'angle: ";
  std::cin >> x;
  x *= 0.0175;
  double tangenteValue = tangente(x, precision);
  std::cout <<"Tangente de "<<" "<< x/0.0175<<" "<<"="<<" "<< tangenteValue << std::endl;
  return 0;
}