  <?php
  /* Here we create 2 seperate views, one is an admin view with exposed filters, 
  the second is the view we render to a paragraph widget, that will eventually take 
  this view and the contextual filter as an arg */
 
function widget_doc_list_views_default_views(){
  //$views = array();
$view = new view();
$view->name = 'document_list';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Document List';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Document List';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'doc_categ',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Document Category */
$handler->display->display_options['fields']['doc_categ']['id'] = 'doc_categ';
$handler->display->display_options['fields']['doc_categ']['table'] = 'field_data_doc_categ';
$handler->display->display_options['fields']['doc_categ']['field'] = 'doc_categ';
$handler->display->display_options['fields']['doc_categ']['label'] = '';
$handler->display->display_options['fields']['doc_categ']['exclude'] = TRUE;
$handler->display->display_options['fields']['doc_categ']['element_type'] = '0';
$handler->display->display_options['fields']['doc_categ']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['doc_categ']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['doc_categ']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['doc_categ']['field_api_classes'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Document Description */
$handler->display->display_options['fields']['doc_descr']['id'] = 'doc_descr';
$handler->display->display_options['fields']['doc_descr']['table'] = 'field_data_doc_descr';
$handler->display->display_options['fields']['doc_descr']['field'] = 'doc_descr';
$handler->display->display_options['fields']['doc_descr']['label'] = '';
$handler->display->display_options['fields']['doc_descr']['element_type'] = '0';
$handler->display->display_options['fields']['doc_descr']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['doc_descr']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['doc_descr']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['doc_descr']['field_api_classes'] = TRUE;
/* Field: Content: Upload Document */
$handler->display->display_options['fields']['document']['id'] = 'document';
$handler->display->display_options['fields']['document']['table'] = 'field_data_document';
$handler->display->display_options['fields']['document']['field'] = 'document';
$handler->display->display_options['fields']['document']['label'] = '';
$handler->display->display_options['fields']['document']['element_type'] = '0';
$handler->display->display_options['fields']['document']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['document']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['document']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['document']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['document']['field_api_classes'] = TRUE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'document' => 'document',
);
/* Filter criterion: Content: Date Created (date_created) */
$handler->display->display_options['filters']['date_created_value']['id'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['table'] = 'field_data_date_created';
$handler->display->display_options['filters']['date_created_value']['field'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_created_value']['expose']['operator_id'] = 'date_created_value_op';
$handler->display->display_options['filters']['date_created_value']['expose']['label'] = 'Date Created';
$handler->display->display_options['filters']['date_created_value']['expose']['operator'] = 'date_created_value_op';
$handler->display->display_options['filters']['date_created_value']['expose']['identifier'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['date_created_value']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['date_created_value']['year_range'] = '-3:+0';
/* Filter criterion: Content: Document Category (doc_categ) */
$handler->display->display_options['filters']['doc_categ_tid']['id'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['table'] = 'field_data_doc_categ';
$handler->display->display_options['filters']['doc_categ_tid']['field'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['doc_categ_tid']['expose']['operator_id'] = 'doc_categ_tid_op';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['label'] = 'Document Category (doc_categ)';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['operator'] = 'doc_categ_tid_op';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['identifier'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['type'] = 'select';
$handler->display->display_options['filters']['doc_categ_tid']['vocabulary'] = 'doc_categ';

/* Display: Admin View */
$handler = $view->new_display('page', 'Admin View', 'page');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'document' => 'document',
);
/* Filter criterion: Content: Date Created (date_created) */
$handler->display->display_options['filters']['date_created_value']['id'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['table'] = 'field_data_date_created';
$handler->display->display_options['filters']['date_created_value']['field'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_created_value']['expose']['operator_id'] = 'date_created_value_op';
$handler->display->display_options['filters']['date_created_value']['expose']['label'] = 'Date Created';
$handler->display->display_options['filters']['date_created_value']['expose']['operator'] = 'date_created_value_op';
$handler->display->display_options['filters']['date_created_value']['expose']['identifier'] = 'date_created_value';
$handler->display->display_options['filters']['date_created_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['date_created_value']['form_type'] = 'date_popup';
$handler->display->display_options['filters']['date_created_value']['year_range'] = '-3:+0';
/* Filter criterion: Content: Document Category (doc_categ) */
$handler->display->display_options['filters']['doc_categ_tid']['id'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['table'] = 'field_data_doc_categ';
$handler->display->display_options['filters']['doc_categ_tid']['field'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['doc_categ_tid']['expose']['operator_id'] = 'doc_categ_tid_op';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['label'] = 'Document Category';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['operator'] = 'doc_categ_tid_op';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['identifier'] = 'doc_categ_tid';
$handler->display->display_options['filters']['doc_categ_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['doc_categ_tid']['type'] = 'select';
$handler->display->display_options['filters']['doc_categ_tid']['vocabulary'] = 'doc_categ';
$handler->display->display_options['path'] = 'document-list';

/* Display: Doc List View */
$handler = $view->new_display('page', 'Doc List View', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Document List View';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['tid']['title'] = '%1';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'document' => 'document',
);
$handler->display->display_options['path'] = 'document-list-view';



$views[$view->name] = $view;

return $views;
}
  ?>