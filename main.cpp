#include <iostream>
#include <fstream>

using namespace std;

const int StarMax = 30;
typedef int StarMap [StarMax][StarMax];

class StarFind
{
private:
    StarMap map;
    StarMap stars;
    int stopx, stopy;
public:
    void clear()
    {
        for (int x = 0; x < StarMax; x++)
            for (int y = 0; y < StarMax; y++)
                stars[x][y] = 0;
    }
    void readin()
    {
        ifstream fin ("RawMap.txt");
        fin >> stopx >> stopy;
        for (int x = 0; x < stopx; x ++)
            for (int y = 0; y < stopy, y++)
                fout <
    }
    bool brighter (int x, int y, int value)
    {
        if (x < 0 || y < 0 || x >= StarMax || y >= StarMax)
            return true;
        else
            return (value >= map[x][y]+4);
    }
    bool isstar (int x, int y)
    {
        return (brighter(x-1, y-1, map[x][y]) &&

        )

    }
    void findstars()
    {
        ofstream fout ("Stars.txt");

        for (int x = 0; x < StarMax; x++)
        {
            for (int y =0; y < StarMax; y ++)
                if(isstar(x,y))
                    fout <<"*";
                else
                    fout << " ";
            fout << endl;


        }


    }
};



int main() {

    Starfind sf;

    sf.clear;
    sf.


    return 0;
}