#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
namespace std
{
	void test_vector1()
	{
		vector<int> v1;
		vector<int> v2(10, 1);
		vector<int> v3(v2);
	}
	void test_vector2()
	{
		vector<int>v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		for (size_t i = 0; i < v1.size(); i++)
		{
			v1[i]++;
		}
		//ÏÂ±ê+[]
		for (size_t i = 0; i < v1.size(); i++)
		{
			cout << v1[i]<< " ";
		}
		cout << "\n";
		//µü´úÆ÷
		vector<int>::iterator it = v1.begin();
		while (it != v1.end())
		{
			cout << *it << ' ';
			it++;
		}
		cout << "\n";
		vector<int>::iterator pos = find(v1.begin(), v1.end(), 3);
		if (pos != v1.end())
		{
			v1.insert(pos, 30);
		}
		for (auto e : v1)
		{
			cout << e << ' ';
		}
		cout << "\n";
		pos = find(v1.begin(), v1.end(), 3);
		if (pos != v1.end())
		{
			v1.erase(pos);
		}
		for (auto e : v1)
		{
			cout << e << ' ';
		}
		cout << "\n";
		/*less<int>ls;
		greater<int>gt;
		sort(v1.begin(), v1.end(), gt);*/
		sort(v1.begin(), v1.end(), greater<int>());
		for (auto e : v1)
		{
			cout << e << ' ';
		}
		cout << "\n";
	}
	void TestVectorExpand()
	{
		size_t sz;
		vector<int> v;
		sz = v.capacity();
		cout << "making v grow:\n";
		for (int i = 0; i < 100; ++i)
		{
			v.push_back(i);
			if (sz != v.capacity())
			{
				sz = v.capacity();
				cout << "capacity changed: " << sz << '\n';
			}
		}
	}
	void test_vector3()
	{
		vector<int>v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		cout << v1.max_size() << endl;
		TestVectorExpand();
	}
}
int main()
{
	//std::test_vector2();
	std::test_vector2();
	//std::test_vector3();
	return 0;
}