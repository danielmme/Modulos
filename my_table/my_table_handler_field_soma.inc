<?php

class my_table_handler_field_soma extends views_handler_field_numeric {
  function construct() {
    parent::construct();
    $this->additional_fields['data'] = 'data';
    $this->definition['float'] = TRUE;
  }


  function pre_render(&$values) {
    parent::pre_render($values);

      foreach($values as $key => $row) {
             
        print '<pre>';
        print_r ($values);
        print '</pre>';
        
      
    
    
      
    }
  }

}
