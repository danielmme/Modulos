<?php


function mapa_extra($wildcard){
  // Create some content
  $content = array
  (
    '#type'  => 'markup', 
    '#markup' => '<p>' . t('contem o valor "%wildcard".', array('%wildcard'=>$wildcard)) .'</p>',
    '#prefix' => '<div id="info">',
    '#suffix' => '</div>',
  );


  return $content;
}
