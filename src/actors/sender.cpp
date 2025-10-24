//simulate sender
#include "sender.h"
#include<random>
#include<iostream>


Sender::Sender(int key_length):key_length_(key_length) {
    bases_.reverse(key_length_);
    bits_.reverse(key_length_);
}

/**
 * @brief generate qubits as the key
 * @return the key
 */
std::vector<Qubit> Sender::GenerateBits() {
    std::vector<Qubit> generated_qubit;
    std::cout << "please input bases" << std::endl;
    for(int i = 0;i < key_length_; i++){
        char base_;
        std::cin >> base_;
        bases_.push_back(base_);  
    }
    for(int i = 0;i < key_length_; i++){
        char bit_;
        std::cin >> bit_;
        bits_.push_back(bit_);  
        
        generated_qubit.push_back(QuantumUtils::encode_bit(bits_[i], bases_[i]));
    }
    return generated_qubit;
}

std::vector<int> &Sender::GetBits() const {
    return bits_;
}

std::vector<char> &Sender::GetBases() const {
    return bases_;
}