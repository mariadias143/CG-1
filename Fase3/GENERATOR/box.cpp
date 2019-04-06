#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <cstdio>
#include "box.h"
#include "../src/Shape.h"


Shape* box(float length, float height, float width, int divisions){
    float l;
    float h;
    float w;
    Shape *r = new Shape();

    l = length/divisions;
    h = height/divisions;
    w = width/divisions;

    for(int i = 0; i < divisions; i++){
        for(int j = 0; j < divisions; j++){
            for(int k = 0; k < divisions; k++) {
                //FRONT
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - j*h,width/2));
                r->insertPoint(new Point(-length/2 + i*l,height/2 - j*h,width/2));
                r->insertPoint(new Point(-length/2 + i*l,height/2 - (j+1)*h,width/2));

                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - (j+1)*h,width/2));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - j*h,width/2));
                r->insertPoint(new Point(-length/2 + i*l,height/2 - (j+1)*h,width/2));

                //BACK
                r->insertPoint(new Point(-length/2 + i*l,height/2 - (j+1)*h,-width/2));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - j*h,-width/2));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - (j+1)*h,-width/2));

                r->insertPoint(new Point(-length/2 + i*l,height/2 - (j+1)*h,-width/2));
                r->insertPoint(new Point(-length/2 + i*l,height/2 - j*h,-width/2));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2 - j*h,-width/2));

                //TOP
                r->insertPoint(new Point(-length/2 + i*l,height/2,-width/2 + (k+1)*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2,-width/2 + (k+1)*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2,-width/2 + k*w));

                r->insertPoint(new Point(-length/2 + i*l,height/2,-width/2 + (k+1)*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,height/2,-width/2 + k*w));
                r->insertPoint(new Point(-length/2 + i*l,height/2,-width/2 + k*w));

                //BASE
                r->insertPoint(new Point(-length/2 + i*l,-height/2,-width/2 + (k+1)*w));
                r->insertPoint(new Point(-length/2 + i*l,-height/2,-width/2 + k*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,-height/2,-width/2 + k*w));

                r->insertPoint(new Point(-length/2 + i*l,-height/2,-width/2 + (k+1)*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,-height/2,-width/2 + k*w));
                r->insertPoint(new Point(-length/2 + (i+1)*l,-height/2,-width/2 + (k+1)*w));

                //RIGHT
                r->insertPoint(new Point(length/2,height/2 - (j+1)*h,width/2 - k*w));
                r->insertPoint(new Point(length/2,height/2 - (j+1)*h,width/2 - (k+1)*w));
                r->insertPoint(new Point(length/2,height/2 - j*h,width/2 - (k+1)*w));

                r->insertPoint(new Point(length/2,height/2 - (j+1)*h,width/2 - k*w));
                r->insertPoint(new Point(length/2,height/2 - j*h,width/2 - (k+1)*w));
                r->insertPoint(new Point(length/2,height/2 - j*h,width/2 - k*w));

                //LEFT
                r->insertPoint(new Point(-length/2,height/2 - (j+1)*h,width/2 - k*w));
                r->insertPoint(new Point(-length/2,height/2 - j*h,width/2 - k*w));
                r->insertPoint(new Point(-length/2,height/2 - j*h,width/2 - (k+1)*w));

                r->insertPoint(new Point(-length/2,height/2 - (j+1)*h,width/2 - k*w));
                r->insertPoint(new Point(-length/2,height/2 - j*h,width/2 - (k+1)*w));
                r->insertPoint(new Point(-length/2,height/2 - (j+1)*h,width/2 - (k+1)*w));
            }
        }
    }

    return r;
}

