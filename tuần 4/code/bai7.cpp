//Nhữ Ngọc Minh- 20225046
template<class T>
set<T> set_union(const set<T> &a, const set<T> &b) {
    /****************
        Ho va ten : Nguyen Quang Huy
        MSSV : 20183554
    */
    set<T> c;
    for(T v : a){
        c.insert(v);
    }

    for(T v  : b){
        c.insert(v);
    }

    return c;
    /*****************/
}

template<class T>
set<T> set_intersection(const set<T> &a, const set<T> &b) {
    /*****************/
    set<T> c;
    for(T v : a){
        int index = 0;
        for(T u : b){
            if(v == u) index++;
        }
        if(index != 0) c.insert(v);
    }
    return c;
    /*****************/
}