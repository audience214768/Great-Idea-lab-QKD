//simulate sender
#include "sender.h"



Sender::Sender(int key_length):key_length_(key_length) {}

/**
 * @brief generate qubits as the key
 * @return the key
 */
std::vector<Qubit> Sender::GenerateBits() {

}

std::vector<int> Sender::GetBits() const {
    return bits_;
}

std::vector<char> Sender::GetBasis() const {
    return basis_;
}