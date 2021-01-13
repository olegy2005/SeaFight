#pragma once

class Cell //������� ����� ��� ���� �����
{
	bool active = true; //����� ������� ���������� �����
	char symbol; //������, � ������� �������� ������ ����������
public:
	Cell(char c) :symbol{ c }
	{

	}

	virtual bool isActive() const { return active; }
	virtual char getSymbol() const { return symbol; }
	virtual void hit() { active = false; }
};