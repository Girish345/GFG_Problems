<h2><a href="https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?page=1&sortBy=submissions&searchQuery=anagrams">Count Occurences of Anagrams</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a word <strong>pat</strong>&nbsp;and a text <strong>txt</strong>. Return the count of the occurences of anagrams of the word in the text.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>txt = forxxorfxdofr
pat = for
<strong>Output:</strong> 3
<strong>Explanation:</strong> <strong>for, orf</strong> and <strong>ofr </strong>appears
in the <strong>txt, </strong>hence answer is 3.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>txt = aabaabaa
pat = aaba
<strong>Output:</strong> 4
<strong>Explanation:</strong>&nbsp;<strong>aaba</strong> is present 4 times
in <strong>txt</strong>.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>search()</strong>&nbsp;which takes two strings&nbsp;<strong>pat, txt,</strong>&nbsp;as input parameters&nbsp;and returns an integer&nbsp;denoting the answer.&nbsp;You don't to print answer or take inputs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(26) or O(256)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;=&nbsp;|pat| &lt;= |txt|&nbsp;&lt;= 10<sup>5</sup><br>
Both string contains lowercase english letters.</span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Intuit</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;