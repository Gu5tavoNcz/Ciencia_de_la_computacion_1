#include <iostream>
#include <PointArray.h>
#include <Poligono.h>
#include <vector>

using namespace std;

void printAttributes(Poligono *p){
    cout<<"p es area: "<<p->area()<<endl;
    PointArray*pa=p->getPoints();
    for(int i=0;i<pa->getSize();i++){
        cout<<"("<<pa->get(i)->getX()<<","<<pa->get(i)->getY()<<")";

    }
}

void aplicandoRectangulo()
{
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
}

void aplicandoTriangulo()
{
    int n1,m1,n2,m2,n3,m3;
    cout<<"N1: ";
    cin>>n1;
    cout<<"M1 :";
    cin>>m1;
    cout<<"N2: ";
    cin>>n2;
    cout<<"M2 :";
    cin>>m2;
    cout<<"N3 :";
    cin>>n3;
    cout<<"M3 :";
    cin>>m3;
    Point t1(n1,m1),t2(n2,m2),t3(n3,m3);
    Triangle t(t1,t2,t3);
    printAttributes(&t);
}

template < class T> class Stack ;

template < class T>
Stack <T> operator +( const Stack <T> &s1,const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1.items.size (); ++i)
    {
        result.items.push_back(s2. items [i]);
    }

    return result ;
}

template < class T>
class Stack
{
    friend Stack <T> operator +<>(const Stack <T> &s1,const Stack <T> &s2);

    friend ostream& operator <<(ostream &o, Stack<T> &s)
    {
        for (int i=0;i<s.items.size();i++)
            o<<s.items[i];
        return o;
    }

    vector <T> items ;
    public :
        bool empty () const { return items.empty () ;}
        void push ( const T & item ) { items.push_back(item);}
        T pop ()
        {
            T last=items.back();
            items.pop_back ();
            return last ;
        }

};
/*
template < class T>
Stack <T> operator +( const Stack <T> &s1,const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i=0;i<s1.items.size();++i)
    {
        result.items.push_back (s2.items[i]);
    }
    return result;
}
*/
int main(){

    Stack<int> p1;
    p1.push(2);
    p1.push(3);
    p1.push(6);
    p1.push(9);

    cout<<p1;

    return 0;
}
