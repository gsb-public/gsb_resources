<?php
/**
 * @file
 * gsb_resources.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_resources_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_browser_preview_view_mode';
  $strongarm->value = 'resource_browser_preview';
  $export['resources_browser_preview_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_default_resource_twitter_widget_id';
  $strongarm->value = '349871814417199107';
  $export['resources_default_resource_twitter_widget_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_callout_file_type';
  $strongarm->value = 'resource_pull_quote';
  $export['resources_resource_callout_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_callout_view_modes';
  $strongarm->value = array();
  $export['resources_resource_callout_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_image_file_type';
  $strongarm->value = 'resource_image';
  $export['resources_resource_image_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_image_view_modes';
  $strongarm->value = array(
    'full_width' => 'full_width',
    '1_2_width' => '1_2_width',
    '1_3_width' => '1_3_width',
  );
  $export['resources_resource_image_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_pull_quote_file_type';
  $strongarm->value = 'resource_pull_quote';
  $export['resources_resource_pull_quote_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_twitter_file_type';
  $strongarm->value = 'resource_twitter';
  $export['resources_resource_twitter_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_twitter_view_modes';
  $strongarm->value = array();
  $export['resources_resource_twitter_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_youtube_file_type';
  $strongarm->value = 'resource_youtube';
  $export['resources_resource_youtube_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'resources_resource_youtube_view_modes';
  $strongarm->value = array(
    '1_2_width' => '1_2_width',
    '1_3_width' => '1_3_width',
    'full_width' => 'full_width',
  );
  $export['resources_resource_youtube_view_modes'] = $strongarm;

  return $export;
}
