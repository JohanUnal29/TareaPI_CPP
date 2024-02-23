#include <iostream>
#include <cmath>

double pi_aprox(int n);

int main(void){
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    for(int n = 0; n<=20; n++){
        double pi_aprox2 = pi_aprox(n);
        double diferenciaRelativa = abs((1-pi_aprox2/M_PI));
        std::cout << n << " | " << pi_aprox2 << " | " << diferenciaRelativa << "\n";
    }
    return 0;
}

double pi_aprox(int n){
    double sumatoria = 0.0;
    
    for(int k = 0; k<=n; k++){
        float kf = n;

        sumatoria += (1/std::pow(16,kf))*(4.0/(8.0*kf+1.0)-2.0/(8.0*kf+4.0)) - (1.0/(8.0*kf+5)) - (1.0/(8.0*kf+6.0));
        
        // sumatoria += 1/std::pow(16,kf) * (4.0/(8.0*kf+1.0) - 2.0/(8.0*kf+4.0) - 1.0/(8.0*kf+5.0) - 1.0/(8.0*kf+6.0));
    }
    return sumatoria;
}