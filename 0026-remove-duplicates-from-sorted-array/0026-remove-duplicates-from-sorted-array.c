int removeDuplicates(int* nums, int numsSize) {
    // Edge case: empty array
    if (numsSize == 0) {
        return 0;
    }
    
    // k tracks the position of last unique element + 1
    int k = 1;
    
    // i iterates through the rest of the array
    for (int i = 1; i < numsSize; i++) {
        // If current element differs from last unique element
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}