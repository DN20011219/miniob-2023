/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by dingning on 2024/8/1.
//

#include "storage/db/db.h"
#include "sql/stmt/drop_table_stmt.h"
#include "event/sql_debug.h"

RC DropTableStmt::create(Db *db, const DropTableSqlNode &drop_table, Stmt *&stmt)
{
  if (db->find_table(drop_table.relation_name.c_str()) == nullptr) {
    return RC::SCHEMA_TABLE_NOT_EXIST;
  }
  stmt = new DropTableStmt(drop_table.relation_name);
  sql_debug("drop table statement: table name %s", drop_table.relation_name.c_str());
  return RC::SUCCESS;
}
