//
// Created by zgc on 11/13/18.
//

#ifndef GRPC_TEST_MAPDEMO_H
#define GRPC_TEST_MAPDEMO_H


class MapDemo {


public:
    virtual ~MapDemo();

public:
    MapDemo();
public:
    void demo_emplace();
    void demo_equal_range();
    void demo_erase();
    void demo_max_size();
};


#endif //GRPC_TEST_MAPDEMO_H
