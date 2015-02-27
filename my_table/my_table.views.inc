
<?php


/**
 * Implements hook_views_data().
 */

function my_table_views_data() {
  
 $data=array();
  
 $data['webform_submitted_data']['table']['group'] = t('Tabela Diario');
 
 $data['webform_submitted_data']['table']['base'] = array(
    'title' => t('minhatabela'),
    'help' => t('Vamos ver o que vai dar'),
  );

  // Data field.

    
  $data['webform_submitted_data']['data'] = array(
    'title' => t('valores'),
    'field' => array(
    'handler' => 'my_table_handler_field_soma',
    'click sortable' => TRUE,
  ),
  );
  
  return $data;
}


 

