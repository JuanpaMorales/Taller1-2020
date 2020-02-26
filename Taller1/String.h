#indef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "Bool.h"


const int MAX= 1000;
typedef char *string;


void strcrear(string &s);
int strlar (string s);
void strcop (string &s1, string s2);
void scan(string &s);
void print(string s);
boolean streq(string s1, string s2);

#endif // STRING_H_INCLUDED