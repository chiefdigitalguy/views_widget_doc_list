<?php
  // print '<pre>' . htmlentities(print_r($fields, 1)) . '</pre>';
  // If you don't have devel.module installed, comment the line below and uncomment the line above.
  //dsm(array_keys($fields));
?> 

<?php //This renders the fields needed in views for the document list display, html list view doesn't support fields normally?>
<div class="penn document"><?php print $fields['penn_document']->content; ?></div>
<div class="penn doc description"><?php print $fields['penn_doc_descr']->content; ?></div>
