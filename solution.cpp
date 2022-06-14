#include <unordered_map>
#include <stack>
#include <string>
#include "solution.h"
#include "util.h"

using namespace sol49;
using namespace std;

/*takeaways
  - use stack
  - use a hash table to pair up parenthesis
    to simplify the code
*/

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