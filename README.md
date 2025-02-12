<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Progress Tracker</title>
  <style>
    table {
      width: 95%;
      margin: 30px auto;
      border-collapse: separate;
      border-spacing: 0;
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
      border-radius: 10px;
      overflow: hidden;
      background: linear-gradient(to bottom, #ffffff, #f9f9f9);
    }

    th, td {
      padding: 15px 20px;
      text-align: left;
      border-bottom: 1px solid #ddd;
    }

    th {
      background-color: #007BFF;
      color: white;
      font-size: 16px;
      font-weight: 600;
      text-transform: uppercase;
      letter-spacing: 1px;
    }

    tr:last-child td {
      border-bottom: none;
    }

    tr:nth-child(even) {
      background-color: #f9f9f9;
    }

    tr:hover {
      background-color: #e9ecef;
      transition: background-color 0.3s ease;
    }

    /* Difficulty-Specific Styling */
    .difficulty-easy {
      color: green;
      font-weight: bold;
    }

    .difficulty-medium {
      color: orange;
      font-weight: bold;
    }

    .difficulty-hard {
      color: red;
      font-weight: bold;
    }

    /* Link Styling */
    a {
      color: #007BFF;
      text-decoration: none;
      font-weight: 500;
      transition: color 0.3s ease;
    }

    a:hover {
      color: #0056b3;
      text-decoration: underline;
    }

    /* Additional Styling for Table Header */
    thead {
      background: linear-gradient(to right, #007BFF, #0056b3);
    }

    /* Responsive Design */
    @media (max-width: 768px) {
      table {
        font-size: 14px;
      }

      th, td {
        padding: 10px 15px;
      }
    }
  </style>
</head>
<body>
  <h1 style="text-align: center; color: #333; margin-top: 20px;">Progress Tracker</h1>
  <table>
  <thead>
    <tr>
      <th>#</th>
      <th>Problem</th>
      <th>Difficulty</th>
      <th>Solution</th>
    </tr>
  </thead>
    <tbody>
    
<tr>
        <td>1</td>
        <td><a href="https://leetcode.com/problems/merge-strings-alternately/">Merge Strings Alternately</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Merge_Strings_Alternately.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>2</td>
        <td><a href="https://leetcode.com/problems/greatest-common-divisor-of-strings/">Greatest Common Divisor of Strings</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Greatest_Common_Divisor_of_Strings.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>3</td>
        <td><a href="https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/">Kids With the Greatest Number of Candies</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Kids_With_the_Greatest_Number_of_Candies.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>4</td>
        <td><a href="https://leetcode.com/problems/can-place-flowers/">Can Place Flowers</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Can_Place_Flowers.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>5</td>
        <td><a href="https://leetcode.com/problems/reverse-vowels-of-a-string/">Reverse Vowels of a String</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Reverse_Vowels_of_a_String.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>6</td>
        <td><a href="https://leetcode.com/problems/reverse-words-in-a-string/">Reverse Words in a String</a></td>
        <td class="difficulty-medium">Medium</td>
        <td><a href="solutions/Reverse_Words_in_a_String.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>7</td>
        <td><a href="https://leetcode.com/problems/product-of-array-except-self/">Product of Array Except Self</a></td>
        <td class="difficulty-medium">Medium</td>
        <td><a href="solutions/Product_of_Array_Except_Self.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>8</td>
        <td><a href="https://leetcode.com/problems/increasing-triplet-subsequence/">Increasing Triplet Subsequence</a></td>
        <td class="difficulty-medium">Medium</td>
        <td><a href="solutions/Increasing_Triplet_Subsequence.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>9</td>
        <td><a href="https://leetcode.com/problems/is-subsequence/">Is Subsequence</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Is_Subsequence.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>10</td>
        <td><a href="https://leetcode.com/problems/reverse-linked-list/">Reverse Linked List</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Reverse_Linked_List.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>11</td>
        <td><a href="https://leetcode.com/problems/kth-largest-element-in-an-array/">Kth Largest Element in an Array</a></td>
        <td class="difficulty-medium">Medium</td>
        <td><a href="solutions/Kth_Largest_Element_in_an_Array.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>12</td>
        <td><a href="https://leetcode.com/problems/n-th-tribonacci-number/">N-th Tribonacci Number</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/N-th_Tribonacci_Number.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>13</td>
        <td><a href="https://leetcode.com/problems/min-cost-climbing-stairs/">Min Cost Climbing Stairs</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Min_Cost_Climbing_Stairs.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>14</td>
        <td><a href="https://leetcode.com/problems/house-robber/">House Robber</a></td>
        <td class="difficulty-medium">Medium</td>
        <td><a href="solutions/House_Robber.cpp">View Solution</a></td>
      </tr>

<tr>
        <td>15</td>
        <td><a href="https://leetcode.com/problems/counting-bits/">Counting Bits</a></td>
        <td class="difficulty-easy">Easy</td>
        <td><a href="solutions/Counting_Bits.cpp">View Solution</a></td>
      </tr></tbody>    
</table>
</body>
</html>