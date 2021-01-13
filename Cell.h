#pragma once

class Cell //базовый класс дл€ всех €чеек
{
	bool active = true; //ранит признак активности €чеек
	char symbol; //символ, с помощью которого €чейка отрисована
public:
	Cell(char c) :symbol{ c }
	{

	}

	virtual bool isActive() const { return active; }
	virtual char getSymbol() const { return symbol; }
	virtual void hit() { active = false; }
};