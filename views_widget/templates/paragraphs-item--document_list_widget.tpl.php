<?php 
  //$view_name = isset($content['field_view_name']) ? trim(render($content['field_view_name'])) : '';
  //$view_display = isset($content['field_view_display']) ? trim(render($content['field_view_display'])) : '';

 //here we render the view based on the taxonomy id argument, which comes from the drop down in the doc list widget
  $term = isset($doc_categ) ? render($doc_categ[0]['tid']) : '';
  //dpm($term);
  //if($view_name && $view_display) {
    print views_embed_view('document_list', 'page_1', $term/*, $term*/);    
  //}
  //dpm(get_defined_vars());
 views_widget_access();

/**
 * Implementation of hook_menu()
 */
/*function views_widget_menu() {
    $items['admin/config/document-list/add-document'] = array(
        'title' => 'Add a Document to the Document Content Type',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('views_widget_settings_form'),
        'access callback' => 'views_widget_access',
        'access arguments' => array('view published content'),
        'type' => MENU_CALLBACK,
        'file' => 'views_widget.pages.inc',
    );
    return $items;
}*/

    /*function views_widget_add(){
        $msg = 'returning views_widget_add';
        return $msg;
    }*/

    //Here we add a link to the bottom of the created view to add an additional document, drupal_get_destination will bring the user back to the view page once they've added a new doc
    function views_widget_access(){
        global $user;
        $result = FALSE;
        if (user_access('Upload Document: Create new content', $user)){
            $result = TRUE;
            $output = l(t('Add new document'), 'node/add/penn-document', array('query' => drupal_get_destination()));
            print $output;
        }
        return $result;
    }
?>