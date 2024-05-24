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
    srand(time(nullptr));

    std::vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::list<int> l1(10);

    std::vector<int> v2(10);


    std::generate(v2.begin(), v2.end(), []() { return rand() % 20; });

    //std::copy(v1.begin() + 2, v1.begin() + 8, l1.begin());
    //std::copy_backward(v1.begin() + 2, v1.begin() + 7, l1.end());
    //std::copy(v1.begin() + 2, v1.begin() + 8, std::back_inserter(l1));
    /*std::copy_if(v1.begin(), v1.end(), std::back_inserter(l1),
        [](auto item) { return !(item % 2); });*/
    //std::move(v1.begin() + 2, v1.begin() + 8, std::back_inserter(l1));
    //v1.push_back(10);

    //std::swap_ranges(v1.begin(), v1.begin() + v1.size() / 2, v1.rbegin());

    //std::transform(v1.begin(), v1.end(), std::back_inserter(l1) /*l1.begin()*/, [](auto item)
    //    {
    //        return item * 2;
    //    });

    Print(v2.begin(), v2.end());

    //std::replace(v2.begin(), v2.end(), 3, 33);
    /*std::replace_if(v2.begin(), v2.end(),
        [](auto item) {
            return !(item % 2);
        }, -1);*/

    //std::replace_copy(v1.begin(), v1.end(), l1.begin(), 3, 33);
    //std::fill(v1.begin(), v1.end(), 100);
    //std::fill_n(l1.begin(), 5, 200);

    //v1.erase(v1.begin() + 5);
    //auto it = std::remove_copy(v2.begin(), v2.end(), l1.begin(), 3);
    //v2.erase(it, v2.end());

    //std::sort(v2.begin(), v2.end());
    //auto it = std::unique(v2.begin(), v2.end());
    //v2.erase(it, v2.end());

    /*auto middle_it = v2.begin() + v2.size() / 2;
    std::cout << *middle_it << "\n";
    std::partial_sort(v2.begin(), middle_it, v2.end());*/

    //std::rotate(v2.begin(), v2.begin() + 3, v2.end());
    //std::rotate(v2.rbegin(), v2.rbegin() + 3, v2.rend());
    
    auto pair_it = std::equal_range(v2.begin(), v2.end(), 4);

    Print(pair_it.first, pair_it.second);

    std::sort(v2.begin(), v2.end());
    Print(v2.begin(), v2.end());

    //Print(l1.begin(), l1.end());

    //Print(l1.begin(), l1.end());
    //Print(l1.begin(), l1.end());
}
