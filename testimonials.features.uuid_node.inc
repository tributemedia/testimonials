<?php
/**
 * @file
 * testimonials.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function testimonials_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Somme Juan',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'testimonials',
  'language' => 'und',
  'created' => 1509570376,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '94c06394-4d2e-49ec-85cf-96bbea9dddd1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Vivamus imperdiet bibendum adipiscing ligula magnis scelerisque varius pretium habitant consectetur neque elit per elit. Dignissim consectetur orci condimentum sodales parturient ultrices tempus class rhoncus curabitur ullamcorper dignissim ut id a condimentum fusce eu suscipit nullam cum est.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_business_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Management',
        'format' => NULL,
      ),
    ),
  ),
  'field_business_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Another Co.',
        'format' => NULL,
      ),
    ),
  ),
  'field_snippet' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Vivamus imperdiet bibendum adipiscing ligula magnis scelerisque varius pretium habitant consectetur neque elit per elit. Dignissim consectetur orci condimentum sodales parturient ultrices tempus class rhoncus curabitur ullamcorper dignissim ut id a condimentum fusce eu suscipit nullam.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-11-01 15:06:16 -0600',
  'user_uuid' => 'cf95eaf2-e246-4907-8df7-1d1c16b706f4',
);
  $nodes[] = array(
  'title' => 'Anne M. Ployee',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'testimonials',
  'language' => 'und',
  'created' => 1509570312,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b4838157-fa20-4115-aad2-a3c6aa2ca178',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A magnis consequat volutpat a at vulputate eros praesent aliquet per morbi a vestibulum habitant suspendisse morbi laoreet a molestie condimentum rutrum dolor duis rutrum. Non a mollis taciti venenatis viverra a vel at cursus in adipiscing a parturient gravida.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_business_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Manager',
        'format' => NULL,
      ),
    ),
  ),
  'field_business_name' => array(
    'und' => array(
      0 => array(
        'value' => 'A Company',
        'format' => NULL,
      ),
    ),
  ),
  'field_snippet' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A magnis consequat volutpat a at vulputate eros praesent aliquet per morbi a vestibulum habitant suspendisse morbi laoreet a molestie condimentum rutrum dolor duis rutrum. Non a mollis taciti venenatis viverra a vel at cursus in adipiscing a parturient gravida.</p>
',
        'format' => 'full_html',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2017-11-01 15:05:12 -0600',
  'user_uuid' => 'cf95eaf2-e246-4907-8df7-1d1c16b706f4',
);
  return $nodes;
}
