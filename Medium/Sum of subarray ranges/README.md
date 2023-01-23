<h2><a href="https://practice.geeksforgeeks.org/problems/sum-of-subarray-ranges/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-subarray-ranges">Sum of subarray ranges</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer array <strong>a</strong><strong>rr&nbsp;</strong>of size <strong>N</strong>.&nbsp;The <strong>Range</strong> of a subarray of arr is the difference between the largest and smaller element in the subarray.&nbsp;&nbsp;<br>
Return the <strong>sum</strong> of all subarray ranges of arr.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 3<br>
arr[ ] = {1, 2, 3}<br>
<strong>Output:&nbsp;</strong>4<br>
<strong>Explanation:</strong>&nbsp;The 6 subarrays of arr are the following :<br>
{1 } , range = largest - smallest = 1 - 1 = 0&nbsp;<br>
{2 } , range = 2 - 2 = 0<br>
{3&nbsp;} , range = 3&nbsp;- 3&nbsp;= 0<br>
{1, 2}, range = 2&nbsp;- 1 = 1<br>
{2, 3}, range = 3 - 2&nbsp;= 1<br>
{1, 2, 3}, range = 3&nbsp;- 1 = 2<br>
sum of all ranges is 0 + 0 + 0 + 1 + 1&nbsp;+ 2 = 4</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 4<br>
arr[ ] = {-32, 0, -2, 72}<br>
<strong>Output:&nbsp;</strong>318</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>subarrayRanges()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr </strong>and <strong>N&nbsp;</strong>as parameters and returns a sum of&nbsp;all subarrays ranges of arr.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>3</sup><br>
10<sup>-9&nbsp;</sup>≤ arr<sub>i&nbsp; </sub>≤ 10<sup>-9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;