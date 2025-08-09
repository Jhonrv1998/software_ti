$datadir = "C:/ProgramData/MySQL/MySQL Server 8.0/Data"
$config = @"
[mysqld]
port=3306
datadir="$datadir"
default_authentication_plugin=mysql_native_password
sql_mode=NO_ENGINE_SUBSTITUTION,STRICT_TRANS_TABLES
"@
$config | Set-Content -Path "C:\ProgramData\MySQL\MySQL Server 8.0\my.ini" -Encoding UTF8
