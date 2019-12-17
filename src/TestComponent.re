open Css;

module Styles = {
  open Config.Theme;
  let getCard = theme => {
    // let temp = theme.main.fontSizeLarge + theme.main.fontSizeSmall;
    style([
      color(theme.main.textColor),
      fontSize(theme.main.fontSizeSmall),
    ]);
  };
};

[@react.component]
let make = (~theme: Config.Theme.t) =>
  <div className={Styles.getCard(theme)}> {React.string("Testing")} </div>;