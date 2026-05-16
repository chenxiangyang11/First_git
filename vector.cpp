#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;
    std::cout << v.front() << std::endl;
    std::cout << v.back() << std::endl;
    std::cout << v[0] << std::endl;
}