#pragma once
class gold
{
public:
	gold();
	~gold();
	gold(sprite * view);
	void frameFun();
	void getCenterPoint();
	void setX(float x);
	void setY(float y);
	float t;
//	void setFrameArr(vector<u_rect>  * arr);
public:
	int addNum;
	sprite * view;
	utils::usePoint endPoint;
	utils::usePoint centerPoint;
	utils::usePoint startPoint;
	int goldNum;
	void (*removeScren)(gold *);
};

