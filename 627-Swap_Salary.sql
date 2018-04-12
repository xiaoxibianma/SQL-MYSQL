Given a table salary, such as the one below, that has m=male and f=female values. Swap all f and m values (i.e., change all f values to m and vice versa) with a single update query and no intermediate temp table.
For example:
| id | name | sex | salary |
|----|------|-----|--------|
| 1  | A    | m   | 2500   |
| 2  | B    | f   | 1500   |
| 3  | C    | m   | 5500   |
| 4  | D    | f   | 500    |
After running your query, the above salary table should have the following rows:
| id | name | sex | salary |
|----|------|-----|--------|
| 1  | A    | f   | 2500   |
| 2  | B    | m   | 1500   |
| 3  | C    | f   | 5500   |
| 4  | D    | m   | 500    |


Myanswer:
-- use update (change value)
update salary set sex= if(sex='m','f','m')

-- (not change value)
create table salary( id int primary key auto_increment,
   name varchar(3) not null, sex enum('m','f'), salary int not null);
insert into salary (name, sex, salary) values ( 'A','m',2500),
  ( 'B','f',1500),( 'C','m',5500),( 'D','f',500);

select  id, name, if(sex='m','f','m')as sex, salary
from salary
