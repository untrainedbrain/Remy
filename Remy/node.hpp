//
//  node.hpp
//  Remy
//
//  Created by Race Vanderdecken on 1/5/18.
//  Copyright © 2018 The Untrained Brain Co. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

class Base {
public:
    Base(){};
    ~Base(){};
};

class Node;
class Node : public set<Node>
{
private:
    int id = 0;
public:
    Node();
    Node( int X);
    
    ~Node(){};
    const void print(void);
    const void printChildren( void );
};
#endif /* node_hpp */
