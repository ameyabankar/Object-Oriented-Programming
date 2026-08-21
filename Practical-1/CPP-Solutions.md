# Practical-1: C++ Solutions

## 1. Simple Interest
```cpp
#include <iostream>
using namespace std;
int main(){ float p,r,t; cin>>p>>r>>t; cout<<(p*r*t)/100; return 0; }
```

## 2. Area and Perimeter of Rectangle
```cpp
#include <iostream>
using namespace std;
int main(){ float l,b; cin>>l>>b; cout<<"Area = "<<l*b<<"\nPerimeter = "<<2*(l+b); return 0; }
```

## 3. Average of Five Numbers
```cpp
#include <iostream>
using namespace std;
int main(){ float a,b,c,d,e; cin>>a>>b>>c>>d>>e; cout<<"Average = "<<(a+b+c+d+e)/5; return 0; }
```

## 4. Swap Without Third Variable
```cpp
#include <iostream>
using namespace std;
int main(){ int a,b; cin>>a>>b; a=a+b; b=a-b; a=a-b; cout<<a<<" "<<b; return 0; }
```

## 5. Celsius to Fahrenheit
```cpp
#include <iostream>
using namespace std;
int main(){ float c; cin>>c; cout<<"Fahrenheit = "<<(c*9/5)+32; return 0; }
```

## 6. Factorial
```cpp
#include <iostream>
using namespace std;
int main(){ int n; long long fact=1; cin>>n; for(int i=1;i<=n;i++) fact*=i; cout<<fact; return 0; }
```

## 7. Fibonacci Series
```cpp
#include <iostream>
using namespace std;
int main(){ int n,a=0,b=1,c; cin>>n; for(int i=1;i<=n;i++){ cout<<a<<" "; c=a+b; a=b; b=c; } return 0; }
```

## 8. Armstrong Number
```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main(){ int n,temp,digits=0,sum=0,x; cin>>n; temp=n; while(temp){digits++; temp/=10;} temp=n; while(temp){x=temp%10; sum+=pow(x,digits); temp/=10;} cout<<(sum==n?"Armstrong Number":"Not an Armstrong Number"); return 0; }
```

## 9. Reverse a String
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){ string s; getline(cin,s); reverse(s.begin(),s.end()); cout<<s; return 0; }
```

## 10. Different Patterns Using For Loop
```cpp
#include <iostream>
using namespace std;
int main(){ int n; cin>>n; for(int i=1;i<=n;i++){ for(int j=1;j<=i;j++) cout<<"* "; cout<<endl; } return 0; }
```

## 11. Structure to Store and Display 2 Student Details
```cpp
#include <iostream>
using namespace std;
struct Student{ string name; int roll; float marks; };
int main(){ Student s[2]; for(int i=0;i<2;i++){ cin>>s[i].name>>s[i].roll>>s[i].marks; } for(int i=0;i<2;i++){ cout<<"Name: "<<s[i].name<<"\nRoll: "<<s[i].roll<<"\nMarks: "<<s[i].marks<<"\n"; } return 0; }
```
