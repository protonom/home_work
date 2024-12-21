
#include <iostream>

void S_taingle(int a, int h) 
{
    std::cout << "S=" << (a * h) / 2 << "\n";
}
void circle_S(double r) {
    std::cout << "S=" << 3.14 * (r*r);
}
int main()
{
    int a = 5, h = 4;
    double r = 15.23;
    S_taingle(a, h);
    circle_S(r);
}
