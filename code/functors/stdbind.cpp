#include <functional>
#include <stdio.h>

using namespace std;
using namespace std::placeholders;

int times(int a, int b) {
    return a*b;
}

main() {
    int a = 5;
    int b = 6;
    auto times7 = std::bind(times, _1, 7);
    printf("%i x %i = %i \n", a, b, times(a, b));
    printf("%i x 7 = %i \n", a, times7(a));
}
