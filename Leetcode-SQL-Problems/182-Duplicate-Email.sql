# Write your MySQL query statement below
SELECT DISTINCT tb1.email as Email
FROM Person as tb1, Person as tb2
WHERE tb1.id != tb2.id AND tb1.email = tb2.email;