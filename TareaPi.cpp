#include <iostream>
#include <cmath>

double pi_aprox(int n);

int main(void){
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    for(int n = 1; n<=20; n++){
        double pi_aprox2 = pi_aprox(n);
        double diferenciaRelativa = abs((1-pi_aprox2/M_PI));
        std::cout << n << " | " << pi_aprox2 << " | " << diferenciaRelativa << "\n";
    }
    return 0;
}

double pi_aprox(int n) {
    double sumatoria = 0.0;      

    for(double k = 0.0; k <= n; k++){

        sumatoria += ((1/std::pow(16, k))*((4/(8*k + 1))-(2/(8*k + 4))-(1/(8*k + 5))-(1/(8*k + 6))));
    
    }
    return sumatoria;
}