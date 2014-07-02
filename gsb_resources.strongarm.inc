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
  $strongarm->name = 'resources_resource_image_file_type';
  $strongarm->value = 'resource_image';
  $export['resources_resource_image_file_type'] = $strongarm;

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
  $strongarm->name = 'resources_resource_youtube_file_type';
  $strongarm->value = 'resource_youtube';
  $export['resources_resource_youtube_file_type'] = $strongarm;

  return $export;
}
