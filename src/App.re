let createTheme =
    (
      ~primaryColor=`hex("333333"),
      ~brandColor=`hex("333333"),
      ~textColor=`hex("000000"),
      ~baseFontSize=`pt(10),
      ~fontSizeSmall=`pt(9),
      ~fontSizeLarge=`pt(13),
      ~pageMargin=`mm(10.0),
      ~footerHeight=`mm(20.0),
      (),
    ) => {
  "primaryColor": primaryColor,
  "brandColor": brandColor,
  "textColor": textColor,
  "baseFontSize": baseFontSize,
  "fontSizeSmall": fontSizeSmall,
  "fontSizeLarge": fontSizeLarge,
  "pageMargin": pageMargin,
  "footerHeight": footerHeight,
};

let defaultTheme = createTheme();

let start = (~theme: Config.theme) => {
  ReactDOMRe.renderToElementWithId(<TestComponent theme />, "test");
};