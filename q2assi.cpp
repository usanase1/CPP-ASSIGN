#include<iostream>
using namespace std;
int main()
{
char option;
while(option!='x')
{
	cout<<"please select the type of mushroom"<<endl;
	cout<<"pores--->cepe bordeaux"<<endl;
	cout<<"meadows--->agaric jaunissant and coprin chevelu"<<endl;
	cout<<"convex-cup--->agaric jaunissant,amanite tue-mouche and pied blue"<<endl;
	cout<<"ring--->agaric jaunissant,amanite tue-mouche and coprin chevelu"<<endl;
	option=getchar();
	cout<<endl;
	cin>>option;
	cout<<endl;

	switch(option)
	{
		case'pores':
		cout<<"cepe bordeux is the only mushrom to have pores"<<endl;
		cout<<"others have gills"<<endl;
		break;
		case'meadows':
		cout<<"both coprin chevelu and agaris jaunissant grow in meadows"<<endl;
		cout<<"others grow in forest"<<endl;
		break;
		case'convexcup':
		cout<<"the only mushrooms to have convex cup are agaric jaunissant,amanite tue-nouche and pied blue"<<endl;
		break;
		case'ring':
		cout<<"the only mushrooms to have a ring are agaric jaunissant,amanite tue-mouche and coprin chevelu "<<endl;
		break;
		case'x':
		return 0;
		default:
		continue;

	}
}
return 0;
}

