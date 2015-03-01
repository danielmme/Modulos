<?php


function mapa_extra($wildcard){
    
        $estados = Array();
        $estados[1] = 'AC';
        $estados[2] = 'AM';
        $estados[3] = 'RR';
        $estados[4] = 'AP';
        $estados[5] = 'MA';
        $estados[6] = 'RO';
        $estados[7] = 'MT';
        $estados[8] = 'MS';
        $estados[9] = 'GO';
        $estados[10] = 'PR';
        $estados[11] = 'SP';
        $estados[12] = 'RJ';
        $estados[13] = 'ES';
        $estados[14] = 'MG';
        $estados[15] = 'SC';
        $estados[16] = 'RS';
        $estados[17] = 'TO';
        $estados[18] = 'BH';
        $estados[19] = 'SE';
        $estados[20] = 'AL';
        $estados[21] = 'PI';
        $estados[22] = 'CE';
        $estados[23] = 'RN';
        $estados[24] = 'PB';
        $estados[25] = 'PE';
        $estados[26] = 'PA';  
 

  if ( is_numeric($wildcard) && 1<= $wildcard && $wildcard <=26){
  
  for($i=1;$i<27;$i++){
  if (is_numeric($wildcard) && $wildcard==$i){
  $query = db_select('mapa', 'mp')
  ->condition ('mp.estado', $estados[$i])
  ->fields('mp', array('estado', 'nome', 'telefone', 'email',));
  $resultado = $query->execute();
    
    foreach($resultado as $record){
   
     $var_estado[]=$record->estado;
      $var_nome[]=$record->nome;
       $var_telefone[]=$record->telefone;
        $var_email[]=$record->email;   
    }
    }
  }
  if(!isset($var_estado)|!isset($var_nome) | !isset($var_telefone) | !isset($var_email)){
    $var_estado="";
       $var_nome="";
          $var_telefone="";
             $var_email="";
  }
  

  return theme('mapa', array('var_estado'=>$var_estado,'var_nome'=>$var_nome,'var_telefone'=>$var_telefone,'var_email'=>$var_email,));
  }
  
  else {
  return drupal_not_found();
  }
    
  }

  

