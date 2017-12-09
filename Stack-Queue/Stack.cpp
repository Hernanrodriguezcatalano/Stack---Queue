#include <iostream>
#include <array>


const unsigned N=800;
struct Stack {
    std::array <int,N> a;
    unsigned i=0;
};

void Push (Stack&, int);
int Pop (Stack&);

int main() {
    Stack s;
    Push (s,42);
    std::cout<< Pop(s);
}

void Push (Stack& s, int x){
    s.a.at(s.i)=x;
    ++s.i;
}

int Pop (Stack& s){
    --s.i;
    return s.a.at(s.i);
}
