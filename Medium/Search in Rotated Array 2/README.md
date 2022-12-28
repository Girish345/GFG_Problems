<h2><a href="https://practice.geeksforgeeks.org/problems/search-in-rotated-array-2/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-rotated-array">Search in Rotated Array 2</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p>Given a sorted and rotated array A of N&nbsp;elements which is rotated at some point, and may contain duplicates&nbsp;and given an element key. Check whether the key exist in the array A or not.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
N = 7
A[] = {2,5,6,0,0,1,2}
key = 0
<strong>Output</strong>:
1
<strong>Explanation</strong>:
0 is found at index 3.</pre>

<p><strong>Example 2</strong>:</p>

<pre><strong>Input</strong>:
N = 7
A[] = {2,5,6,0,0,1,2}
key = 3<strong>
Output</strong>:
0<strong>
Explanation</strong>:
There is no element that has value 3.</pre>

<p><strong>Your Task</strong>:<br>
Complete the function&nbsp;search()&nbsp;which takes a integer N and&nbsp; an array A&nbsp;and the Key as input parameters, and returns the answer.<br>
<br>
<strong>Expected Time Complexity</strong>:&nbsp;O(log N).<br>
<strong>Expected Auxiliary Space</strong>:&nbsp;O(1).</p>

<p><strong>Constraints</strong>:<br>
1 ≤ N ≤ 5000<br>
0 ≤ A[i] ≤ 108<br>
1 ≤ key ≤ 108</p>
</div>