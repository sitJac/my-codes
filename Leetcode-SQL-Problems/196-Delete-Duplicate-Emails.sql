# Write your MySQL query statement below
DELETE tb1
FROM Person as tb1, Person as tb2
WHERE tb1.email = tb2.email AND tb1.id > tb2.id