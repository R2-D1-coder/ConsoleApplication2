#include <chrono>
#include <ctime>
#include <iostream>

int main()
{
    std::chrono::steady_clock::time_point start,now;
    start = std::chrono::high_resolution_clock::now();

    int temp = 0;//这行替换成你的算法
    for (int i = 0; i < 10000; i++)//这行替换成你的算法
        temp++;//这行替换成你的算法

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << '\n';
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << '\n';
    std::cout << start.time_since_epoch().count() << '\n';
    std::cout << end.time_since_epoch().count() << '\n';
    std::cout << end.time_since_epoch().count() - start.time_since_epoch().count() << '\n';
    now = start + std::chrono::nanoseconds(600);
     std::cout << now.time_since_epoch().count() << '\n';
}
