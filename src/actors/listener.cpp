//simulate the listener,where define the class Listener
#include "listener.h"

Listener::Listener(int key_length):key_length_(key_length) {
    bases_.reverse(key_length_);
    intercepted_bits_.reverse(key_length_);
}

/**
 * @brief measure the qubits and resend the qubits
 * @param original_qubits the intercepted qubits
 * @return the qubits to resend
 */
std::vector<Qubit> Listener::eavesdrop(std::vector<Qubit> &original_qubits) {

}

const std::vector<char>& Listener::GetBases() const {
    return bases_;
}

const std::vector<int>& Listener::GetInterceptedBits() const {
    return intercepted_bits_;
}
