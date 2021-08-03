#include <bits/stdc++.h>
using namespace std;

int n = 100;

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

  Array(initializer_list<T> list)
  {
    p = new T[list.size()];
    for (auto i = list.begin(); i != list.end(); i++)
      p[length++] = *i;
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

  int find_single_missing_no_Sorted()
  {
    int diff;
    if (p[0] == 1)
      diff = 1;
    else
      diff = p[0];
    for (int i = 0; i < length; i++)
      if (_abs64(p[i] - i) != diff)
        return p[i] - 1;
    return -1;
  }

  void find_multiple_missing_no_Sorted()
  {
    int diff;
    if (p[0] == 1)
      diff = 1;
    else
      diff = p[0];
    for (int i = 0; i < length; i++)
      if (_abs64(p[i] - i) != diff)
        while (diff < p[i] - i)
        {
          cout << diff + i << " ";
          diff++;
        }
  }

  void find_missing_no()
  {
    int a[max()] = {0};
    for (int i = 0; i < length; i++)
      a[p[i]]++;
    for (int i = 1; i < max(); i++)
      if (a[i] == 0)
        cout << i << " ";
  }

  void find_duplicates_Sorted()
  {
    int lastDuplicate = 0;
    for (int i = 0; i < length - 1; i++)
    {
      if (p[i] == p[i + 1] and p[i] != lastDuplicate)
      {
        cout << p[i] << " ";
        lastDuplicate = p[i];
      }
    }
  }

  void find_duplicates()
  {
    map<int, int> m;
    for (int i = 0; i < length; i++)
      m[p[i]]++;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
      if (it->second > 1)
        cout << it->first << " ";
  }

  int count_duplicates_Sorted()
  {
    int count = 0, j;
    for (int i = 0; i < length - 1; i++)
    {
      if (p[i] == p[i + 1])
      {
        j = i + 1;
        while (p[i] == p[j])
          j++;
        count += (j - i);
        i = j - 1;
      }
    }
    return count;
  }

  int count_duplicates()
  {
    int count = 0;
    map<int, int> m;
    for (int i = 0; i < length; i++)
      m[p[i]]++;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
      if (it->second > 1)
        count += it->second;
    return count;
  }

  void pair_with_sum_map(int sum)
  {
    map<int, int> m;
    for (int i = 0; i < length; i++)
      m[p[i]]++;
    for (int i = 0; i < length; i++)
      if (m.find(sum - p[i]) != m.end() and m.at(sum - p[i]) > 0)
      {
        m[p[i]] = 0;
        m[sum - p[i]] = 0;
        cout << p[i] << " " << sum - p[i] << endl;
      }
  }

  void pair_with_sum_m1(int sum)
  {
    for (int i = 0; i < length; i++)
    {
      if (p[i] != -1)
        for (int j = i + 1; j < length; j++)
          if (sum - p[i] == p[j])
          {
            cout << p[i] << " " << p[j] << endl;
            p[i] = -1;
            p[j] = -1;
          }
    }
  }

  void pair_with_sum_m2(int sum)
  {
    int a[max() + 1] = {0};
    for (int i = 0; i < length; i++)
    {
      if (sum > p[i] and a[sum - p[i]] != 0)
        cout << p[i] << " " << sum - p[i] << endl;
      a[p[i]]++;
    }
  }

  void pair_with_sum_Sorted(int sum)
  {
    int i = 0, j = length - 1;
    while (j > i)
    {
      if (p[i] + p[j] == sum)
      {
        cout << p[i] << " " << p[j] << endl;
        i++;
        j--;
      }
      else if (p[i] + p[j] < sum)
        i++;
      else
        j--;
    }
  }

  void pair_with_diff_Sorted(int diff)
  {
    int i = 0, j = 1;
    while (j < length and i < length)
    {
      if (p[j] - p[i] < diff)
        j++;
      else if (p[j] - p[i] > diff)
        i++;
      else
      {
        cout << p[j] << " " << p[i] << endl;
        i++;
        j++;
      }
    }
  }

  void pair_with_diff(int diff)
  {
    map<int, int> m;
    for (int i = 0; i < length; i++)
      m[p[i]]++;
    for (int i = 0; i < length; i++)
      if (m.find(diff + p[i]) != m.end() and m.at(diff + p[i]) > 0)
      {
        m[p[i]] = 0;
        m[diff + p[i]] = 0;
        cout << p[i] << " " << diff + p[i] << endl;
      }
  }

  T second_largest()
  {
    T l = p[0], sl = p[0];
    for (int i = 0; i < length; i++)
    {
      if (p[i] > l)
      {
        sl = l;
        l = p[i];
      }
      else if (p[i] < l and p[i] > sl)
      {
        sl = p[i];
      }
    }
    return sl;
  }
};

int main()
{
  Array<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 11, 12, 1, 4, 5, 6, 5, 4, 5, 6, 6, 7};

  arr.Display();
  return 0;
}