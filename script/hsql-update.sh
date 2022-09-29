wget https://github.com/DTC8/sql-parser/releases/download/hsql.forked-v1/hsql.forked-v1.tar.gz -O hsql.tar.gz
tar -zxvf hsql.tar.gz
cp -rf hsql/include/ ../src/libs/hsql/
cp -f hsql/libs/libsqlparser.so ../src/libs/hsql/libs/libsqlparser.so
cp -f hsql/libs/libsqlparser.a ../src/libs/hsql/libs/libsqlparser.a
rm -rf hsql/
rm -rf hsql.tar.gz