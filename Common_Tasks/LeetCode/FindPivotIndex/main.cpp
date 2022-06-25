//
// Created by Dmitry Morozov on 21/6/22.
//

class Solution
{
  public:
  int pivotIndex (vector < int >&nums)
  {

    int Rs = 0;
    int Ls = 0;
    for (int number:nums)
      {
	Rs += number;
      }

    for (int i =0; i < nums.size (); i++)
      {
	Rs -= nums[i];
	    if (Ls == Rs)
	        return i;
    	Ls += nums[i];
      }
    return -1;
  }
};
int main{
}
