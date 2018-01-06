//
//  node.cpp
//  Remy
//
//  Created by Race Vanderdecken on 1/5/18.
//  Copyright © 2018 The Untrained Brain Co. All rights reserved.
//

#include "node.hpp"

Node::Node( int X )
{
    id = X;
}

const void Node::print( void )
{
    cout <<  id << endl;
}
const void Node::printChildren( void )
{
    cout << "children of : " << id << endl;
    for ( set<Node>::iterator it = this->begin(); it != this->end(); ++it )
    {
        cout << " ";
    }
}
