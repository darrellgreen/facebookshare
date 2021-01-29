function facebookshare_admin_settings() {
  $form['facebookshare_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content types'),
    '#description' => t('Which content types to apply the facebookshare button to.'),
    '#options' => node_get_types('names'),
    '#default_value' => variable_get('facebookshare_types', array()),
  );
  $form['facebookshare_location'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Location'),
    '#description' => t('Where to show the facebookshare button.'),
    '#options' => array(
      'content' => t('Full view'),
      'teasers' => t('Teasers'),
    ),
    '#default_value' => variable_get('facebookshare_location', array()),
  );
  $form['facebookshare_style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#description' => t('The style of the button to use.'),
    '#options' => array(
      'normal' => t('box_count'),
      'compact' => t('button_count'),
    ),
    '#default_value' => variable_get('facebookshare_style', 'normal'),
  );
  return system_settings_form($form);
}