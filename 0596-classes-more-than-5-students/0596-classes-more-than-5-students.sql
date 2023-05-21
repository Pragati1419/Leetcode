# Write your MySQL query statement below
Select 
class from courses 
Group by class
having count(student) >= 5;