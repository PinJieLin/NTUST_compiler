#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
class type_check{
	public:
	vector<string> id;
	vector<string> type;
	vector<int> value;

	vector<string> localid;
	vector<string> localtype;
	vector<int> localvalue;

	type_check(){
		
	}
	int find_local_index(string tmp)
	{
		for(int i=0;i<localid.size();i++)
		{
			if(tmp==localid[i])
				return i;
		}
		return -1;
	}
	int find_global_index(string tmp)
	{
		for(int i=0;i<id.size();i++)
		{
			if(tmp==id[i])
				return i;
		}
		return -1;
	}
	void add(string idtmp,string typetmp,int valuetmp){
		
		id.push_back(idtmp);
		type.push_back(typetmp);
		value.push_back(valuetmp);
		// cout<<"get"<<endl;
		// cout<<"id:"<<id[id.size()-1]<<endl;
		// cout<<"type"<<type[type.size()-1]<<endl;
		// cout<<"value"<<value[value.size()-1]<<endl;
	}
	void deletlocal()
	{
		localid.clear();
		localtype.clear();
		localvalue.clear();
	}
	void printlocal()
	{
		for(int i=0;i<localid.size();i++)
		{
			cout<<"local id: "<<localid[i]<<endl;
			cout<<"local type: "<<localtype[i]<<endl;
			cout<<"local index: "<<localvalue[i]<<endl;
			cout<<endl;
		}
	}

	void addlocal(string idtmp,string typetmp,int valuetmp){
		
		localid.push_back(idtmp);
		localtype.push_back(typetmp);
		localvalue.push_back(valuetmp);
		
	}

	void resetValue(string idtmp,int valuetmp){
		for(int i=0;i<id.size();i++)
		{
			if(idtmp==id[i])
			{
				value[i]=valuetmp;
			}
		}
	}

	void printTc()
	{
		for(int i=0;i<id.size();i++)
		{
			cout<<"id: "<<id[i]<<endl;
			cout<<"type: "<<type[i]<<endl;
			cout<<"index: "<<value[i]<<endl;
			cout<<endl;
		}
	}
};