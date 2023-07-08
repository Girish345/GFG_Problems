<h2><a href="https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1?page=1&company[]=SAP%20Labs&sortBy=submissions">Maximize sum(arr[i]*i) of an Array</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span style="font-family:arial,helvetica,sans-serif">Given an array <strong>A</strong> of&nbsp;<strong>N</strong>&nbsp;integers. Your task is to write a program to find the maximum value of <strong>∑arr[i]*i</strong>, where i = 0, 1, 2,., n  1.<br>
You are allowed to rearrange the elements of the array.<br>
<strong>Note</strong>: Since output could be large, hence module 10<sup>9</sup>+7 and then print answer.</span></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {5, 3, 2, 4, 1}
<strong>Output :</strong> 40
<strong>Explanation:
</strong>If we arrange the array as 1 2 3 4 5 then 
we can see that the minimum index will multiply
with minimum number and maximum index will 
multiply with maximum number. 
So 1*0+2*1+3*2+4*3+5*4=0+2+6+12+20 = 40 mod(10<sup>9</sup>+7) = 40

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {1, 2, 3}
<strong>Output :</strong> 8

</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>Maximize() </strong>that takes an&nbsp;<em>array <strong>(arr)</strong></em><strong>, </strong><em>sizeOfArray <strong>(n)</strong></em><strong>,</strong>&nbsp;and return the maximum value of an array. The<strong> driver code </strong>takes care of the <strong>printing</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(nlog(n)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><span style="font-family:arial,helvetica,sans-serif"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>7</sup><br>
1 ≤ A<sub>i</sub> ≤ N</span></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>SAP Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;