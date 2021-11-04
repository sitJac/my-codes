# Write your MySQL query statement below
SELECT tb1.name AS Customers
FROM Customers as tb1
LEFT JOIN Orders as tb2
ON tb1.id = tb2.customerId
WHERE tb2.id is NULL;