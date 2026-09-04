func hasDuplicate(nums []int) bool {
    // for i:=0;i<len(nums);i++{
    //     for j:=0;j<len(nums);j++{
    //         if(i!=j && nums[i]==nums[j]){
    //             return true;
    //         }
    //     }
    // }
    // return false;


    // sort.Ints(nums)
    // for i:=0;i<len(nums)-1;i++{
    //     if(nums[i]==nums[i+1]){
    //         return true
    //     }
    // }
    // return false

    // res := make(map[int]bool)
    // for i:=0;i<len(nums);i++{
    //     if res[nums[i]]{
    //         return true;
    //     }else{
    //         res[nums[i]] = true
    //     }
    // }
    // return false

    // res:= make(map[int]bool)
    // for _,num := range nums{
    //     if res[num]{
    //         return true
    //     }else{
    //         res[num] = true
    //     }
    // }
    // return false

    res := make(map[int]bool)
    for _,num:=range nums{
        res[num] = true
    }
    if(len(res)<len(nums)){
        return true
    }
    return false
}
