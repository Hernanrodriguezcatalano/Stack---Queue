#include<iostream>
#include<array>

const unsigned N=4;
struct Queue {
    std::array <int,N> a;
    unsigned front=0,rear=0, size_t=0;
};

void Enqueue (Queue&, int);
int Dequeue (Queue&);

int main() {
    Queue q;
    Enqueue (q,1);
    Enqueue (q,2);
    Enqueue (q,3);
    std::cout<< Dequeue(q) << "\n";
    Enqueue (q,4);
    Enqueue (q,5);
    std::cout<< "El tamaño de la pila es : " << q.size_t << "\n";
}

void Enqueue (Queue& q, int x){
    q.a.at(q.rear)=x;
    q.rear=(q.rear+1) % N;
    ++q.size_t;
}

int Dequeue (Queue& q){
    --q.size_t;
    q.front=(q.front+1) %N;
    return q.a.at(q.front-1);
}

