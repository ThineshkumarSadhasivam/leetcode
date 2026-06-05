# Write your MySQL query statement below
select emp.name as Employee from Employee as emp inner join Employee as mgr on emp.managerid=mgr.id where emp.salary>mgr.salary;