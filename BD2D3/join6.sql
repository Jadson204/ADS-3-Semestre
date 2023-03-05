use hr;

select department_id, count(*) as
	'quantidade_funcionarios' from
employees group by department_id;

select department_name, count(*) as
	'quantidade_funcionarios' from
employees e inner join departments d on
e.department_id = d.department_id
	group by d.department_id;