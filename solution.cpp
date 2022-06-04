#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol49;
using namespace std;

bool Solution::isValid(string s)
{
  auto m = unordered_map<char, char>{{'{', '}'}, {'(', ')'}, {'[', ']'}};
  auto stk = stack<char>();

  for (auto c : s)
  {
    if (m.count(c))
      stk.push(c);
    /* pop it out if there is a match */  
    else if (!stk.empty() && m[stk.top()] == c)
      stk.pop();
  }

  return stk.size() == 0;
}