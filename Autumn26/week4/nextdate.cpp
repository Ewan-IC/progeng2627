#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 4 == 0 && year % 100 !=0){
        ly = true;
    }
    else if (year % 400 == 0){
        ly = true;
    }
    else {
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if (d1 == 31 && (m1 == 1,3,5,7,8,10,12)){
        d2 = 1;
        m2 = m1 + 1;
        if (m2 == 13){
            m2 = 1;
            y2 = y1+1;
        }
        else{
            y2 = y1;
        }
    }
    else if (d1 == 30 && (m1 == 4,6,9,11)){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else if (d1 == 28 && m1 == 2){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else if (d1 == 29 && m1 == 2 && leap_year(y1)){
        d2 = 1;
        m2 = m1 +1;
        y2 = y1;
    }
    else{
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}

int main(){
    int d1 = 31, m1 = 1, y1 = 1999, d2 = 0, m2 = 0, y2 = 0;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
    d1 = 30, m1 = 4, y1 = 1999;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
    d1 = 28, m1 = 2, y1 = 1999;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
    d1 = 31, m1 = 12, y1 = 1999;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
    d1 = 29, m1 = 2, y1 = 2008;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
    d1 = 26, m1 = 7, y1 = 2018;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << "/" << m2 << "/" << y2 << std::endl; 
}