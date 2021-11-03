# Write your MySQL query statement below
SELECT DISTINCT tb1.num AS ConsecutiveNUms
FROM logs AS tb1, logs AS tb2, logs AS tb3
WHERE tb2.id = tb1.id + 1 AND tb3.id = tb2.id + 1 AND tb1.num = tb2.num AND tb2.num = tb3.num