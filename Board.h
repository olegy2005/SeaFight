#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include "Cell.h"
#include "Ship.h"

class Board
{
	std::vector<std::vector<std::shared_ptr<Cell>>> cells;//вектор векторов из умных указателей на класс Cell
	std::vector<std::shared_ptr<Ship>> ships;//вектор умных указателей на Ship
public:
	Board(std::istream& in) {
		createBoard(in);
		if (!isBoardCorrect()) {
			throw std::invalid_argument("Board is not correct");
		}
		createShips();
	}
private:
	void createBoard(std::istream& in);//создает ячейки, которые создают доску
	bool isBoardCorrect() const;
	void createShips();
};

