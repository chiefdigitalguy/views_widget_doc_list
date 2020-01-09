<?php
function _create_document_list_widget() {
  $bundle = new stdClass();
  $bundle->name = 'Document List - Widget'; // user friendly label
  $bundle->bundle = 'document_list_widget'; // machine name
  $bundle->locked = 1;
  $status = paragraphs_bundle_save($bundle);

  $fields_array = array(
  

    //adding taxonomy field to widget
    array(
    'field' => array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'doc_categ',
    'indexes' => array(
      'tid' => array(
        1 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'doc_categ',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  ),
  //instance
  'instance' => array(
     'bundle' => 'document_list_widget',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The category of the document',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'doc_categ',
    'label' => 'Document Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  )
    )
  );
  foreach ($fields_array as $field) {
    // Check if field already exists
    if (!field_info_field($field['field']['field_name'])) {
      field_create_field($field['field']);
    }
    // Check if instance exists
    if (!field_info_instance($field['instance']['entity_type'], $field['instance']['field_name'], $field['instance']['bundle'])) {
      field_create_instance($field['instance']);
    }
  }
} 
