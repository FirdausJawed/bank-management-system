#include<bits/stdc++.h>
using namespace std;

class employee{
      public:
            string name;
            string company;
            int age;
      protected:
            string passward;
      public:
      void introduce()
      {
            cout << "name -> " << name<<endl;
            cout << "company -> " << company << endl;
            cout << "age -> " << age << endl;
      }
};

int main()
{
      employee x;
      x.name = "firdaus";
      x.company = "flipkart";
      x.age = 22;
      x.introduce();
      return 0;
}