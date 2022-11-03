#include <iostream>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>
#define PI 3.14;
using namespace std;

struct Point
{
    double X,Y,R;

};

struct Circle
{
    double Area;
    Point P;

};

void printData(vector<Circle>& circle)
{
    for(int i=0;i<circle.size();i++)
    {
        
        cout<<"for "<<i+1<<"st circle area:"<<circle[i].Area<<"  radius:"<<circle[i].P.R<<" co-ordinates: ("<<circle[i].P.X<<","<<circle[i].P.Y<<")"<<endl;
    }
}

void calculateArea(Point& p,vector<double>& area)
{
    
    double A=3.14 * (p.R) * (p.R);
    area.push_back(A);
}

void createCircle(Point& p,int n)
{
    cout<<"Enter radius and co-ordinates for "<<n<<"st circle:";
    cout<<"Enter radius:";
    cin>>p.R;
    cout<<"Enter X:";
    cin>>p.X;
    cout<<"Enter Y:";
    cin>>p.Y;
}

bool comparator(const Circle& a,const Circle& b)
{
    return a.Area<b.Area;
}

int main()
{
    int N;
    cout<<"Enter number of circle:"<<endl;
    cin>>N;

    vector<Point>points;
    vector<double>area;
    for(int i=0;i<N;i++)
    {
        Point p;
        createCircle(p,i+1);
        points.push_back(p);
    }

    for(int i=0;i<points.size();i++)
    {
        calculateArea(points[i],area);
    }


    vector<Circle>C;

    for(int i=0;i<points.size();i++)
    {
        Circle c;
        c.Area=area[i];
        c.P=points[i];
        C.push_back(c);
    }

    sort(C.begin(),C.end(),&comparator);

    printData(C);


   
}