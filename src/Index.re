/**
 * This file is considerd as "installation/instance specific" which means that
 * in here we define overrides for the theme values that are then
 * utilized througout the rest of the "platform" code base.
 *
 * This file only defines minimal overrides and then calls for platform code.
 */
let main =
  Config.Theme.makeMain(
    ~textColor="202020",
    ~fontSizeLarge=30,
    ~fontWeight=`normal,
    (),
  );

// Theme
let theme = Config.Theme.make(~main, ());

App.start(~theme);