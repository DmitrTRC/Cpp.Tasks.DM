#include "task_stack.cpp"
#include <iostream>


int main () {
    iStack is;

    is.top();
    if (is.empty ())
        std::cout << "Empty! " << std::endl;
    is.push (5);
    is.push (10);
    std::cout << "Top element : " << is.top () << std::endl;
    std::cout << "Stack size : " << is.size () << std::endl;
    is.pop ();
    is.pop ();
    if (is.empty ())
        std::cout << "Empty! " << std::endl;
}
