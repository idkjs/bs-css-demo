/**
 * This file contains the exact types of the theme fields.
 * It is intentional to require very specific types of values for the fields
 * so that we are able to calculate with them without the risk
 * of ending up e.g. summing pixels with points.
 */
open Css;

type theme = {
  .
  "primaryColor": [ | `hex(string)],
  "brandColor": [ | `hex(string)],
  "textColor": [ | `hex(string)],
  "baseFontSize": [ | `pt(int)],
  "fontSizeSmall": [ | `pt(int)],
  "fontSizeLarge": [ | `pt(int)],
  "pageMargin": [ | `mm(float)],
  "footerHeight": [ | `mm(float)],
};