select e.first_name, e.last_name, j.job_title, d.department_name
from employees e inner join
	jobs j on e.job_id = j.job_id
    inner join departments d on
    e.department_id = d.department_id;