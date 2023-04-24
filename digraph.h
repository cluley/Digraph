#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Graph {
public:
	Graph(ifstream& idxs);
	~Graph();
	void output();
private:
	int vrtcs = 0;
	int** mtx = nullptr;
};