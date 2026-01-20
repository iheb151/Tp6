#pragma once
#include <string>
#include <array>
class Sudoku {
	private:
		std::array<std::array<int, 9>, 9> tab ;
		int comp;
	public:
		Sudoku(std::array<std::array<int, 9>, 9> tab, int comp);
		std::array<std::array<int, 9>, 9> getTab() const;
		int getcomp() const;
		bool estvalide(int a, int x, int y);
		bool estvalidecarre(int a, int x, int y);
		friend std::ostream& operator<<(std::ostream& os, const Sudoku& s);
};

