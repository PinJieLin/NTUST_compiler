#include <iostream>
#include <vector>

vector< vector<string> > symbol;
vector< vector<string> > fun;
int stIndex = -1;
void dump();
//建立新的scope
int getIndex(){
	return stIndex;
}
void create()
{
	stIndex++;
	vector<string> temp;
	temp.push_back("id");
	symbol.push_back(temp);
}
//刪除scope
void del()
{
	stIndex--;
	//cout<<"test1!!!!:"<<symbol.size()<<endl;
	symbol.resize(symbol.size()-1);
	//cout<<"test2!!!!:"<<symbol.size()<<endl;
}
//搜尋全部範圍的id(temp)是否存在
bool alllookup(string temp)
	{
		int i,j;
		for(i=0;i<symbol.size();i++)
		{
			for(j=1;j<symbol[i].size();j++)
			{
				if(symbol[i][j]==temp)
				{
					//cout<<temp<<" index:"<<i<<";"<<j<<endl;
					return true;
				}
			}
		}
		return false;

	}
//搜尋此scope的id(temp)是否存在
bool lookup(string temp)
{
	int i,j;
	for(j=1;j<symbol[stIndex].size();j++)
	{
		if(symbol[stIndex][j]==temp)
		{
			return true;
		}
	}
	//cout << temp << " index:" << "nil" << endl;
	return false;
}
//插入新id
int insert(string temp)
{
	
	int i,j;
	if(lookup(temp))
	{
		cout << temp << " failed" << endl;
		return 0;

	}
	else 
	{
		symbol[stIndex].push_back(temp);
		//dump();
		return symbol[stIndex].size()-1;
	}
}
//列出所有目前存在id
void dump()
{
	cout<<symbol.size();
	int i,j;
	for(i=0;i<symbol.size();i++)
	{
		cout << "---------------------" << endl;
		for(j=1;j<symbol[i].size();j++)
		{
			cout<<j<<":"<<symbol[i][j]<<endl;
		}
		cout << "---------------------" << endl;
	}
}