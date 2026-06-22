# Write your MySQL query statement below
select 
p.firstName,
p.lastName, 
a.city , 
a.state
from person p 
Left Join Address a
ON p.personId = a.personId ; 