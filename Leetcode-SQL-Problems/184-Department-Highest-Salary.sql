# Write your MySQL query statement below
SELECT tb2.name AS Department, tb1.name AS Employee, tb1.salary AS Salary
FROM Employee as tb1
LEFT JOIN Department as tb2
ON tb1.departmentId = tb2.id
WHERE (tb2.id, tb1.Salary) IN (SELECT departmentId, MAX(salary)
                               FROM Employee
                               GROUP BY departmentId)