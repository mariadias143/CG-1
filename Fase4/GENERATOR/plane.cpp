#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include "plane.h"


Shape* plane(float size){
    Shape *s = new Shape();

    float m = size/2;

    //1
    s->insertPoint(new Point(-m,0,m));
    s->insertNormal(new Point(0,1,0));
    
    s->insertPoint(new Point(m,0,m));
    s->insertNormal(new Point(0,1,0));
    
    s->insertPoint(new Point(m,0,-m));
    s->insertNormal(new Point(0,1,0));

    //2
    s->insertPoint(new Point(-m,0,m));
    s->insertNormal(new Point(0,1,0));
    
    s->insertPoint(new Point(m,0,-m));
    s->insertNormal(new Point(0,1,0));
    
    s->insertPoint(new Point(-m,0,-m));
    s->insertNormal(new Point(0,1,0));

    return s;
}


