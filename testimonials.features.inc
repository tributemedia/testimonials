<?php
/**
 * @file
 * testimonials.features.inc
 */

/**
 * Implements hook_views_api().
 */
function testimonials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function testimonials_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('A testimonial content type for the Tribute Testimonial Feature'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('<p>Fill out the Name field with the name of the person or organization. Fill out the body field with the testimony.</p>
<p>Note that all fields except for the name are required. The snippet is what will be shown in the sidebar block and the main testimonial page. If you enter a body field, that will only be shown on the individual testimonial page.</p>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
