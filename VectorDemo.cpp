//
// Created by zgc on 11/13/18.
//

#include "VectorDemo.h"
#include <vector>
#include <algorithm> //std::equal_range
#include <iostream>

/*1.首先，这个函数只能做用于已经排序的容器，经在下试验，必须按照从小到大进行排序
 * 2.如果没有当前指定元素，则迭代器 均会指向 下一个最近的元素位置（从小到大排序）
 * */
void VectorDemo::demo_equal_range() {
    std::vector<int> temp_vec;
   /* temp_vec.push_back(0);
    temp_vec.push_back(1);
    temp_vec.push_back(1);
    temp_vec.push_back(1);
    temp_vec.push_back(3);
    temp_vec.push_back(4);
    temp_vec.push_back(5);*/


#if 1  //无序的没有啥作用效果
    temp_vec.emplace_back(1);
    temp_vec.emplace_back(9);
    temp_vec.emplace_back(1);
    temp_vec.emplace_back(1);
    temp_vec.emplace_back(2);
    temp_vec.emplace_back(3);
    temp_vec.emplace_back(1);
    temp_vec.emplace_back(5);
#endif
    /*temp_vec.push_back(4);
    temp_vec.push_back(3);
    temp_vec.push_back(2);
    temp_vec.push_back(1);
    temp_vec.push_back(0);*/
    //std::pair<std::vector<int>::iterator, std::vector<int>::iterator> itor
    auto itor = std::equal_range(temp_vec.begin(), temp_vec.end(), 1);
    std::cout << "first:" << *(itor.first) << "sen:" << *(itor.second) << std::endl;
    for(auto it = itor.first; it != itor.second; ++it)
    {
        std::cout << "num:" << *(it) << std::endl;
    }

}

