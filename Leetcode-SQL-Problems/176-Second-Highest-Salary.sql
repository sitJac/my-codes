# Write your MySQL query statement below

#solution 1
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (
            SELECT MAX(salary)
            FROM Employee
)
ORDER BY salary DE

#solution 2
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (
            SELECT salary
            FROM Employee
            ORDER BY salary DESC
            LIMIT 1
)