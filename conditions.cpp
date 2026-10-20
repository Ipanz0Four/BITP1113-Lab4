#include <iostream> 
using namespace std; 

int main()
{
    int width = 1920, height = 1080;

    cout << (width > height) << endl;                  // line 1     
    cout << (width == 1920) << endl;                   // line 2     
    cout << (height != 1080) << endl;                  // line 3     
    cout << (width <= 1280) << endl;                   // line 4     
    cout << (width > 1000 && height > 1000) << endl;   // line 5     
    cout << (width > 1000 || height > 1000) << endl;   // line 6     
    cout << !(width > height) << endl;                 // line 7
return 0; 
}
