#include <iostream>


#define STACK_MAX_SIZE 10

class iStack {
public:
    iStack ();

    void push (int);

    void pop ();

    size_t size ();

    int top ();

    bool empty ();

private:
    int topIndex_;
    int frame_ptr[STACK_MAX_SIZE];
};

iStack::iStack () { topIndex_ = -1; }

void iStack::push (int number) {
    if (topIndex_ == STACK_MAX_SIZE - 1) {
        std::cout << "Push error : Stack Overflow!" << std::endl;
    } else {
        topIndex_++;
        frame_ptr[topIndex_] = number;
    }
}

void iStack::pop () {
    if (topIndex_ == -1) {
        std::cout << "Pop error : Stack is empty! " << std::endl;
    } else {
        topIndex_--;
    }
}

size_t iStack::size () { return static_cast<size_t>(topIndex_ + 1); }

//TODO: проверить на пустой стек и обработать ошибку по аналогии с функцией pop
int iStack::top () { return frame_ptr[topIndex_]; }

bool iStack::empty () { return topIndex_ == -1; }
