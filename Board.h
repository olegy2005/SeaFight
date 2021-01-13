#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include "Cell.h"
#include "Ship.h"

class Board
{
	std::vector<std::vector<std::shared_ptr<Cell>>> cells;//������ �������� �� ����� ���������� �� ����� Cell
	std::vector<std::shared_ptr<Ship>> ships;//������ ����� ���������� �� Ship
public:
	Board(std::istream& in) {
		createBoard(in);
		if (!isBoardCorrect()) {
			throw std::invalid_argument("Board is not correct");
		}
		createShips();
	}
private:
	void createBoard(std::istream& in);//������� ������, ������� ������� �����
	bool isBoardCorrect() const;
	void createShips();
};

