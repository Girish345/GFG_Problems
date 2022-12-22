<h2><a href="https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s">Row with max 1s</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a boolean 2D array of n x m dimensions where each row is sorted. Find&nbsp;the&nbsp;0-based index of the first row&nbsp;that has&nbsp;the maximum number of <strong>1's</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
<strong>Output:</strong> 2
<strong>Explanation:</strong> Row 2 contains <strong>4</strong> 1's (0-based
indexing).
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 2, M = 2
Arr[][] = {{0, 0}, {1, 1}}
<strong>Output:</strong> 1
<strong>Explanation:</strong> Row 1 contains <strong>2</strong> 1's (0-based
indexing).
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>rowWithMax1s()</strong>&nbsp;which takes the array of booleans&nbsp;<strong>arr[][],</strong><strong>&nbsp;n </strong>and <strong>m&nbsp;</strong>as input parameters and returns the 0-based index of the first row that has the most number of 1s. If no such&nbsp;row exists, return -1.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N+M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M&nbsp;≤ 10<sup>3</sup><br>
0 ≤ Arr[i][j]&nbsp;≤ 1&nbsp;</span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;