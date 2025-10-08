#ifndef SENDER
#define SENDER

#include <vector>
#include "qubit.h"

class Sender {
    private:
        std::vector<int> bits_;
        std::vector<char> basis_;
        int key_length_;

    public:
        Sender(int key_length);
        ~Sender();
        std::vector<Qubit> GenerateBits();
        std::vector<int> GetBits() const;
        std::vector<char> GetBasis() const;
        
};

#endif