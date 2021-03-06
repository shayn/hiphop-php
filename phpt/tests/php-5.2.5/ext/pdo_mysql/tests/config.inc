<?php

if (false !== getenv('PDO_MYSQL_TEST_DSN')) {
    # user set them from their shell
    $config['ENV']['PDOTEST_DSN'] = getenv('PDO_MYSQL_TEST_DSN');  
    $config['ENV']['PDOTEST_USER'] = getenv('PDO_MYSQL_TEST_USER');
    $config['ENV']['PDOTEST_PASS'] = getenv('PDO_MYSQL_TEST_PASS');
    if (false !== getenv('PDO_MYSQL_TEST_ATTR')) {
        $config['ENV']['PDOTEST_ATTR'] = getenv('PDO_MYSQL_TEST_ATTR');
    }   
} else {
    $config['ENV']['PDOTEST_DSN'] = 'mysql:host=localhost;dbname=test';
    $config['ENV']['PDOTEST_USER'] = 'root';
    $config['ENV']['PDOTEST_PASS'] = '';
}

foreach ($config['ENV'] as $k => $v) {
	putenv("$k=$v");
}
