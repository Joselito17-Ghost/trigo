#include <iostream>

double puissance(double x, int n) {
    double result = 1;
    for(int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

float factorielle(int n) {
    float result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double x;
    double sinus = 0;

    std::cout << "Entrez la valeur de x : ";
    std::cin >> x;
    x*=0.0175;

    sinus = x - (puissance(x, 3) / factorielle(3)) + (puissance(x, 5) / factorielle(5)) - (puissance(x, 7) / factorielle(7)) + (puissance(x, 9) / factorielle(9));

    std::cout << " sinus de " << x/0,0175 << " "<<"=" <<" "<< sinus << std::endl;

    return 0;
}
