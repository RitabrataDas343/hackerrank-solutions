#include <iostream>

using namespace std;

class Rectangle{
  public:
    int height, width;
    
    void display(){
        cout << height << " " << width << endl;
    }
};

class RectangleArea : public Rectangle{
    public: 
    int a, b;
    
    void read_input(){
        cin >> a >> b;
        height = a;
        width = b;
    }
    
    void display(){
        cout << height * width << endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}