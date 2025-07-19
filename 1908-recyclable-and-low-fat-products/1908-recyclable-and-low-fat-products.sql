# Write your MySQL query statement below
SELECT p.product_id 
from Products p
where low_fats='Y' and p.recyclable='Y'