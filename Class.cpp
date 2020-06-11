#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
 private:
  int age;
  int st;
  string fname;
  string lname;

  public:
  int get_age() { return age; };
  int get_standard() {return st;} ;
  string get_first_name() {return fname; };
  string get_last_name() {return lname; };
  string  to_string();

  void set_age(int);
  void set_standard(int);
  void set_last_name(string);
  void set_first_name(string);
};

void Student :: set_age(int a)
{
    age=a;
}
void Student :: set_standard(int a)
{
    st=a;
}
void Student :: set_last_name(string a)
{
    lname=a;
}
void Student :: set_first_name(string a)
{
    fname=a;
}

string Student::to_string()
{
 string s;
 s=std::to_string(get_age())+ "," + fname +","+lname+","+std::to_string(st);
 return s;
}

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
    cout << st.to_string();
    
    return 0;
}
