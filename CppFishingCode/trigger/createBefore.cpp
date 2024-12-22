#include "../stdafx.h"
#include "createBefore.h"

#include "../frame/frame0.h"
#include "../frame/frame1.h"
#include "../frame/frame2.h"



DemoApp * l_app = NULL;
//������ʾ֮ǰ����
void createBefore::createWindowBefore(DemoApp * app) {
	vector <string> arr;
	//����
	arr.push_back("img/Interface/startbg.jpg");
	arr.push_back("img/Interface/1a.jpg");
	arr.push_back("img/Interface/1b.jpg");
	arr.push_back("img/Interface/1c.jpg");
	arr.push_back("img/Interface/1d.jpg");
	arr.push_back("img/Interface/1e.jpg");
	arr.push_back("img/Interface/1f.jpg");
	arr.push_back("img/Interface/login.png");
	arr.push_back("img/Interface/sign.png");
	//���
	arr.push_back("img/glod/coinAni1.png");
	arr.push_back("img/glod/coinAni2.png");
	arr.push_back("img/glod/coinText.png");

	//�ײ�
	arr.push_back("img/Interface/bottom-bar.png");
	arr.push_back("img/Interface/cannon_minus.png");
	arr.push_back("img/Interface/cannon_minus_down.png");
	arr.push_back("img/Interface/cannon_plus.png");
	arr.push_back("img/Interface/cannon_plus_down.png");
	arr.push_back("img/pwoerPd/pd.png");
	arr.push_back("img/pwoerPd/cl.png");
	arr.push_back("img/Interface/energy-bar.png");
	//��̨
	arr.push_back("img/bullet/cannon1.png");
	arr.push_back("img/bullet/cannon2.png");
	arr.push_back("img/bullet/cannon3.png");
	arr.push_back("img/bullet/cannon4.png");
	arr.push_back("img/bullet/cannon5.png");
	arr.push_back("img/bullet/cannon6.png");
	arr.push_back("img/bullet/cannon7.png");

	//�ӵ�
	arr.push_back("img/bullet/bullet1.png");
	arr.push_back("img/bullet/bullet2.png");
	arr.push_back("img/bullet/bullet3.png");
	arr.push_back("img/bullet/bullet4.png");
	arr.push_back("img/bullet/bullet5.png");
	arr.push_back("img/bullet/bullet6.png");
	arr.push_back("img/bullet/bullet7.png");

	arr.push_back("img/bullet/web1s.png");
	arr.push_back("img/bullet/web2s.png");
	arr.push_back("img/bullet/web3s.png");
	arr.push_back("img/bullet/web4s.png");
	arr.push_back("img/bullet/web5s.png");
	arr.push_back("img/bullet/web6s.png");
	arr.push_back("img/bullet/web7s.png");

	//��
	arr.push_back("img/fish/fish1.png");
	arr.push_back("img/fish/fish2.png");
	arr.push_back("img/fish/fish3.png");
	arr.push_back("img/fish/fish4.png");
	arr.push_back("img/fish/fish5.png");
	arr.push_back("img/fish/fish6.png");
	arr.push_back("img/fish/fish7.png");
	arr.push_back("img/fish/fish8.png");
	//������
	arr.push_back("img/fish/fish9.png");
	//���ڹ�
	arr.push_back("img/fish/fish10.png");
	//��ɫ������
	arr.push_back("img/fish/shark1.png");
	//�ƽ������
	arr.push_back("img/fish/shark2.png");
	//������
	arr.push_back("img/fish/fish11.png");
	//���ڹ�
	arr.push_back("img/fish/fish12.png");
	arr.push_back("img/Interface/back.png");
	app->getSource(arr);
}

//������ʾ֮�����
void createBefore::createWindow(DemoApp * app) {
	l_app = app;
	colVec * colObj = new colVec();
	frame0::init(app, colObj);
	app->addScene(frame0::scene);
	frame0::visible();

	frame1::init(&app, &colObj);
	app->addScene(frame1::scene);
	frame2::init(app, colObj);
	app->addScene(frame2::scene);
};
void messageMapping::onKeyDown(int code) {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onKeyDown.find(a) != -1) {
		l_app->use_onKeyDown[a](code);
	}
}
void messageMapping::onKeyUp(int code) {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onKeyUp.find(a) !=-1) {
		l_app->use_onKeyUp[a](code);
	}
}
void messageMapping::onClick(int x, int y) {
	string a = g_concat("frame",l_app->nowScene);
	if (l_app->use_onClick.find(a)!=-1) {
		l_app->use_onClick[a](x, y);
	}
}
void messageMapping::onMouseDown(int x, int y) {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onMouseDown.find(a) != -1) {
		l_app->use_onMouseDown[a](x, y);
	}
}
void messageMapping::onMouseUp(int x, int y) {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onMouseUp.find(a) != -1) {
		l_app->use_onMouseUp[a](x, y);
	}
}
void messageMapping::onMouseMove(int x, int y) {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onMouseMove.find(a) != -1) {
		l_app->use_onMouseMove[a](x, y);
	}
}
void messageMapping::onClose() {
	string a = g_concat("frame", l_app->nowScene);
	if (l_app->use_onClose.find(a) != -1) {
		l_app->use_onClose[a]();
	}
}