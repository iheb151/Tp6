#include "Sudoku.h"
#include<iostream>
int main() {
	std::array<std::array<int, 9>, 9> tab = {{
		{{5,3,0,0,7,0,0,0,0}},
		{{6,0,0,1,9,5,0,0,0}},
		{{0,9,8,0,0,0,0,6,0}},
		{{8,0,0,0,6,0,0,0,3}},
		{{4,0,0,8,0,3,0,0,1}},
		{{7,0,0,0,2,0,0,0,6}},
		{{0,6,0,0,0,0,2,8,0}},
		{{0,0,0,4,1,9,0,0,5}},
		{{0,0,0,0,8,0,0,7,9}}
	}};
	Sudoku s(tab , 1);
	std::cout << s;
	int c = s.getcomp();
	bool b = s.estvalide(5,0,2);
	bool k = s.estvalidecarre(3, 1, 1);
	return 0;
}