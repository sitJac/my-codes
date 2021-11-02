CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE m INT;
SET m = n-1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT salary
      FROM Employee
      GROUP BY salary
      ORDER BY salary DESC
      LIMIT m, 1
  );
END

----
#Differences Between:
LIMIT 1
LIMIT 2, 3