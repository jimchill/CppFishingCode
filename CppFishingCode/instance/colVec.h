#pragma once
class colVec
{
public:
	colVec();//���캯��
	~colVec();//��������
	bool obb(sprite **sp, sprite **sp2);//���ģʽobb 
	bool obb(utils::useSpSt st1, utils::useSpSt st2);//���ģʽobb 
	bool  aabb(sprite **sp, sprite **sp2);//���ģʽaabb ������ģʽ
	void  getShapePoints(sprite **sp,const int num);//��ȡ��״�ĵ�
	void  initVec();//����ת��Ϊ��λ����
	void  getOneVec(const utils::usePoint &p1, const utils::usePoint &p2,int num);
	bool  getVecProjection();//��ȡ����ͶӰ
	bool  comparePoints(const int num);//�Աȵ����Ϣ�ж��Ƿ���ײ
	void  getSLCoordinateSystem(sprite **sp, const int num);//��ȡ�ֲ�����ϵ����Ϣδ��ת
	void  getShapePoints(const utils::useSpSt st, const int num);//�Խṹ����ʽ��ȡ����Ϣ ����Ԥ�ж�
	void  getSLCoordinateSystem(const utils::useSpSt st, const int num);//�Խṹ����ʽ��ȡ����ϢԤ�ж�
	void  polarCoordinates(const utils::usePoint &p,float angle,float distance,utils::usePoint &cp);//������λ��
	float  pointAngleInfo(const utils::usePoint point1, const utils::usePoint point2);//��ȡ����֮��ĽǶ�
	float  bezierCurve(float p0, float p1, float p2, float t); //����������
private:
	vector <utils::usePoint> vec;//���浥λ����
	vector <vector<utils::usePoint>> points;//������״�����Ϣ
	vector <utils::usePoint> proPoint;//ͶӰ����Ϣ����ĵ��Ǵ�������ֵ����Сֵ
private:
	void  clear(); //������е�Ļ���
};

