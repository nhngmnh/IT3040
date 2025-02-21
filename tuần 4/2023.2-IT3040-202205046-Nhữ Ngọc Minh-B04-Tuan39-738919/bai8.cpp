//Nhữ Ngọc Minh- 20225046
// #include <iostream>
// #include <map>

// using namespace std;

template<class T>
map<T, double> fuzzy_set_union(const map<T, double> &a, const map<T, double> &b) {
  map<T,double> tmp;
  for (auto i:a)
  {
      bool check=false; // biến check chỉ ra rằng tồn tại 1 cặp trong map b có b.key=a.key; 
      pair<T,double> tmp1;
      for (auto j:b)
      {
          if (i.first==j.first)
          { tmp1=j;
              check=true;
              break;
          }
      }
      if (check) tmp.insert({i.first,max(i.second,tmp1.second)});
      else tmp.insert({i.first,i.second});
  }
  for (auto i:b)
  { bool check1=false; // check1 chỉ ra đã tồn tại b.first trong các key của tmp chưa
      for (auto j:a)
      {
          if (i.first==j.first) 
          { check1=true; break;}
      }
      if (!check1) tmp.insert({i.first,i.second});
  }
  return tmp;
}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double> &a, const map<T, double> &b) {
    map<T,double> tmp;
    for (auto i:a)
    {   
        bool check=false; //chỉ ra sự tồn tại của 1 pair trong b mà có key bằng i.key
        pair<T,double> tmp1; // biến lưu trữ phần tử tại b mà có key bằng i.key
        for (auto j:b)
        {
            if (i.first==j.first)
            {   tmp1=j;
                check=true; break;
            }
        }
        if (check) tmp.insert({i.first,min(i.second,tmp1.second)});
    }
    return tmp;
}

// template<class T>
// void print_fuzzy_set(const std::map<T, double> &a) {
//     cout << "{ ";
//     for (const auto &x : a) {
//         std::cout << "(" << x.first << ", " << x.second << ") ";
//     }
//     cout << "}";
//     std::cout << std::endl;
// }

// int main() {
//     std::map<int, double> a = {{1, 0.2}, {2, 0.5}, {3, 1}, {4, 0.6}, {5, 0.7}};
//     std::map<int, double> b = {{1, 0.5}, {2, 0.4}, {4, 0.9}, {5, 0.4}, {6, 1}};
//     std::cout << "A = "; print_fuzzy_set(a);
//     std::cout << "B = "; print_fuzzy_set(b);
//     std::map<int, double> c = fuzzy_set_union(a, b);
//     std::map<int, double> d = fuzzy_set_intersection(a, b);
//     std::cout << "Union: "; print_fuzzy_set(c);
//     std::cout << "Intersection: "; print_fuzzy_set(d);
// }