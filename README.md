# Testimonials

The Testimonials module provides the Testimonials content type, sample content, and view with page, standard block, and rotating block displays.

## Requirements

  

This module requires the following contributed modules:

  

* Maxlength - https://www.drupal.org/project/maxlength
* Block Class - https://www.drupal.org/project/block_class
* SVG Image - https://www.drupal.org/project/svg_image
* Slick - https://www.drupal.org/project/slick
* Slick Views - https://www.drupal.org/project/slick_views

**Make sure the libraries required by Slick are installed before attempting to use the module.** More details about their required libraries, and installation steps, can be found on their project page.

## Installation and Usage

This module requires the followin

1. Install using composer. `composer require tributemedia/testimonials`

2. Add the testimonials to the site through Content / Add Content / Testimonial (/node/add/testimonial).

- If the testimonials are coming from a site that we have access to, log into the site and navigate to the content pane. Filter by the testimonial content type and copy the fields over. (if they don’t have a business title or business name, that is fine).

- Name → Name

- Business Title → Title (Found in Additional Details)

- Business Name → Company Name (Found in Additional Details)

- Snippet / Body → Body (If the testimonial is over 150 characters in length, find a sentence from the testimonial that conveys the main idea of the testimonial that is 150 characters or less and put it in the Summary).

- Save

- Repeat with all testimonials on the old site.

- If the testimonials are coming from another site that we do not have access to, fill out as much information as possible. At the very least, try to get the name / company, and the testimonial. (If the testimonial is over 150 characters in length, find a sentence from the testimonial that conveys the main idea of the testimonial that is 150 characters or less and put it in the Summary).

- If the testimonials are coming from the content outline, make sure that all the information from the content outline makes it into the testimonial. The document should have the Name, Body, and the Summary at least, but if other information is included, please include it as well.

3. Configure blocks as necessary