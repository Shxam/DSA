# Write your MySQL query statement below
SELECT e.unique_id,p.name
FROM Employees p
LEFT OUTER JOIN EmployeeUNI e
on p.id=e.id