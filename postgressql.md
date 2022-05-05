### ---------------- console [login to the console] -------------

`> sudo -i -u postgres psql`


# Databases

### List Databases
* List databases
` \l => List all databases using \l (or \list) (psql)`

* List databases
`\l+
// List all databases using \l+ with more details (including description, tablespace & DB size) (psql)
`
### Help on CREATE DATABASE command syntax
` \h CREATE DATABASE
==> Help on SQL Command Syntax (For e.g. CREATE DATABASE) (psql)
`

* Create database
`
CREATE DATABASE mytest;
==> Creates a new database “mytest” (SQL)
`
By default, the owner of the database is the current login user.

* Connect to database

` \c test
You are now connected to database "test" as user "postgres".
==> Connect to a PostgreSQL database “test” as “postgres” user (psql)`

* show the current connected 🔃 database in the console
`  SELECT current_database(); `



### Script to connect 🌎  to specific database 
* in my case here my database is node_test password is password 

so instead of 

```
$ sudo -u postgres psql
$ \c node_test
```
ONly Run the script
```
#!/bin/sh
DATABASE=node_test
USERNAME=postgres
HOSTNAME=localhost
export PGPASSWORD=pass

psql -h $HOSTNAME -U $USERNAME $DATABASE


```






#### Resources 🧾 🚀💡
* [psql script connect to specific database](https://www.folkstalk.com/2014/05/connect-to-postgres-database-in-unix-shell-script.html)






