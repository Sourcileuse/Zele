#include "Map.h"
using namespace std;


Map::Map(string name, int w, int h){
    this->name = name;
    this->w = w;
    this->h = h;
}

Map::Map(int w, int h){
    this->name = "default_Map";
    this->w = w;
    this->h = h;
}

ostream & operator<< (ostream &out, const Map &M){
    out << "Map name: " << M.name << endl;
    out << "Map shape: (" << M.w << "," << M.h << ")" << endl; 
    out << endl;
    return out;
}