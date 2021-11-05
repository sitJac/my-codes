# Write your MySQL query statement below
SELECT tb1.id
FROM Weather as tb1
INNER JOIN Weather as tb2
ON tb1.temperature > tb2.temperature AND DATEDIFF(tb1.recordDate, tb2.recordDate) = 1
WHERE tb1.recordDate > tb2.RecordDate