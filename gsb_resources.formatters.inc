<?php

/**
 * Implements hook_field_formatter_info().
 */
function gsb_resources_field_formatter_info() {
  $formatters = array(
    'image_enlarge' => array(
      'label' => t('Image with enlarge button'),
      'field types' => array('image'),
      'settings' => array('image_style' => '', 'image_link' => ''),
    ),
  );

  return $formatters;
}


/**
 * Implements hook_field_formatter_settings_form().
 */
function gsb_resources_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  return image_field_formatter_settings_form($field, $instance, $view_mode, $form, $form_state);
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function gsb_resources_field_formatter_settings_summary($field, $instance, $view_mode) {
  return image_field_formatter_settings_summary($field, $instance, $view_mode);
}

/**
 * Implements hook_field_formatter_view().
 */
function gsb_resources_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  if ($items[0]['filemime'] == 'image/gif') {
    unset($display['settings']['image_style']);
  }
  $elements = image_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display);

  // If field_click_to_expand is enabled, then add a link to open image in a new window.
  if (!empty($entity->field_click_to_expand[LANGUAGE_NONE][0]['value'])) {
    foreach ($elements as &$element) {
      $element['#suffix'] = '<div class="image-enlarge-bar">';
      $element['#suffix'] .= l(t('View Larger'), file_create_url($entity->uri), array(
        'attributes' => array(
          'class' => array('image-enlarge-button'),
          'target' => '_blank'
        ),
      ));
      $element['#suffix'] .= '</div>';
    }
  }

  return $elements;
}

