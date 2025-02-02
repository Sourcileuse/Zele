#ifndef CHARAC_H
#define CHARAC_H
using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include <charconv>
#include <vector>
#include <sstream>


class Charac{
    private:
        int id;
        string name;
        int x;
        int y;
        int sp;
    public:
        Charac(int id, string datafile);
        friend ostream  & operator<<(ostream &out, const Charac &C);

};

string FindCharac(int id, string datafile);
vector<string> split_sentence(string sen);



#endif