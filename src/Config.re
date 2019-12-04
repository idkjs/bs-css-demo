/**
 * This file contains the exact types of the theme fields.
 * It is intentional to require very specific types of values for the fields
 * so that we are able to calculate with them without the risk
 * of ending up e.g. summing pixels with points.
 */
open Css;

module Theme: {
  // This is the type of a theme, it is abstract (opaque) and read-only
  type t;

  // The only way to create a theme is by using this make function,
  // that controls how Color.t and Length.t instances are created
  let make:
    (
      ~primaryColor: string=?,
      ~brandColor: string=?,
      ~textColor: string=?,
      ~baseFontSize: int=?,
      ~fontSizeSmall: int=?,
      ~fontSizeLarge: int=?,
      ~pageMargin: float=?,
      ~footerHeight: float=?,
      unit
    ) =>
    t;

  // Getters for the theme variables
  let primaryColor: t => Types.Color.t;
  let textColor: t => Types.Color.t;
  let fontSizeSmall: t => Types.Length.t;
} = {
  // All variables of a theme are atomic types of Css but their creation is constrained by the make function
  type t = {
    .
    "primaryColor": Types.Color.t,
    "brandColor": Types.Color.t,
    "textColor": Types.Color.t,
    "baseFontSize": Types.Length.t,
    "fontSizeSmall": Types.Length.t,
    "fontSizeLarge": Types.Length.t,
    "pageMargin": Types.Length.t,
    "footerHeight": Types.Length.t,
  };

  let make =
      (
        ~primaryColor="333333",
        ~brandColor="333333",
        ~textColor="000000",
        ~baseFontSize=10,
        ~fontSizeSmall=9,
        ~fontSizeLarge=13,
        ~pageMargin=10.0,
        ~footerHeight=20.0,
        (),
      ) => {
    "primaryColor": hex(primaryColor),
    "brandColor": hex(brandColor),
    "textColor": hex(textColor),
    "baseFontSize": px(baseFontSize),
    "fontSizeSmall": pt(fontSizeSmall),
    "fontSizeLarge": pt(fontSizeLarge),
    "pageMargin": mm(pageMargin),
    "footerHeight": mm(footerHeight),
  };
  let primaryColor = theme => theme##primaryColor;
  let textColor = theme => theme##textColor;
  let fontSizeSmall = theme => theme##fontSizeSmall;
};