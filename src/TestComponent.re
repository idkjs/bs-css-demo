open Css;

module Styles = {
  open Config.Theme;
  let getCard = theme => style([color(theme->textColor), fontSize(theme->fontSizeSmall)]);
};

[@react.component]
let make = (~theme: Config.Theme.t) => <div className={Styles.getCard(theme)}> {React.string("Testing")} </div>;