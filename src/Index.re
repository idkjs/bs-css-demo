/**
 * This file is considerd as "installation/instance specific" which means that
 * in here we define overrides for the theme values that are then
 * utilized througout the rest of the "platform" code base.
 *
 * This file only defines minimal overrides and then calls for platform code.
 */
// Theme
let theme = App.createTheme(~textColor=`hex("202020"), ());

App.start(~theme);