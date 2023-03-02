**What is Data Structures?**
-------------------------  
* Collection of __data__ values
* Relationships among them
* Functions/Operations that can be performed on them

**Complexity Analysis**
-----------------------
__Need for Complexity Analysis :__
Any problem can have multiple algorithms so in order to find the best or better algorithm we use Complexity Analysis.

__<h3>Complexity:</h3>__ 
1. __Time Complexity -__ To identify which algorithm is faster(in terms of number of operations the computer executes, not in seconds).
2. __Space Complexity -__ To identify which algorithm takes less space in the memory.

**Time Complexity**
--------------------
To calulate the time complexity we have to take the following steps:
* Count the number of simple operations computer has to perform.
* As Input(N) grows, calculate in what proportions does number of opertions grow (in General .i.e, how is the overall trend).

This proportional increase in number of simple operations performed by computer is the __Time Complexity__, and to calculate this proportional increase we use __Asymptotic Analysis__ and is expressed using __Big-O-notation__.

**Asymptotic Analysis**
--------------------
What the function(eqn representing the number of simple operations) becomes when N becomes very large or as N tends to Infinity.

Ex. 
f(N) = N + 3 <br> 
as, <br>
Lim{N->Inf} f(N) = O(N) // Big-o Notation

f(N) = N^2 + 3N => O(N^2) <br>
f(N) = 2N^2 + 5N => O(2N^2)<br>

O(N) -> Number of Operations is a multiple of N <br>
O(N^2) -> Number of Operations is multiple of N^2 <br>


**Space Complexity**
--------------------
Amount of Auxiliary memory needed to run the algorithm is the Space Complexity.

__Auxiliary Memory__ : Amount of space required by the algorithm (excluding the input itself).

**Some Basic Operations for all Data Structures**
------------------------------------------
1. __Access__
2. __Setting Value__
3. __Traversing__
4. __Copying__
5. __Inserting__
   1. At Beginning
   2. At End
   3. Somewhere in between
6. __Deleting__
   1. At Beginning
   2. At End
   3. Somewhere in between
   
