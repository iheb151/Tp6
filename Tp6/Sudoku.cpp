#include "Sudoku.h"
#include <array>
#include <iostream>

Sudoku::Sudoku(std::array<std::array<int,9>, 9> tab,int comp) : tab(tab),comp(comp) {}
std::array<std::array<int, 9>, 9> Sudoku::getTab() const{
	return tab;
}
int Sudoku::getcomp() const {
	return comp;
}
bool Sudoku::estvalide(int a, int x, int y) {
	    for (int i = 0;i < 9; i++) {
			if (a == tab[x][i]) {
				return false;
			}		
		}
	    for (int j = 0;j < 9; j++) {
			if (a == tab[j][y]) {
				return false;
			}
		}
			return true;
	}
bool Sudoku::estvalidecarre(int a, int x, int y) {
	std::array<std::array<int, 9>, 9> tab;
	for (int i =x-1; i<x+1; i++){
		if (tab[i][y] != tab[i + 1][y]) {
			return false;
		}
		for (int j = y - 1; j < y + 1; j++) {
			if (tab[x][j] == tab[ x][j+1]) {
				return false;
			}
	}
			return true;

}
friend std::ostream& operator<<(std::ostream& os,const Sudoku& s) {
	os<<"la complexcite est :"<< s.getcom()<<std::endl;
	for (int i = 0;i < 9; i++) {
		for (int j = 0;j < 9; j++) {
			os<< "l'element des cordonee "<< i << j << " est " << tab[i][j]<<std::endl;

		}
	}
	
}
