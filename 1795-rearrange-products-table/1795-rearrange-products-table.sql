# Write your MySQL query statement below
select * from 
(select product_id, "store1" as store, store1 as price from Products
union 
select product_id, "store2", store2 from Products
union
select product_id, "store3", store3 from Products) sub where price is not null;
