use hr;
select * from employees e left join
	departments d on e.department_id = d.department_id
union
select * from employees e right join
	departments d on
	e.department_id = d.department_id