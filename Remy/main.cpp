// 
//  main.cpp
//  Remy
//
//  Created by Race Vanderdecken on 1/5/18.
//  Copyright © 2018 The Untrained Brain Co. All rights reserved.
//

#include <iostream>
#include "node.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Node World!\n";
    
    //Location x,y;
    
    Node* p1 = new Node( 1 );
    Node* p2 = new Node( 2 );
    Node* p3 = new Node( 3 );
    Node* p4 = new Node( 4 );
    Node* p5 = new Node( 5 );
    Node* p6 = new Node( 6 );
    Node* p7 = new Node( 7 );

    p1->print();
    

    return 0;
}
