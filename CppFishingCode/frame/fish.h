#pragma once
class fishConfig;
class fish
{
public:
	fish();
	fish(DemoApp * app, action * scene, colVec * colObj, sprite * img, float speed = 5);
	~fish();
	void setX(float x);
	void setY(float y);
	void frameFun();
	void moveForword();//��ǰ�ƶ�
	void(*removeScene)(fish * b);
	void changeType(string type);
	bool inScreen();
public:
	int moveTime = 1;
	int moveAllTime = 1;
	fishConfig * createClass;
	float speed = 0;
	int deathFrameTime = 30;//�������֡ʱ��
	int deathInt = 10;//�����������
	int getGold = 1; // ����������
	float minAngle =0;//��С�Ƕ�
	float maxAngle = 0;//���Ƕ�
	bool angleAdd = true;
	sprite * view;//��ͼ���־���
	vector<u_rect  > swim;//��Ӿ������Ϣ
	vector<u_rect  > death; //����������Ϣ
	DemoApp * app;
	action * scene;
	colVec * colObj;
	string type = "swim";
	sprite * scInfo;
};

