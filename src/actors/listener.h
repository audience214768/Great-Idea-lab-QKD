#ifndef LISTENER
#define LISTENER

#include <vector>
#include "qubit.h"

class Listener{
    private:
        int key_length_;
        std::vector<char> bases_;
        std::vector<int> intercepted_bits_;
    public:
    Listener(int);
    std::vector<Qubit> eavesdrop(std::vector<Qubit> &);
    std::vector<char> &GetBases() const;
    std::vector<int> &GetInterceptedBits() const;
};

#endif