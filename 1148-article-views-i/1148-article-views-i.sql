# Write your MySQL query statement below
SELECT distinct(AUTHOR_ID) AS ID 
FROM VIEWS 
WHERE (AUTHOR_ID = VIEWER_ID) 
ORDER BY AUTHOR_ID;