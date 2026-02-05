# Write your MySQL query statement below
select r.unique_id , k.name 
from Employees k LEFT OUTER JOIN EmployeeUNI r 
ON k.id=r.id
;
