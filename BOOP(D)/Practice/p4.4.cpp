
#include<iostream>
#include<conio.h>
using namespace std;
string max(const string& a, const string& b, const string& c)
{
    if (a > b)
    {
		if(a>c){
        return a;
		}
		else{
			return c;
		}
    }
    else if (b>c )
{
        return b;
	}
	    else{	
        return c;
    }
}
float max(float &a,float &b,float &c)
{
	if(a>b)
	{
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c){
			return b;
		}
		else{
			return c;
		}
	}
}
int main()
{
	float x,y,z;
	cout<<"enter three number="<<endl;
	cin>>x>>y>>z;
	cout<<"max number is "<<max(x,y,z)<<endl;
		float x,y,z;
	cout<<"enter three number="<<endl;
	cin>>x>>y>>z;
	cout<<"max number is "<<max(x,y,z)<<endl;
	return 0;	
	return 0;	
}
