/**
 * This file is the "platform" entrypoint. It defines the platform defaults for e.g. theme values.
 */

let defaultTheme = Config.Theme.make();

let start = (~theme: Config.Theme.t) => {
  ReactDOMRe.renderToElementWithId(<TestComponent theme />, "test");
};