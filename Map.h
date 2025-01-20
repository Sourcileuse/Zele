#ifndef MAP_H
#define MAP_H
using namespace std;
#include <string>
#include <iostream>


class Map{
    private:
        string name;
        int h;
        int w;
    public:
        Map(string name, int w, int h);
        Map(int w, int h);
        friend ostream  & operator<<(ostream &out, const Map &C);
};



#endif