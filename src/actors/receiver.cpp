//simulate the receiver
#include "receiver.h"
#include<random>
#include<iostream>

Receiver::Receiver(int key_length):key_length_(key_length) {
    bases_.reverse(key_length_);
    measured_bits_.reverse(key_length_);
}


/**
 * @brief measure the received_qubits, the result should be stored in the class member measured_bits_
 * @param received_qubits the qubits you received
 */

void Receiver::meassure_qubits(std::vector<Qubit> &received_qubits) {
    std::cout << "please input bases" << std::endl;
    for(int i = 0;i < key_length_; i++){
        char base_;
        std::cin >> base_;
        bases_.push_back(base_);
        measured_bits_.push_back(QuantumUtils::measure_in_basis(received_qubits[i], bases_[i]));
        //std::cout << measured_bits_[i];
    }
    //std::cout << std::endl;
}

const std::vector<char>& Receiver::getBases() const {
    return bases_;
}

const std::vector<int>& Receiver::getMeasuredBits() const {
    return measured_bits_;
}
