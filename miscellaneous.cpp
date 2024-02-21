Marking Scheme
+1
0
Choose correct option

Ross wants a new password for his phone because he forgot the previous one. He has n integers and His phone uses a four-digit password. So, you have to choose four numbers from the n integers it having a sum equal to k. Print the total number of possible password.

Example:

Input: A[] = [2, 7, 4, 0, 9, 5, 1, 3], k = 20

Output: 3

Explanation: The quadruplets having a sum equal to k, i.e., 20 are (0, 4, 7, 9), (1, 3, 7, 9), and (2, 4, 5, 9).
ChatGPT
Certainly! Here's a Python program to solve the given problem:

python
Copy code
def count_passwords(arr, k):
    n = len(arr)
    count = 0

    for i in range(n - 3):
        for j in range(i + 1, n - 2):
            for l in range(j + 1, n - 1):
                for m in range(l + 1, n):
                    if arr[i] + arr[j] + arr[l] + arr[m] == k:
                        count += 1

    return count

# Example usage:
A = [2, 7, 4, 0, 9, 5, 1, 3]
k = 20
result = count_passwords(A, k)
print("Output:", result)
This program defines a function count_passwords that takes an array arr and a target sum k. It then uses four nested loops to iterate through all possible combinations of four numbers in the array and checks if their sum equals the target k. The count of such combinations is then returned.

In the example provided, the output for the given array A and target sum k is printed, and you can replace the values with your own inputs if needed.

User
You are given a set of n subjects, each with a credit value and a subject code, given that both value and subject code are positive. You are also given an integer limit, W. You need to determine the maximum value of subjects to include in a collection so that the total credit value is less than or equal to W. Print this determined subject code.

Example:

Input: value = [ 20, 5, 10, 40, 15, 25 ], weight = [ 1, 2, 3, 8, 7, 4 ], W = 10

Output: 60

Explanation: 60 is maximum value that has a weight less than or equal to W as,
value = 20 + 40 = 60
weight = 1 + 8 = 9 < W
ChatGPT
Certainly! Here's a Python program using dynamic programming to solve the given problem:

python
Copy code
def knapsack_max_value(value, weight, W):
    n = len(value)
    dp = [[0] * (W + 1) for _ in range(n + 1)]

    for i in range(n + 1):
        for w in range(W + 1):
            if i == 0 or w == 0:
                dp[i][w] = 0
            elif weight[i - 1] <= w:
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w])
            else:
                dp[i][w] = dp[i - 1][w]

    result = dp[n][W]

    # Reconstruction of the selected subjects
    selected_subjects = []
    i, w = n, W
    while i > 0 and w > 0:
        if dp[i][w] != dp[i - 1][w]:
            selected_subjects.append(i - 1)
            w -= weight[i - 1]
        i -= 1

    # Printing subject codes
    subject_codes = [f"Subject {i + 1}" for i in reversed(selected_subjects)]
    print("Selected Subject Codes:", subject_codes)

    return result

# Example usage:
value = [20, 5, 10, 40, 15, 25]
weight = [1, 2, 3, 8, 7, 4]
W = 10
output = knapsack_max_value(value, weight, W)
print("Output:", output)
This program uses a dynamic programming approach to find the maximum value of subjects that can be included in the collection with a total weight less than or equal to the given limit W. The selected subject codes are also printed as part of the output. You can replace the values in the example with your own inputs if needed.

User
do in cpp
ChatGPT
Certainly! Here's the equivalent program in C++ for the given knapsack problem:

cpp
Copy code
#include <iostream>
#include <vector>

using namespace std;

int knapsack_max_value(const vector<int>& value, const vector<int>& weight, int W) {
    int n = value.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weight[i - 1] <= w) {
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    int result = dp[n][W];

    // Reconstruction of the selected subjects
    vector<int> selected_subjects;
    int i = n, w = W;
    while (i > 0 && w > 0) {
        if (dp[i][w] != dp[i - 1][w]) {
            selected_subjects.push_back(i - 1);
            w -= weight[i - 1];
        }
        i--;
    }

    // Printing subject codes
    cout << "Selected Subject Codes:";
    for (int i = selected_subjects.size() - 1; i >= 0; --i) {
        cout << " Subject " << selected_subjects[i] + 1;
    }
    cout << endl;

    return result;
}

int main() {
    vector<int> value = {20, 5, 10, 40, 15, 25};
    vector<int> weight = {1, 2, 3, 8, 7, 4};
    int W = 10;

    int output = knapsack_max_value(value, weight, W);

    cout << "Output: " << output << endl;

    return 0;
}
This C++ program follows the same logic as the Python program and includes the reconstruction of selected subject codes. You can run this program and modify the values as needed for your own inputs.

User
dont use vectors
ChatGPT
Certainly! Here's the C++ program for the knapsack problem without using vectors:

cpp
Copy code
#include <iostream>

using namespace std;

int knapsack_max_value(int value[], int weight[], int n, int W) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weight[i - 1] <= w) {
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    int result = dp[n][W];

    // Reconstruction of the selected subjects
    int i = n, w = W;
    cout << "Selected Subject Codes:";
    while (i > 0 && w > 0) {
        if (dp[i][w] != dp[i - 1][w]) {
            cout << " Subject " << i;
            w -= weight[i - 1];
        }
        i--;
    }
    cout << endl;

    return result;
}

int main() {
    int value[] = {20, 5, 10, 40, 15, 25};
    int weight[] = {1, 2, 3, 8, 7, 4};
    int n = sizeof(value) / sizeof(value[0]);
    int W = 10;

    int output = knapsack_max_value(value, weight, n, W);

    cout << "Output: " << output << endl;

    return 0;
}
In this version, arrays are used instead of vectors, as per your request. The logic remains the same, and the program includes the reconstruction of selected subject codes. Modify the values as needed for your own inputs.

User
Given an array and two numbers L and R, the task is to write a program which prints the count of numbers in the given range L - R which are divisible by all the numbers in the array.

Suppose the given array is arr[] = {1, 2, 3, 5} and the range is 1 - 30, then there is only one number(30) in this range that is divisible by all the elements of the array, so the output will be 1.

do in cpp
ChatGPT
Certainly! Here's the C++ program that counts the numbers in the given range [L, R] divisible by all the numbers in the given array:

cpp
Copy code
#include <iostream>

using namespace std;

// Function to find the greatest common divisor (GCD) of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM) of two numbers
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

// Function to count numbers in the range [L, R] divisible by all elements in the array
int countNumbersInRange(int arr[], int n, int L, int R) {
    int lcm = 1;

    // Calculate the LCM of all elements in the array
    for (int i = 0; i < n; ++i) {
        lcm = findLCM(lcm, arr[i]);
    }

    // Count numbers divisible by lcm in the range [L, R]
    int count = (R / lcm) - ((L - 1) / lcm);

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int L = 1, R = 30;

    int result = countNumbersInRange(arr, n, L, R);

    cout << "Output: " << result << endl;

    return 0;
}
This program defines functions to find the greatest common divisor (GCD) and the least common multiple (LCM). It then uses these functions to calculate the LCM of all elements in the array and counts the numbers in the given range divisible by this LCM. Modify the array and range values as needed for your specific case.
