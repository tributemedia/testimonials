# Testimonials
The Testimonials module provides the Testimonials content type, sample content, and view with page, standard block, and rotating block displays.

## Installation
Link to additional documentation [here](https://docs.google.com/document/d/1JlB25RPxkVDUGS8ogLjT-z7Pe8eTcDIVlV_PQh5kYXU/edit#).
1. Open the Pantheon dashboard to the development environment for the site.
2. Make sure the environment is in SFTP mode and connect to the environment in your SFTP client of choice.
3. Drop the testimonials folder into the custom folder (/code/web/modules/custom).
4. Commit the changes.
5. Navigate to the modules panel in the Drupal interface to see if you can enable the testimonials module. Found by clicking on extend in the menu (/admin/modules). If you are unable to enable the product_catalog module, follow the steps [here](https://docs.google.com/document/d/1ARpeaIfBfv9leLPqFa-UFjgfwMUWgOKUSEv_-JWP2sk/edit#heading=h.4bd8pff8ykpy).
6. Navigate to /testimonials on the development site and remove all blocks that are associated with the testimonial page
7. Add the testimonials to the site through Content / Add Content / Testimonial (/node/add/testimonial).
 - If the testimonials are coming from a site that we have access to, log into the site and navigate to the content pane. Filter by the testimonial content type and copy the fields over. (if they don’t have a business title or business name, that is fine).
    - Name → Name
    - Business Title → Title (Found in Additional Details)
    - Business Name → Company Name (Found in Additional Details)
    - Snippet / Body → Body (If the testimonial is over 150 characters in length, find a sentence from the testimonial that conveys the main idea of the testimonial that is 150 characters or less and put it in the Summary).
    - Save
    - Repeat with all testimonials on the old site.
 - If the testimonials are coming from another site that we do not have access to, fill out as much information as possible. At the very least, try to get the name / company, and the testimonial. (If the testimonial is over 150 characters in length, find a sentence from the testimonial that conveys the main idea of the testimonial that is 150 characters or less and put it in the Summary).
 - If the testimonials are coming from the content outline, make sure that all the information from the content outline makes it into the testimonial. The document should have the Name, Body, and the Summary at least, but if other information is included, please include it as well.
8. Configure blocks as necessary

## Requirements

This module requires the following contributed modules:

* Views Slideshow - https://www.drupal.org/project/views_slideshow
* Maxlength - https://www.drupal.org/project/maxlength
* Block Class - https://www.drupal.org/project/block_class
* SVG Image - https://www.drupal.org/project/svg_image

This module requires the following libraries:

* jquery.cycle - make sure you have the jquery.cycle.all.js
  (http://malsup.github.io/jquery.cycle.all.js) file in the libraries folder as
  follows: /libraries/jquery.cycle/jquery.cycle.all.js
* json2 - download the library
  (https://github.com/douglascrockford/JSON-js/blob/master/json2.js) and place it
  in a folder called json2 in the libraries folder as follows:
  /libraries/json2/json2.js
