#ifndef SENDER
#define SENDER

#include <vector>
#include "qubit.h"

class Sender {
    private:
        std::vector<int> bits_;
        std::vector<char> bases_;
        int key_length_;

    public:
        Sender(int);
        ~Sender();
        std::vector<Qubit> GenerateBits();
        std::vector<int> &GetBits() const;
        std::vector<char> &GetBases() const;
        
};

#endif