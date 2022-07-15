class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t sum_m_n = (nums1.size() + nums2.size());
        size_t goal_index = sum_m_n / 2;

        int goal_item = 0, prev_item = 0;
        size_t count = 0;

        auto index_1 = nums1.begin();
        auto index_2 = nums2.begin();

        while (count <= goal_index)
        {
            prev_item = goal_item;

            if (index_1 == nums1.end())
            {
                goal_item = *index_2;
                ++index_2;
            }
            else if (index_2 == nums2.end())
            {
                goal_item = *index_1;
                ++index_1;
            }
            else if (*index_1 < *index_2)
            {
                goal_item = *index_1;
                ++index_1;
            }
            else
            {
                goal_item = *index_2;
                ++index_2;
            }

            count++;
        }


        if (sum_m_n % 2 == 1)
        {
            return goal_item;
        }
        else
        {
            return (goal_item + prev_item) / 2.0;
        }
    }
};