#include <iostream>
#include "MapDemo.h"
#include "VectorDemo.h"

//https://blog.csdn.net/shuzfan/article/details/53115922
//资料



void fun_map_demo()
{
    MapDemo map_demo;
    map_demo.demo_emplace();
    map_demo.demo_equal_range();
    map_demo.demo_erase();
    map_demo.demo_max_size();
}
void fun_vector_demo()
{
    VectorDemo vec_demo;
    vec_demo.demo_equal_range();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    fun_map_demo();
    fun_vector_demo();
    return 0;

}