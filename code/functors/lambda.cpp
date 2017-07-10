#include <iostream>

using namespace std;

int main()
{
    auto func = [] () { cout << "Hello world" << std::endl; };
    func(); // now call the function
}
