<h2><a href="https://practice.geeksforgeeks.org/problems/replace-elements-by-its-rank-in-the-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=replace-elements-by-its-rank-in-the-array">Replace elements by its rank in the array</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr </strong>of <strong>N </strong>integers, the task is to replace each element of the array by its rank in the array.&nbsp;The&nbsp;<strong>rank</strong> of an element&nbsp;is defined as the distance between the element with the first element of the array when the array is arranged in ascending order. If two or more are same in the array then their rank is also the same as the rank of the first occurrence of the element.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1</strong>:</span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 6
arr = [20, 15, 26, 2, 98, 6]
<strong>Output</strong>:
4, 3, 5, 1, 6, 2
<strong>Explanation</strong>:</span>
<span style="font-size:18px">After sorting, array becomes {</span><span style="font-size:18px">2,6,15,20,26,98}
Rank(2) = 1 (at index 0)&nbsp;
Rank(6) = 2 (at index 1)&nbsp;
Rank(15) = 3 (at index 2)&nbsp;
Rank(20) = 4 (at index 3) and so on..</span></pre>

<p><span style="font-size:18px"><strong>Example 2</strong>:</span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 4
arr = [2, 2, 1, 6]
<strong>Output</strong>:
2, 2, 1, 3
<strong>Explanation</strong>:</span>
<span style="font-size:18px">After sorting, array becomes {1, 2, 2, 6}
Rank(1) = 1 (at index 0)&nbsp;
Rank(2) = 2 (at index 1)&nbsp;
Rank(2) = 2 (at index 2)&nbsp;
Rank(6) = 3 (at index 3)</span>
<span style="font-size:18px">Rank(6) = 3 because rank after 2 is 3 as rank 
of same element remains same</span> <span style="font-size:18px">and for next element 
increases by 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function int <strong>replaceWithRank</strong>(), which takes integer N&nbsp; and an array&nbsp;of N integers as input and returns the list in which element at each position of original array is replaced by the rank of that element.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N * logN)<br>
<strong>Expected Auxiliary Space</strong>: O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>9</sup></span></p>
</div>