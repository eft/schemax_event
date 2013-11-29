<?php
/**
 * @file
 * schemax_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function schemax_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function schemax_event_node_info() {
  $items = array(
    'schemax_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An activity that has an associated start date.  An event can optionally have an end date, repeat at regular intervals and occur on part of a day or all day.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
