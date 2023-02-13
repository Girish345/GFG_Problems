<h2><a href="https://practice.geeksforgeeks.org/problems/mila-and-strings0435/0">Lexicographically smallest string</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>S</strong> consisting of <strong>only lowercase characters</strong>. Find&nbsp;the lexicographically smallest string after removing <strong>exactly</strong>&nbsp;<strong>k</strong> characters from the string. But you have to correct the value of <strong>k</strong>, i.e.,&nbsp;if the length of the string is a <strong>power of 2</strong>, reduce <strong>k by half</strong>, else multiply <strong>k by 2</strong>. You can remove <strong>any k</strong> character.<br>
<strong>NOTE:&nbsp;</strong>If it is not possible to remove k (the value of k after correction) characters or if the resulting string is empty return&nbsp;<strong>-1</strong>. </span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: S = "fooland", k = 2
<strong>Output:</strong>&nbsp;"and"&nbsp;
<strong>Explanation</strong>: As the size of the string = 7
which is not a power of 2, hence k = 4.
After removing 4 characters from the given 
string, the lexicographically smallest
string is "and".</span><span style="font-size:18px">
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>S = "code", k = 4
<strong>Output:&nbsp;</strong>"cd"
<strong>Explanation</strong>: As the length of the string = 4, 
which is 2 to the power 2, hence k = 2.
Hence, lexicographically smallest string after 
removal of 2 characters is "cd".</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>lexicographicallySmallest()&nbsp;</strong>which takes S&nbsp;and k as input parameters and returns the lexicographically smallest string after removing k characters.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n+k), n is size of the string<br>
<strong>Expected Auxiliary Space:</strong> O(n)<br>
<br>
<strong>Constraints:</strong><br>
1&lt;= |S|&nbsp;&lt;=10<sup>5</sup><br>
1&lt;= k &lt;= 10</span><sup><span style="font-size:15px">5</span></sup></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;