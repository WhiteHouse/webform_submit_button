<?php

/**
 * @file
 * Webform Submit Button component.
 */

/**
 * Implements _webform_render_component().
 *
 * This is necessary so that there is a placeholder in the form render array
 * where the webform submit button can be moved to.
 */
function _webform_render_submit_button($component, $value = NULL, $filter = TRUE) {
  $wrapper = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('placeholder-for-submit-button'),
    ),
  );

  return $wrapper;
}

/**
 * Implements _webform_edit_component().
 */
function _webform_edit_submit_button($component) {
  // Force the parent to always be root.
  $form['position']['placeholder'] = array(
    '#type' => 'hidden',
    '#value' => '0',
  );
  return $form;
}


/**
 * Implements _webform_defaults_component().
 */
function _webform_defaults_submit_button() {
  return array(
    'name' => '',
    'form_key' => NULL,
    'extra' => array(),
  );
}
