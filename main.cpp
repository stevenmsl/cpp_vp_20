#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol49;

/*
Input: "()"
Output: true
*/

tuple<string, bool>
testFixture1()
{
  return make_tuple("()", true);
}

/*
Input: "()[]{}"
Output: true
*/

tuple<string, bool>
testFixture2()
{
  return make_tuple("()[]{}", true);
}

/*
Input: "(]"
Output: false
*/

tuple<string, bool>
testFixture3()
{
  return make_tuple("(]", false);
}

/*
Input: "([)]"
Output: false
*/

tuple<string, bool>
testFixture4()
{
  return make_tuple("([)]", false);
}

/*
Input: "{[]}"
Output: true
*/

tuple<string, bool>
testFixture5()
{
  return make_tuple("{[]}", true);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isValid(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isValid(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isValid(get<0>(f)) << endl;
}

void test4()
{
  auto f = testFixture4();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isValid(get<0>(f)) << endl;
}

void test5()
{
  auto f = testFixture5();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.isValid(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  return 0;
}