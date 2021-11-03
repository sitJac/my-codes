# Write your MySQL query statement below
SELECT tb1.score AS score, (SELECT COUNT(distinct tb2.score)
                        FROM Scores AS tb2
                        WHERE tb1.score < tb2.score
                        ) + 1 AS "rank"
FROM Scores AS tb1
ORDER BY score DESC