//provide the function for quantum
#include "qubit.h"


/**
 * @brief creat a new qubit with alpha and beta
 * @param alpha 
 * @param beta 
 * @return a new qubit
 */
Qubit::Qubit(std::complex<double> alpha, std::complex<double> beta) {
   state_.push_back(alpha);
   state_.push_back(beta);
}

/**
 * @brief make the alpha and beta normalized i.e. alpha ^ 2 + beta ^ 2 = 1
 */
void Qubit::normalize() {

}

/**
 * @brief measure the qubit and make the qubit collapse
 * @return the result of the measure,probability for 0 is alpha ^ 2, probability for 1 is beta ^ 2
 */
int Qubit::measure() {

}

/**
 * @brief set the state of the qubit
 * @param new_state the state you want the qubit to be
 */
 void Qubit::SetState(std::vector<std::complex<double>> &new_state) {

 }

 namespace QuantumUtils {
    /**
     * @brief encode the bit to an qubit
     * @param bit the message you want to send
     * @param basis the wa you want to encode, only '+' and 'x', remember to handle for exception  
     */
    Qubit encode_bit(int bit, char basis) {

    }
    /**
     * @brief measure the qubit in the way of the basis
     * @param qubit the qubit you want to measure
     * @param basis the way you want to measure
     * @return the result of the measure, only 0 or 1
     */
    int measure_in_basis(Qubit &qubit, char basis) {
        
    }
 }