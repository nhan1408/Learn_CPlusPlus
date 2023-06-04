#include <iostream>
#include <string>
#include <vector>

template <typename T, int N>
class Array
{
    int size{N};
    T value[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr)
    {
        os << "[ ";
        for (const auto &val : arr.value)
        {
            os << val << " ";
        }
        os << "]" << std::endl;
        return os;
    }

public:
    Array() = default;
    Array(T init_val)
    {
        for (auto &item : value)
        {
            item = init_val;
        }
    }
    void fill(T val)
    {
        for (auto &item : value)
        {
            item = val;
        }
    }
    int get_size() const
    {
        return size;
    }
    // Overloaded subscript operator for easy use
    T &operator[](int index)
    {
        return value[index];
    }
};

int main()
{
    Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<int, 10> nums2(1);
    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings(std::string{"Frank"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    return 0;
}