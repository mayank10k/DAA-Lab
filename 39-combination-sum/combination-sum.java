class Solution {

    List<List<Integer>> ans;

    public void helper(int[] arr, int idx, int target, List<Integer> l) {

        if (target == 0) {
            ans.add(new ArrayList<>(l));
            return;
        }

        if (idx >= arr.length || target < 0) {
            return;
        }

       
        l.add(arr[idx]);
        helper(arr, idx, target - arr[idx], l);
        l.remove(l.size() - 1);

        helper(arr, idx + 1, target, l);
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        ans = new ArrayList<>();
        helper(candidates, 0, target, new ArrayList<>());
        return ans;
    }
}