#include <iostream>
using namespace std;
void
rotate (int *arr, int rot, int n)
{
  rot = rot % n;
  for (int i = 1; i <= rot; i++)
    {
      int temp = arr[n - 1];
      for (int j = 0; j < n; j++)
	{
	  int t = arr[j];
	  arr[j] = temp;
	  temp = t;
	}
    }
}

int
main ()
{
  int n;
  cout << "Enter size : ";
  cin >> n;

  int *arr = new int[n];
  cout << "Enter " << n << " elements of array : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter how many times to rotate array : ";
  int rot;
  cin >> rot;

  cout << "Array before rotation : \n";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl << endl;
  rotate (arr, rot, n);
  cout << "Array after rotation : \n";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl << endl;
  return 0;
}
