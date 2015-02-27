<?php


 

 


function mapa_extra($wildcard){
    
   $content = array(

    'mapa_extra' => array(
    '#theme' => 'mapa',
    '#attached' => array(
      'css' => array(
        array(
        'type' => 'file',
        'data' => drupal_get_path('module', 'mapa') . '/theme/mapa.css',
        ),),
     ),
    '#type'  => 'markup',
    '#markup' => '<p>'. T('teste teste teste') .'</p>',
    ),
    );

        $estados = Array();
        $estados[0] = 'AC';
        $estados[1] = 'AM';
        $estados[2] = 'Roraima';
        $estados[3] = 'Amap�';
        $estados[4] = 'Maranh�o';
        $estados[5] = 'Rond�nia';
        $estados[6] = 'Mato Grasso';
        $estados[7] = 'Mato Grasso do Sul';
        $estados[8] = 'Goi�s';
        $estados[9] = 'Paran�';
        $estados[10] = 'SP';
        $estados[11] = 'RJ';
        $estados[12] = 'Esp�rito Santo';
        $estados[13] = 'Minas Gerais';
        $estados[14] = 'Santa Catarina';
        $estados[15] = 'Rio Grande do Sul';;
        $estados[16] = 'Tocantins';
        $estados[17] = 'Bahia';
        $estados[18] = 'Sergipe';
        $estados[19] = 'Alagoas';
        $estados[20] = 'Piau�';
        $estados[21] = 'Cear�';
        $estados[22] = 'Rio Grande do Norte';
        $estados[23] = 'Para�ba';
        $estados[24] = 'Pernanbuco';
        $estados[25] = 'Par�';  
    
  
for($i=0;$i<26;$i++){
  if ($wildcard==$i){
  $query = db_select('mapa', 'mp')
  ->condition ('mp.estado', $estados[$i])
  ->fields('mp', array('estado', 'nome', 'telefone', 'email',));
  $resultado = $query->execute();
    
    foreach($resultado as $record){ 
     print '<p>' .  $estados[$i] . '</p>';
     print '<div>';
     print '<li>' . $record->nome . '</li>';
     print '<li>' . $record->telefone . '</li>';
     print '<li>' . $record->email . '</li>';
     print '</div>';
     }
    }
  }
    
  return $content;
 }

  
