# Practical 5 - C++ Solutions

## 1. Cube using Inline Function
```cpp
#include <iostream>
using namespace std;
inline int cube(int n) { return n*n*n; }
int main(){ int n; cin>>n; cout<<cube(n); return 0; }
```

## 2. Maximum of Two Numbers
```cpp
#include <iostream>
using namespace std;
inline int maximum(int a,int b){ return a>b?a:b; }
int main(){ int a,b; cin>>a>>b; cout<<maximum(a,b); return 0; }
```

## 3. Area of Circle
```cpp
#include <iostream>
using namespace std;
inline float area(float r){ return 3.14*r*r; }
int main(){ float r; cin>>r; cout<<area(r); return 0; }
```

## 4. Simple Interest
```cpp
#include <iostream>
using namespace std;
inline float simpleInterest(float p,float r,float t){ return p*r*t/100; }
int main(){ float p,r,t; cin>>p>>r>>t; cout<<simpleInterest(p,r,t); return 0; }
```

## 5. Swap Two Numbers
```cpp
#include <iostream>
using namespace std;
inline void swapNumbers(int &a,int &b){ int temp=a; a=b; b=temp; }
int main(){ int a,b; cin>>a>>b; swapNumbers(a,b); cout<<a<<" "<<b; return 0; }
```
