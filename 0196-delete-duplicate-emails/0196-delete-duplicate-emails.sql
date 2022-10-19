# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
Delete p1 from person p1,person p2
where
p1.email=p2.email AND p1.Id>p2.Id
