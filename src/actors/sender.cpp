//simulate sender
#include "sender.h"
#include<random>


Sender::Sender(int key_length):key_length_(key_length) {
    bases_.reverse(key_length_);
    bits_.reverse(key_length_);
}

/**
 * @brief generate qubits as the key
 * @return the key
 */
std::vector<Qubit> Sender::GenerateBits() {

}

std::vector<int> &Sender::GetBits() const {
    return bits_;
}

std::vector<char> &Sender::GetBases() const {
    return bases_;
}