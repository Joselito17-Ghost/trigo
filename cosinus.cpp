#include <iostream>
//Ce program implimente la function mathematique 'Cosinus'
double puissance(double x, int n)
{
    double result = 1;
    for(int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int  factorielle(int n)
{
     float result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main()
{
    double x;
    double cosinus = 0;

    std::cout << "Entrez l'angle : " << std::endl;
    std::cin >> x;
    x*= 0.0175;
    cosinus = 1 - (puissance(x, 2) / factorielle(2)) + (puissance(x, 4) / factorielle(4)) + (puissance(x, 6) / factorielle(6)) + (puissance(x, 8) / factorielle(8)) + (puissance(x, 10) / factorielle(10));

    std::cout  << "Cosinus de " << x / 0.0175 << " "<<"="<<" "<< cosinus << std::endl;

    return 0;
}