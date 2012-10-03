<?php
/**
 * @file
 * ceu_faculty.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ceu_faculty_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|profile_faculty|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '6',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
      2 => 'field_building',
      3 => 'field_room',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_contact|node|profile_faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|profile_faculty|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '7',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
      2 => 'field_building',
      3 => 'field_room',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|profile_faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core|node|profile_faculty|form';
  $field_group->group_name = 'group_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_basic_file_file',
      2 => 'field_related_links',
      3 => 'field_academic_areas',
      4 => 'field_tags',
      5 => 'field_featured_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_core|node|profile_faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|profile_faculty|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CEU data',
    'weight' => '6',
    'children' => array(
      0 => 'field_unit',
      1 => 'field_position',
      2 => 'field_rank',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_data|node|profile_faculty|form'] = $field_group;

  return $export;
}
