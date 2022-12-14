<?php
/**
 * @file
 * pages_context.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pages_context_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');

  return $menus;
}
