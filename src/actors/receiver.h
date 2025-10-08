#ifndef RECEIVER
#define RECEIVER

#include <vector>
#include "qubit.h"

class Receiver {
    private:
        int key_length_;
        std::vector<char> bases_;
        std::vector<int> measured_bits_;
    public:
        Receiver(int);
        void measure_qubits(std::vector<Qubit> &);
        std::vector<char> &GetBases() const;
        std::Vector<int> &GetMeasuredBits() const
};

#endif
