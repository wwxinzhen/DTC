#ifndef SQLPARSER_INSERT_STATEMENT_H
#define SQLPARSER_INSERT_STATEMENT_H

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {
enum InsertType { kInsertValues, kInsertSelect };

// Represents SQL Insert statements.
// Example: "INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)"
struct InsertStatement : SQLStatement {
  InsertStatement(InsertType type);
  ~InsertStatement() override;

  InsertType type;
  int st_start_idx;
  int st_end_idx;
  char* schema;
  char* tableName;
  std::vector<char*>* columns;
  std::vector<Expr*>* values;
  SelectStatement* select;
};

}  // namespace hsql

#endif
