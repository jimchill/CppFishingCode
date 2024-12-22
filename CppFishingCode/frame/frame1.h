#pragma once
class action;
class DemoApp;
class colVec;
class bullet;
class fish;
class gold;
class files;
class fishConfig;
namespace frame1 {
	extern action * scene;//��ǰ�����ĳ�������
	extern DemoApp * app;//��Ϸapp
	extern colVec *colObj;//��ײ���� �ṩobb  aabb �����ײ�㷨 <obb ��������>

	extern float zoom;//�������о����õ�zoom
	extern int nowScane;//��ǰ����
	extern int nowPt;//��ǰ��̨����ʾ
	extern oMap<string, sprite *> bottom;//�ײ��������
	extern ticker * tk1; //������ʱ��
	extern float timerFish;//�����ж����Ƿ��γ���Ļ
	extern int usegold;
	extern files * saveObj;
	extern sprite * bk;

	extern vector<sprite *> jbNum;
	extern vector<sprite * > bgArr;//���й����ı��� 
	extern vector<sprite * > ptArr;//��̨Arr
	extern vector<sprite * > bulletArr;//�ӵ�Arr Img
	extern vector<bullet * > bulletArr2;//�ӵ�Arr
	extern vector<sprite * > bulletWang;//�ӵ�Arr Img
	extern vector <fish *> fishArr;//������
	extern vector <fishConfig *>fishConfigArr;//������Ķ�������
	extern vector <gold *> goldArr;
	extern bool isDown; //�ڴ������̧���¼�֮ǰ�Ƿ����л���̨��ť���水������� ����Ǿ�Ϊtrue����Ϊfalse
	extern DisplayObject * maxBox;//�������
	extern DisplayObject * bottomBox;//�ײ�����
	extern DisplayObject * fishBox; //��Ⱥ����
	extern sprite * addBtn;//�л���̨ ��
	extern sprite * subtractBtn;//�л���̨ ��
	extern  void drawGoldNum();
	extern void init(DemoApp ** app, colVec ** colObj);//������ʼ������
	extern void visible();//������ʾ����
	extern void onClick(int x, int y);//��������¼�
	extern void onClose();//��������¼�
	extern void onMouseDown(int x, int y);//������갴���¼�
	//extern void onMouseUp(int x, int y);//�������̧���¼�
	extern void onKeyUp(int x);//��������¼�
	extern void initPt();//��ʼ��̨
	extern void initPt2();//��ʼ����̨λ��
	extern sprite* initAmt1(LPWSTR url,int w,int h,int frame,float zoom=1);//��ʼ����֡����
	extern void initAmt2(sprite * v,int startY, int w, int h, int frame, float zoom);
	extern DWORD WINAPI tk1Fun();//��ʱ��ÿһ֡���ú���
	extern void tk1FunC(DemoApp ** app, ticker *tk);
	extern void mouseMove(int x,int y);//����ƶ���������
	extern void frameSpriteInfo(sprite ** sp, int type);
	extern void removeBullet(bullet * bt);//��й�ӵ�
	extern void removeFish(fish * b);//��й��
	extern void removeGold(gold * b);//��й���
	extern float allPower;
	extern float nowPower;
	extern HANDLE  hThred;
	extern 	fishConfig *  initFishConfig(LPWSTR url,int swimY,int w,int h ,int swimNum,int deathY,int deathNum,int getGold,int maxFish = 30,int deathInt=10);//��ʼ�����������
}