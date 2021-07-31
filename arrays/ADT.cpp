#include <bits/stdc++.h>
using namespace std;

int n;

template <class T>
class Array
{
  T *p;
  int length = 0;

public:
  Array()
  {
    p = new T[n];
  }

  Array(int size)
  {
    p = new T[size];
  }

  ~Array()
  {
    delete[] p;
    p = NULL;
  }

  int Length() { return length; }

  void Display()
  {
    for (int i = 0; i < length; i++)
      cout << p[i] << " ";
    cout << endl;
  }

  void Append(T x)
  {
    if (length >= n)
    {
      cout << "Exceeded Size" << endl;
      return;
    }
    p[length] = x;
    length++;
  }

  void Insert(T x, int pos)

  {
    // cout << length << endl;
    if (length == n)
    {
      cout << "Exceeded Size" << endl;
      return;
    }
    if (pos < 0 || length < pos)
    {
      cout << "Wrong Position" << endl;
      return;
    }
    int i = length;
    while (i > pos)
    {
      p[i] = p[i - 1];
      i--;
    }
    p[pos] = x;
    length++;
  }

  void Delete(int pos)
  {

    if (pos > length || pos < 0)
    {
      cout << "Wrong Position" << endl;
      return;
    }
    int i = pos;
    while (i < length - 1)
    {
      p[i] = p[i + 1];
      i++;
    }
    length--;
  }

  void Sort(bool rev = false)
  {
    for (int i = 0; i < length; i++)
      for (int j = 0; j < length; j++)
      {
        if (!rev and p[i] < p[j])
        {
          T temp = p[i];
          p[i] = p[j];
          p[j] = temp;
        }
        else if (rev and p[i] > p[j])
        {
          T temp = p[i];
          p[i] = p[j];
          p[j] = temp;
        }
      }
  }

  int Linear_IndexOf(T key)
  {
    for (int i = 0; i < length; i++)
      if (p[i] == key)
        return i;
    return -1;
  }

  int Binary_IndexOf(T key)
  {

    Sort();

    int l = 0, h = length - 1, mid;
    while (l <= h)
    {
      mid = floor((l + h) / 2);
      if (key == p[mid])
        return mid;
      else if (key < p[mid])
        h = mid - 1;
      else
        l = mid + 1;
    }
    return -1;
  }

  int Binary_RIndexOf(T key)
  {
    Sort();
    static int l = 0, h = length - 1, mid;
    if (l <= h)
    {
      mid = (l + h) / 2;
      if (p[mid] == key)
        return mid;
      else if (key < p[mid])
      {
        h = mid - 1;
        return Binary_RIndexOf(key);
      }
      else
      {
        l = mid + 1;
        return Binary_RIndexOf(key);
      }
    }
    return -1;
  }

  T get(int pos)
  {
    try
    {
      return p[pos];
    }
    catch (...)
    {
      cout << "Position must be greter than 0 and less than size of an array" << endl;
    }
  }

  void set(int pos, int x)
  {
    if (pos >= 0 && pos < length)
      p[pos] = x;
  }

  T max()
  {
    T max = p[0];
    for (int i = 0; i < length; i++)
      if (max < p[i])
        max = p[i];
    return max;
  }

  T min()
  {
    T min = p[0];
    for (int i = 0; i < length; i++)
      if (min > p[i])
        min = p[i];
    return min;
  }

  T sum()
  {
    T sum = 0;
    for (int i = 0; i < length; i++)
      sum += p[i];
    return sum;
  }

  double avg()
  {
    return double(sum()) / length;
  }

  void Extra_Reverse()
  {
    int a[length];
    for (int i = 0, j = length - 1; j >= 0; i++, j--)
      a[i] = p[j];
    for (int i = 0; i < length - 1; i++)
      p[i] = a[i];
  }

  void Reverse()
  {
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
      T temp = p[i];
      p[i] = p[j];
      p[j] = temp;
    }
  }

  void Left_Shift()
  {
    for (int i = 0; i < length - 1; i++)
      p[i] = p[i + 1];
    p[length - 1] = 0;
  }

  void Right_Shift()
  {
    for (int i = length - 1; i >= 0; i--)
      p[i] = p[i - 1];
    p[0] = 0;
  }

  void Left_Rotate()
  {
    T temp = p[0];
    for (int i = 0; i < length - 1; i++)
      p[i] = p[i + 1];
    p[length - 1] = temp;
  }

  void Right_Rotate()
  {
    T temp = p[length - 1];
    for (int i = length - 1; i >= 0; i--)
      p[i] = p[i - 1];
    p[0] = temp;
  }

  void Insert_Sorted(T x)
  {
    Sort();
    int i = length - 1;
    while (p[i] > x)
    {
      p[i + 1] = p[i];
      i--;
    }
    p[i + 1] = x;
    length++;
  }

  bool isSorted()
  {
    for (int i = 0; i < length - 1; i++)
      if (p[i] > p[i + 1])
        return false;
    return true;
  }

  void Negative_Left_Side()
  {
    int i = 0, j = length - 1;
    while (i < j)
    {
      while (p[i] < 0)
      {
        i++;
      }
      while (p[j] >= 0)
      {
        j--;
      }
      if (i < j)
      {
        T temp = p[i];
        p[i] = p[j];
        p[j] = temp;
      }
    }
  }

  void Merge_Sorted(Array<T> arr)
  {
    int l = arr.Length();

    T c[l + length];
    int i = 0,
        j = 0, k = 0;
    while (i < length && j < l)
    {
      if (p[i] <= arr.get(j))
        c[k++] = p[i++];
      else
        c[k++] = arr.get(j++);
    }
    for (; j < l; j++)
      c[k++] = arr.get(j);
    for (; i < length; i++)
      c[k++] = p[i];
    length += l;
    for (int i = 0; i < (l + length); i++)
      p[i] = c[i];
  }

  void Union(Array<T> arr)
  {
    int l = arr.Length();

    T c[l + length];
    int i = 0,
        j = 0, k = 0;
    for (; i < length; i++)
      c[k++] = p[i];

    for (; j < l; j++)
    {
      int flag = 0;
      for (int m = 0; m < k; m++)
        if (c[m] == arr.get(j))
        {
          flag = 1;
          break;
        }
      if (!flag)
        c[k++] = arr.get(j);
    }
    length = k;
    for (int i = 0; i < k; i++)
      p[i] = c[i];
  }

  void Union_Sorted(Array<T> arr)
  {
    int l = arr.Length();

    this->Sort();
    arr.Sort();

    T c[l + length];
    int i = 0,
        j = 0, k = 0;

    while (i < length && j < l)
    {
      if (p[i] < arr.get(j))
        c[k++] = p[i++];
      else if (p[i] > arr.get(j))
        c[k++] = arr.get(j++);
      else
      {
        c[k++] = arr.get(j++);
        i++;
      }
    }

    for (; j < l; j++)
      c[k++] = arr.get(j);
    for (; i < length; i++)
      c[k++] = p[i];
    length = k;
    for (int i = 0; i < (l + length); i++)
      p[i] = c[i];
  }

  void Intersection(Array<T> arr)
  {
    int l = arr.Length();

    T c[l >= length ? length : l];
    int k = 0;
    for (int i = 0; i < length; i++)
      for (int j = 0; j < l; j++)
        if (p[i] == arr.get(j))
        {
          c[k++] = p[i];
          break;
        }

    length = k;
    for (int i = 0; i < k; i++)
      p[i] = c[i];
  }

  void Intersection_Sorted(Array<T> arr)
  {
    int l = arr.Length();

    arr.Sort();
    this->Sort();

    T c[l >= length ? length : l];
    int i = 0, j = 0, k = 0;

    while (i < length && j < l)
    {
      if (p[i] < arr.get(j))
        i++;
      else if (p[i] > arr.get(j))
        j++;
      else
      {
        c[k++] = p[i++];
        j++;
      }
    }

    length = k;
    for (int i = 0; i < k; i++)
      p[i] = c[i];
  }

  void Diff(Array<T> arr)
  {
    int l = arr.Length();

    T c[l >= length ? length : l];
    int k = 0;

    for (int i = 0; i < length; i++)
    {
      int flag = 0;
      for (int j = 0; j < l; j++)
        if (p[i] == arr.get(j))
        {
          flag = 1;
          break;
        }
      if (!flag)
        c[k++] = p[i];
    }

    length = k;
    for (int i = 0; i < k; i++)
      p[i] = c[i];
  }

  void Diff_Sorted(Array<T> arr)
  {

    arr.Sort();
    this->Sort();

    int l = arr.Length();

    T c[l >= length ? length : l];
    int k = 0, i = 0, j = 0;

    while (i < length && j < l)
    {
      if (p[i] < arr.get(j))
        c[k++] = p[i++];
      else if (p[i] > arr.get(j))
        j++;
      else
      {
        i++;
        j++;
      }
    }

    length = k;
    for (int i = 0; i < k; i++)
      p[i] = c[i];
  }
};

int main()
{
  cout << "Enter Size of an array: ";
  cin >> n;
  cout << endl;

  Array<int> arr;

  int x, pos, ch = 1;
  while (ch == 1)
  {
    cout << "\nMenu\n1. Append\n2. Insert\n3. Delete\n4. Search\n5. Sum\n6. Display\n7. Exit\nEnter Your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter an element: ";
      cin >> x;
      cout << endl;
      arr.Append(x);
      break;
    case 2:
      cout << "Enter an element and position: ";
      cin >> x >> pos;
      cout << endl;
      arr.Insert(x, pos);
      break;
    case 3:
      cout << "Enter position: ";
      cin >> pos;
      cout << endl;
      arr.Delete(pos);
      break;
    case 4:
      cout << "Enter an Element to search: ";
      cin >> x;
      cout << "Found at " << arr.Binary_IndexOf(x) << endl;
      break;
    case 5:
      cout << "Sum is: " << arr.sum() << endl;
      break;
    case 6:
      arr.Display();
      break;
    case 7:
      ch = 0;
      break;
    default:
      break;
    }
  }
  return 0;
}