#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <list>

using namespace std;

void display(const vector<int> &vec)
{
    cout << "[";
    for (auto const &i : vec)
    {
        cout << i << " ";
    }
    cout << "]" << endl;
}

void test1()
{
    cout << "\n=====================================" << endl;
    vector<int> nums1{1, 2, 3, 4, 5};
    auto it = nums1.begin();
    cout << *it << endl;

    it++;

    cout << *it << endl;
}

void test2()
{
    cout << "\n=====================================" << endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};

    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end())
    {
        std::cout << *it << std::endl;
        it++;
    }

    it = nums1.begin();
    while (it != nums1.end())
    {
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3()
{
    cout << "\n=====================================" << endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it1 = nums1.begin();

    while (it1 != nums1.end())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }

    it1 = nums1.begin();

    while (it1 != nums1.end())
    {
        // *it1 = 0;
        it1++;
    }
}

void test4()
{
    cout << "\n=====================================" << endl;
    std::vector<int> vec{1, 2, 3};
    auto it1 = vec.rbegin(); // reverse iterator over vector of ints starts at 4
    while (it1 != vec.rend())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }

    std::list<std::string> name{"Larry", "Moe", "Curly"};
    auto it2 = name.crbegin();
    std::cout << *it2 << std::endl;
}

// abc dddđjjdklàkl

int main()
{
    // test1();
    // test2();
    // test3();
    test4();
    return 0;
}