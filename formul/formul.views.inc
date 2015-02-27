<?php

/**
 * Implements hook_views_data().
 */
    function formul_views_data(){
      $data['formul']['table']['group'] = t('tabela');

      $data['formul']['table']['base'] = array(
        'field' => 'nid',
        'title' => t('tabela'),
        'help' => t('Contains records we want exposed to Views.'),
      );
      
      $data['my_table']['table']['join'] = array(
      'node' => array(
      'left_field' => 'nid', 
      'field' => 'nid',
    ),
    );
 
     return $data;
 
    }


