func hasDuplicate(nums []int) bool {
    for i:=0;i<len(nums);i++{
        for j:=0;j<len(nums);j++{
            if(i!=j && nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
    // sort.Ints(nums)
    // for i:=0;i<len(nums)-1;i++{
    //     if(nums[i]==nums[i+1]){
    //         return true
    //     }
    // }
    // return false

}
