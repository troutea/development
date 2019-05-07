#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int x,int y);
        Point(const Point &p2);
        int getX();
        int getY();
        virtual ~Point();

    protected:

    private:
        int x,y;
};

#endif // POINT_H
