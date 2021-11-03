# Write your MySQL query statement below
SELECT tb1.name AS Employee
FROM Employee AS tb1 
LEFT JOIN Employee AS tb2
ON tb1.managerId = tb2.id
WHERE tb1.salary > tb2.salary