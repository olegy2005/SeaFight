#pragma once
#include <memory>
#include <vector>
#include "Cell.h"

class Ship
{
	std::vector<std::shared_ptr<ShipPart>> ship;//вектор умных указателей на ShipPart
public:
	Ship(const std::vector<std::shared_ptr<ShipPart>>& ship)
		: ship{ ship }
	{}
	int size() const { return ship.size(); } //размер корабля
	bool isActive() const {
		for (const auto& part : ship) {
			if (part->isActive())//если нашли активную ячейку
				return true;
		}
		return false;
	}
};
