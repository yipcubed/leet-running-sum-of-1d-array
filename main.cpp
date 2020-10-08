#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    int sum = nums[0];
    int nsum = 0;
    for (size_t i = 1; i < nums.size(); i++) {
      int nsum = sum + nums[i];
      nums[i] += sum;
      sum = nsum;
    }
    return nums;
  }
};

void test1() {
  cout << boolalpha;
  vector<int> arr{1,2,3,4};

  cout << "1,3,6,10 ? " << Solution().runningSum(arr) << endl;
}

void test2() {}

void test3() {}