//simulate the receiver
#include "receiver.h"
#include<random>

Receiver::Receiver(int key_length):key_length_(key_length) {
    bases_.reverse(key_length_);
    measured_bits_.reverse(key_length_);
}


/**
 * @brief measure the received_qubits, the result should be stored in the class member measured_bits_
 * @param received_qubits the qubits you received
 */

void Receiver::meassure_qubits(std::vector<Qubit> &received_qubits) {

}

const std::vector<char>& Receiver::getBases() const {
    return bases_;
}

const std::vector<int>& Receiver::getMeasuredBits() const {
    return measured_bits_;
}
