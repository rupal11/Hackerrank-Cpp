class Student{
private : 
float scores[5];

public :
void input();
float calculateTotalScore();
};

void Student::input()
{
    for(int i=0;i<5;++i)
     cin>>scores[i];
}

float Student ::calculateTotalScore()
{
  float sum=0;
  for(int i=0;i<5;++i)
  {
    sum =sum + scores[i];
  }
      return sum;

}
