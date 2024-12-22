#pragma once
class files
{
public:
	files();
	~files();
	void getFile(LPWSTR url);
	void close();
	void readFile();
	void  size();
	void  writeFile();
	void  empty();
public:
	HANDLE hFile;
	DWORD  len;
	DWORD len2;
	string s;
	int num;
	string s2;
	char  lp[2000];

};

