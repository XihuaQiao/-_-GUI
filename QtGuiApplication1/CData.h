#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

class Data
{
public:
	vector<string> getDescripts()
	{
		return descripts;
	}

	void addDescripts(string des)
	{
		descripts.push_back(des);
	}

private:
	vector<string> descripts;
};