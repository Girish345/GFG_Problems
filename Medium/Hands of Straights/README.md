<h2><a href="https://practice.geeksforgeeks.org/problems/hands-of-straights/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=hands-of-straights">Hands of Straights</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size <strong>groupSize</strong>, and consists of <strong>groupSize </strong>consecutive cards.<br>
Given an integer array <strong>hand</strong> of size <strong>N</strong> where <strong>hand [ i ]</strong> is the value written on the <strong>i<sup>th</sup></strong>&nbsp;card and an integer <strong>groupSize</strong>, return <strong>true</strong> if she can rearrange the cards, or <strong>false</strong> otherwise.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 9<br>
groupSize = 3<br>
hand[ ] = {1, 2, 3, 6, 2, 3, 4, 7, 8}<br>
<strong>Output: </strong>true<br>
<strong>Explanation:</strong>&nbsp;<br>
Alice's hand can be rearranged as {1, 2, 3} , {2, 3, 4}, {6, 7, 8}.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 5<br>
groupSize = 2<br>
hand[ ] = {1, 2, 3, 4, 5}<br>
<strong>Output: </strong>false<br>
<strong>Explanation:</strong>&nbsp;<br>
Alice's hand cannot be rearranged into groups of 2.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>isStraightHand()</strong>&nbsp;which takes the interger <strong>N</strong>, integer <strong>groupSize</strong>&nbsp;and an integer array&nbsp;<strong>hand&nbsp;</strong>as parameters and returns the true if specified arrangement is possible.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(Nlog(N))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ groupSize&nbsp;≤ N</span><br>
<span style="font-size:18px">0 ≤ hand<sub>i</sub>&nbsp;≤ 10</span><span style="font-size:15px"><sup>9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Greedy</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;