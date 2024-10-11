#pragma once
#include <iostream>
#include <string>


using namespace std;

class V2 {
protected :
	float x;
	float y;
public :
	V2() : x(0.0f), y(0.0f) {};
	V2(float _x, float _y) : x(_x), y(_y){}

	float GetX() const {
		return x;
	}

	float GetY() const {
		return y;
	}

	void SetX(float _x) {
		x = _x;
	}
	void SetX(string _xStr) {
		x = stof(_xStr);
	}


	void SetY(float _y) {
		y = _y;
	}
	void SetY(string _yStr) {
		y = stof(_yStr);
	}

	V2 operator+(const V2& _right) const {
		return V2(x + _right.x, y + _right.y);
	}

};