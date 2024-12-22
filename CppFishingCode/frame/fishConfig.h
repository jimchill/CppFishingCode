#pragma once
class fish;
class fishConfig
{
public:
	fishConfig();
	fishConfig(DemoApp * app, action * scene, colVec * colObj,sprite * img, void(*removeScene)(fish * b));//���캯��
	~fishConfig();//��������
	void setFishFrame(fish * fs, int startY, int w, int h, int num, int type, float zoom = 1);//�������֡��Ϣ
	void createFish(vector<fish *> * fishArr, DisplayObject *ds);//������
	void frameFun(vector<fish *> * fishArr, DisplayObject *ds);//ÿһ֡fishConfigӦ�����Ĳ���
	void setType(fish* l_fs, int type,int setType);//�����ȡһ������ֵ����Ͳ�������ؽ���
	void(*removeScene)(fish * b);//�Ƴ���������еĲ���
public:
	int createNum = 4;//һ�δ����������������
	int getGold = 2;//������������ʱ�򴴽��Ľ��
	int createTimmerInt = 0;//����ʱ�����
	int startYSwim = 0;//��������Ӿ��ʼ֡��λ��
	int startYDeath= 0;//������������ʼ֡��λ��
	int swimNum = 0;//��������Ӿ��֡��
	int deathNum = 0;//������������֡��
	vector<fish * > fishConfigArr;//���洴�����������
	int maxFish = 30; //�������͵��㴴�����������
	int fishW = 0;//�������͵���Ŀ��
	int fishH = 0;//�������͵���ĸ߶�
	int deathInt = 10;//��������������� Խ��Խ�������� ���ܴ���100
	float speed = 2;//��������ٶ�
	float zoom=1;//�������͵��������
private:
	sprite * img;//����ͼƬ�ľ���
	int createTimmer = 30;//����ʱ����
	int createAllTimmer = 30;//������ʱ��
	DemoApp * app;//��Ϸapp����
	action * scene;//��������
	colVec * colObj;//��ײ����
	vector <vector<int>> type1;//������ĽǶ���Ϣ
};

