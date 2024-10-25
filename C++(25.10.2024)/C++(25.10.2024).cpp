#include <iostream>
using namespace std;

class Rect
{
    int h;
    int w;
public:
    void input() {
        cout << "Input height: ";
        cin >> h;
        cout << "Input width: ";
        cin >> w;
    }
    void output() const {
        cout << "Height = " << h << ", Width = " << w << endl;
    }
};

int main() {
    Rect rect;
    rect.input();
    rect.output();
    return 0; 
}