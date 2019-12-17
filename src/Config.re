open Css;

module Theme = {
  // This is the type of a theme, it is abstract (opaque) and read-only
  type main = {
    primaryColor: Types.Color.t,
    brandColor: Types.Color.t,
    textColor: Types.Color.t,
    baseFontSize: Types.Length.t,
    fontSizeSmall: Types.Length.t,
    fontSizeLarge: Types.Length.t,
    fontWeight: [ | `bold | `normal],
  };
  type print = {
    pageMargin: Types.Length.t,
    footerHeight: Types.Length.t,
  };
  type t = {
    main,
    print,
  };
  // All variables of a theme are atomic types of Css but their creation is constrained by the make function
  let makeMain =
      (
        ~primaryColor="333333",
        ~brandColor="333333",
        ~textColor="000000",
        ~baseFontSize=10,
        ~fontSizeSmall=9,
        ~fontSizeLarge=13,
        ~fontWeight=`bold,
        (),
      ) => {
    primaryColor: hex(primaryColor),
    brandColor: hex(brandColor),
    textColor: hex(textColor),
    baseFontSize: px(baseFontSize),
    fontSizeSmall: pt(fontSizeSmall),
    fontSizeLarge: pt(fontSizeLarge),
    fontWeight,
  };
  let makePrint = (~pageMargin=10.0, ~footerHeight=20.0, ()) => {
    pageMargin: mm(pageMargin),
    footerHeight: mm(footerHeight),
  };
  let mainDefault = makeMain();
  let printDefault = makePrint();

  let make = (~main=mainDefault, ~print=printDefault, ()) => {main, print};
  let main = theme => theme.main;
  let print = theme => theme.print;
};