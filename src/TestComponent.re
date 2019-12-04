open Css;

module Styles = {
  let getCard = theme =>
    style([color(theme##textColor), fontSize(theme##fontSizeSmall)]);
};

[@react.component]
let make = (~theme: Config.theme) =>
  <div className={Styles.getCard(theme)}> {React.string("Testing")} </div>;