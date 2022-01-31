/* Submitted by:- Sidharth Jain
   Enrollment no. :- 0801CS201090
   Q2 */
#include<iostream>
using namespace std;
class Shape{
    public:
    void area();
};
class circle : public Shape{           //inherited class shape to circle
    public:
    int radius;
    circle(float r){    
        radius = r;
    }
    void area(){                      //method for calculating  area
       cout<<"Area of Circle :- "<<3.14*radius*radius<<endl;
    }
};
int main(){
    float r;
    cout<<"Enter Radius of Circle : ";
    cin>>r;
    circle a(r);
    a.area();
}