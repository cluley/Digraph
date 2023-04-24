#include "digraph.h"

int main(int argc, char** argv) {
	ifstream idxs("input.txt");

	if (!idxs.is_open()) {
		cout << "Файл input поврежден." << endl;
		return 1;
	}

	Graph graph(idxs);

	graph.output();

	return 0;
}