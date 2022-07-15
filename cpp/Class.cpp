#include <iostream>
#include <sstream>
using namespace std;

class Student{
    public:
    int a, s;
    string f, l;
    string a1, s1;
    void set_age(int age){
        a = age;
    }
    
    void set_standard(int standard){
        s = standard;
    }
    
    void set_first_name(string first_name){
        f = first_name;
    }
    
    
    void set_last_name(string last_name){
        l = last_name;
    }
    
    int get_age(){
        return a;
    }
    string get_first_name(){
        return f;
    }
    int get_standard(){
        return s;
    }
    string get_last_name(){
        return l;
    }
    
    string to_stringa(){
        a1 = to_string(a);
        s1 = to_string(s);
        return a1 + ',' + f + ',' + l + ',' + s1; 
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_stringa();
    
    return 0;
}
