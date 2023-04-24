#include "digraph.h"

Graph::Graph(ifstream& idxs) {
	idxs >> vrtcs;
	mtx = new int* [vrtcs]();

	for (int i = 0; i < vrtcs; i++) {
		mtx[i] = new int[vrtcs]();
	}

	for (int i = 0; i < vrtcs; ++i) {
		for (int j = 0; j < vrtcs; ++j) {
			idxs >> mtx[i][j];
		}
	}
}

Graph::~Graph() {
	for (int i = 0; i < vrtcs; ++i) {
		delete[] mtx[i];
	}

	delete[] mtx;
	mtx = nullptr;
}

void Graph::output() {
	cout << "Текстовый вид орграфа:";

	for (int i = 0; i < vrtcs; ++i) {
		cout << '\n' << i + 1 << ": ";
		bool is_arc(false);
		for (int j = 0; j < vrtcs; ++j) {
			if (mtx[i][j]) {
				is_arc = true;
				cout << j + 1 << ' ';
			}
		}
		if (!is_arc) {
			cout << "нет";
		}
	}
}