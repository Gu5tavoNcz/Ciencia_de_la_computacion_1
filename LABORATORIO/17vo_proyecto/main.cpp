#include <iostream>
#include <PointArray.h>
#include <Poligono.h>

using namespace std;

void printAttributes(Poligono *p){
    cout<<"p es area: "<<p->area()<<endl;
    PointArray*pa=p->getPoints();
    for(int i=0;i<pa->getSize();i++){
        cout<<"("<<pa->get(i)->getX()<<","<<pa->get(i)->getY()<<")";

    }
}

template < class T> class Stack ;
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2);
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i)
    {
        esult . items . push_back (s2. items [i]);
    }

    return result ;
}

template < class T>
class Stack
{
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
    public :
        bool empty () const { return items . empty () ;}
        void push ( const T & item ) { items . push_back ( item );}
        T pop ()
        {
            T last = items . back ();
            items . pop_back ();
            return last ;
        }
};

template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i)
    {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}

int main(){

    int x1,y1,x2,y2;
    cout<<"X1: ";
    cin>>x1;
    cout<<"Y1 :";
    cin>>y1;
    cout<<"X2: ";
    cin>>x2;
    cout<<"Y2 :";
    cin>>y2;

    Point p1(x1,y1),p2(x2,y2);
    Rectangle r(p1,p2);

    printAttributes(&r);
/*
    int i1,j1,i2,j2,i3,j3;
    cin>>i1>>j1>>i2>>j2>>i3>>j3;
    point t1(i1,j1),t2(i2,j2),t3(i3,j3);
    Triangle t(t1,t2,t3);
    printAttributes(&t);
*/
    return 0;
}
