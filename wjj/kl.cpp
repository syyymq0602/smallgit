#include<iostream>
#include<string>
using namespace std;
namespace tidy
{
	struct dog
	{
		int age;
		string color;
		string name;
	};
	void showdog(dog &)
	{
		cout<<dog.name<<"is "<<dog.age<<"years old,it is "<<dog.color<<endl;
	}
}
void main()
{
	using namespace tidy;
	dog black;
	cout<<"Please iuput your dog's age:";
	cin>>black.age;
	cout<<"Please iuput your dog's name:";
	cin>>black.name;
	cout<<"Please iuput your dog's color:";
	cin>>black.color;
	showdog(black);
	system("pause");
}