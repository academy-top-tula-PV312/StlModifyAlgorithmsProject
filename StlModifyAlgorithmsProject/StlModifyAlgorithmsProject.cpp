#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <algorithm>

auto Print = [](auto first, auto last)
    {
        std::for_each(first, last, [](auto item) { std::cout << item << " "; });
        std::cout << "\n";
    };

int main()
{
    std::vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::list<int> l1;

    //std::copy(v1.begin() + 2, v1.begin() + 8, l1.begin());
    //std::copy_backward(v1.begin() + 2, v1.begin() + 7, l1.end());
    //std::copy(v1.begin() + 2, v1.begin() + 8, std::back_inserter(l1));
    /*std::copy_if(v1.begin(), v1.end(), std::back_inserter(l1),
        [](auto item) { return !(item % 2); });*/
    //std::move(v1.begin() + 2, v1.begin() + 8, std::back_inserter(l1));
    //v1.push_back(10);

    std::swap_ranges(v1.begin(), v1.begin() + v1.size() / 2, v1.rbegin());

    Print(v1.begin(), v1.end());
    //Print(l1.begin(), l1.end());
}
