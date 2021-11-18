#ifndef RUNNER_H
#define RUNNER_H

#include <iostream>
#include<list>
#include<vector>
#pragma once
#include "Storyboard.h"
#include "Storyboard.cpp"
#include "Node.h"
#include"Node.cpp"

class Runner:public Storyboard, public Node{

    public:
        Runner();
        void runApplication();

};
#endif