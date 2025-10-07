#ifndef QUBIT
#define QUBIT

#include<complex>
#include<vector>

class Qubit {
    private:
        std::vector<std::complex<double>> state;
        void normalize();
    public:
        Qubit(std::complex<double>, std::complex<double>);
        int measure();
        void SetState(std::vector<std::complex<double>> &);
    

};

#endif