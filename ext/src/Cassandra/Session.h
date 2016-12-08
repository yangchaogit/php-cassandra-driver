/**
 * Copyright 2015-2016 DataStax, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PHP_CASSANDRA_SESSION_H
#define PHP_CASSANDRA_SESSION_H

void php_cassandra_session_init(cassandra_session_base *session);

void php_cassandra_session_destroy(cassandra_session_base *session);

void php_cassandra_session_execute(cassandra_session_base *session,
                                   zval *statement,
                                   zval *options,
                                   zval *return_value TSRMLS_DC);

void php_cassandra_session_execute_async(cassandra_session_base *session,
                                         zval *statement,
                                         zval *options,
                                         zval *return_value TSRMLS_DC);

void php_cassandra_session_prepare(cassandra_session_base *session,
                                   zval *cql,
                                   zval *options,
                                   zval *return_value TSRMLS_DC);

void php_cassandra_session_prepare_async(cassandra_session_base *session,
                                         zval *cql,
                                         zval *options,
                                         zval *return_value TSRMLS_DC);

void php_cassandra_session_close(cassandra_session_base *session,
                                 zval *timeout,
                                 zval *return_value TSRMLS_DC);

void php_cassandra_session_close_async(cassandra_session_base *session,
                                       zval *return_value TSRMLS_DC);

void php_cassandra_session_schema(cassandra_session_base *session,
                                  zval *return_value TSRMLS_DC);

#endif /* PHP_CASSANDRA_SESSION_H */