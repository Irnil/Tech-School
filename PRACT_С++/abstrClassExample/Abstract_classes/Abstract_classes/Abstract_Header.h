#pragma once

class Body
{
protected:
	double sqSurf = 0.0;
	double sqVol = 0.0;

public:
	virtual void setData() = 0;
	virtual void getData() = 0;
	virtual void squareSurface() = 0;
	virtual void squareVolume() = 0;
};

class Parallelepiped : public Body
{
private:
	double side_a, side_b, side_c;

public:
	Parallelepiped(double, double, double);
	void setData() override;
	void getData() override;
	void squareSurface() override;
	void squareVolume() override;
};

class Ball : public Body
{
private:
	const double Pi = 3.14;
	double Radius = 0.0;

public:
	Ball(double);
	void setData() override;
	void getData() override;
	void squareSurface() override;
	void squareVolume() override;
};

class Error {};

void print(Body &D);