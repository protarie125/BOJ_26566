#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
double a1, p1, r1, p2;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < (n--)) {
    cin >> a1 >> p1 >> r1 >> p2;

    const auto& q1 = a1 / p1;
    const auto& a2 = r1 * r1 * 3.141592;
    const auto& q2 = a2 / p2;

    if (q2 < q1) {
      cout << "Slice of pizza\n";
    } else {
      cout << "Whole pizza\n";
    }
  }

  return 0;
}