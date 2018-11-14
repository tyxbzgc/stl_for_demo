//
// Created by zgc on 11/13/18.
//
#include <map>
#include <iostream>
#include "MapDemo.h"


MapDemo::MapDemo() {

}

MapDemo::~MapDemo() {

}

void MapDemo::demo_emplace()
{
    std::map<int,int> temp_map;
    temp_map.emplace(std::make_pair(1,11));
    temp_map.emplace(std::make_pair(3,13));
    temp_map.emplace(std::make_pair(2,12));

    for(auto& itor:temp_map)
    {
        std::cout << "map emplace:" << itor.first << " ," << itor.second << std::endl;
    }

}
/*
 * 1.equal_range, 返回一个键值对,分别代表了上限、下限 exp: std::pair<std::map<int,int>::iterator,std::map<int,int>::iterator> itor
 * 2.equal_range(k),中k值，代表了从stl容器中（默认当前容易的排序风格）key是统一的
 * */
void MapDemo::demo_equal_range()
{
    std::multimap<char,int> my_multimap;
    my_multimap.insert(std::make_pair('a',10));
    my_multimap.insert(std::make_pair('a',20));

    my_multimap.insert(std::make_pair('a',40));
    my_multimap.insert(std::make_pair('b',10));
    my_multimap.insert(std::make_pair('c',10));
    my_multimap.insert(std::make_pair('a',30));
    my_multimap.insert(std::make_pair('c',20));
    std::pair<std::multimap<char,int>::iterator,std::multimap<char,int>::iterator> ret;
    ret=my_multimap.equal_range('a');
    for(std::multimap<char,int>::iterator it=ret.first;it !=ret.second;it++){
        std::cout << it->first << " => " << it->second << '\n';
    }
}

void MapDemo::demo_erase() {
    std::map<char,int> mymap;
    std::map<char,int>::iterator itor;

    mymap['a'] = 10;
    mymap.insert(std::make_pair('b',20));
    mymap.insert(std::make_pair('c',30));
    mymap.insert(std::make_pair('d',40));
    mymap.insert(std::make_pair('e',50));
    mymap.insert(std::make_pair('f',60));
    mymap.insert(std::make_pair('g',70));

    auto finder = mymap.find('b');
    finder = mymap.erase(finder);
    if(finder != mymap.end())
    {
        std::cout << "fist:" << finder->first << " sen:" << finder->second << std::endl;
    }

    auto finder_first = mymap.find('c');
    auto finder_last = mymap.find('f');
    mymap.erase(finder_first, finder_last);  // 删除范围 [first, last）

    for(auto& itor : mymap)
    {
        std::cout << "first: " << itor.first << " second: " << itor.second << std::endl;
    }

}

void MapDemo::demo_max_size() {
    std::map<int,int> mymap;
    std::cout << "std::map<int,int> max_size is " << mymap.max_size() << std::endl;
}


