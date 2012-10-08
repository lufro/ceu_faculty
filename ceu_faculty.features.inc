<?php
/**
 * @file
 * ceu_faculty.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceu_faculty_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ceu_faculty_node_info() {
  $items = array(
    'profile_faculty' => array(
      'name' => t('Profile-Faculty'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name (Last, First)'),
      'help' => '',
    ),
  );
  return $items;
}
