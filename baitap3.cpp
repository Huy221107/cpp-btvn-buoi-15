#include <iostream>
using namespace std;
int main()
{
  int n, a = 1;
  cout << "nhap so nguyen duong n:";
  cin >> n;
  do
  {
    if (n >= a * a)
    {
      int binh = a * a;
      cout << binh << " ";
      a++;
    }
  } while (n > 0);
  cout << endl;
  return 0;
}