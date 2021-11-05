# Write your MySQL query statement below
SELECT tb2.name AS Department, tb1.name AS Employee, tb1.salary AS Salary
FROM Employee AS tb1
JOIN Department AS tb2
ON tb1.departmentId = tb2.id
WHERE(SELECT COUNT(DISTINCT(salary))
      FROM Employee AS tb3
      WHERE tb3.departmentId = tb1.departmentId AND tb3.salary > tb1.salary
     ) < 3