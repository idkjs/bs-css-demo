/**
 * This file contains the type definitions for the theme
 * Requirements
 */
open Css;

type theme = {
  .
  "primaryColor": Types.Color.t,
  "brandColor": Types.Color.t,
  "textColor": [ | `hex(string)],
  "baseFontSize": [ | `pt(int)],
  "fontSizeSmall": [ | `pt(int)],
  "fontSizeLarge": [ | `pt(int)],
  "pageMargin": [ | `mm(float)],
  "footerHeight": [ | `mm(float)],
};