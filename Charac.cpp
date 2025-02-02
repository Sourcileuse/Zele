#include "Charac.h"
using namespace std;



Charac::Charac(int id, string datafile){
    this->id = id;
    string line = FindCharac(id, datafile);
    vector<string> L = split_sentence(line);
    this->name = L[1];
    this->sp = stoi(L[2]);
    this->x = 0;
    this->y = 0;

}

string FindCharac(int id, string datafile){
    ifstream file(datafile);
    string line;
    int i = 0;
    if (file){
        getline(file, line);
        getline(file, line);
        while ( getline(file, line)){
            // cout << "line " << i << ": " << line << endl;
            char c =  line[0];
            string current_id;
            current_id = c;
            // cout << current_id << endl;
            if ((stoi(current_id)) == id){
                // cout << "yes " << line[0] << endl;
                return line;
            }
            i = i + 1;
        }
    }else{
        cout << "ERROR: cannot open file " << datafile << endl;
    }
    return 0;
}

ostream & operator<< (ostream &out, const Charac & C){
    out << "Character name: " << C.name << endl;
    out << endl;
    return out;
}

vector<string> split_sentence(string sen) {
  
    stringstream ss(sen);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    
    return words;
}