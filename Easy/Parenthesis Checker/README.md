<h2><a href="https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=parenthesis-checker">Parenthesis Checker</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an expression string <strong>x</strong>. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.<br>
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
{([])}
<strong>Output</strong>: 
true
<strong>Explanation</strong>: 
<span style="color:#FF0000">{</span> <span style="color:#00FF00">(</span> <span style="color:#0000CD">[</span> <span style="color:#0000CD">]</span> <span style="color:#00FF00">)</span> <span style="color:#FF0000">}.&nbsp;</span><span style="color:#000000">Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.</span>
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
()
<strong>Output</strong>: 
true
<strong>Explanation</strong>: 
<span style="color:#00FF00">()</span><span style="color:#000000">. Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.</span></span>
</pre>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
([]
<strong>Output</strong>: 
false
<strong>Explanation</strong>: 
<span style="color:#00FF00">(</span><span style="color:#0000CD">[]</span>.<span style="color:#000000"> Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.</span></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to complete the function <strong>ispar()&nbsp;</strong>that takes a&nbsp;<strong>string </strong>as a&nbsp;<strong>parameter </strong>and returns a boolean value&nbsp;<strong>true </strong>if <strong>brackets </strong>are <strong>balanced </strong>else <strong>returns false</strong>. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(|x|)<br>
<strong>Expected Auixilliary Space</strong>: O(|x|)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |x| ≤ </span><span style="font-size:18px">32000</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<code>Amazon</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Oracle</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Walmart</code>&nbsp;<code>Yatra.com</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;