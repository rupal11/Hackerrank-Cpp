class Rectangle{
 public :
  int height;
  int width;
 
  void display()
  {
      cout<<width<<" "<<height;
  }
 };

 class RectangleArea: public Rectangle
 {
  public :
  void read_input()
  {
   cin>>width>>height;
   
  }
  void display()
  {
      cout<<"\n"<<height*width;
  }
 };


