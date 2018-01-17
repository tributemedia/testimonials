<?php
/**
 * @file
 * testimonials.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function testimonials_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-tribute_testimonials-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tribute_testimonials-block_1',
    'module' => 'views',
    'node_types' => array(),
    'options' => NULL,
    'pages' => 'testimonials',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tribute_testimonials-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tribute_testimonials-block_2',
    'module' => 'views',
    'node_types' => array(),
    'options' => 'a:0:{}',
    'pages' => 'testimonials',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Testimonials',
    'visibility' => 0,
  );

  return $export;
}
