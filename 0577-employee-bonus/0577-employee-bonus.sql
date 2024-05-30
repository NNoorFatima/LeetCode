/* Write your T-SQL query statement below */
select employee.name, Bonus.bonus from Employee 
left join bonus on employee.empid= bonus.empId
where bonus.bonus<1000 or bonus.bonus is null;