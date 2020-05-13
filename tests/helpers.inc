<?php

if (!function_exists('app_path')) {
    /**
     * @param $suffix
     * @return string
     */
    function app_path($suffix)
    {
        return __DIR__ . '/dist/app' . get_suffix('/', $suffix);
    }
}

if (!function_exists('database_path')) {
    /**
     * @param $suffix
     * @return string
     */
    function database_path($suffix)
    {
        return __DIR__ . '/dist/database' . get_suffix('/', $suffix);
    }
}

if (!function_exists('base_path')) {
    /**
     * @param $suffix
     * @return string
     */
    function base_path($suffix)
    {
        return __DIR__ . '/dist' . get_suffix('/', $suffix);
    }
}

if (!function_exists('date')) {
    /**
     * @param $format
     * @return string
     */
    function date($format)
    {
        return 'date';
    }
}

if (!function_exists('get_suffix')) {
    /**
     * @param $search
     * @param $string
     * @return bool
     */
    function get_suffix($search, $string)
    {
        return strpos($string, $search) === 0 ? $string : '/' . $string;
    }
}
