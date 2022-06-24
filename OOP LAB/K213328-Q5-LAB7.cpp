#include<iostream>
using namespace std;

class shapedetails{
	private:
		float area;
		float parameter;
	public:
	shapedetails()
	{
		}
			
};
class square : public shapedetails
{
	float sidelength;
	public:
		square():sidelength(4.0)
		{
		}
		float calculateparameter()
		{
			float ps;
			ps=4*sidelength;
			return ps;
		}
		float calculatearea()
		{
			float as;
			as=(sidelength*sidelength);
			return as;
		}

};
class circle : public shapedetails{
	float radiuslength;
	public:
	circle():radiuslength(5.0){
	}
		float calculateparameter()
		{
			float pc;
			const float pi =3.14;
			pc=(2*pi*radiuslength);
			return pc;
		}
		float calculatearea()
		{
			float ac;
			const float pi =3.14;
			ac=(pi*radiuslength*radiuslength);
			return ac;
		}

};
int main()
{
	shapedetails s1,s2;
	square s;
	circle c;

   cout<<"The area of Circle is:"<<c.calculatearea()<<endl;
   cout<<"The Parameter of Circle is:"<<c.calculateparameter()<<endl;
   cout<<"The area of Square is:"<<s.calculatearea()<<endl;
   cout<<"The Parameter of Parameter is:"<<s.calculateparameter()<<endl;
		
}
