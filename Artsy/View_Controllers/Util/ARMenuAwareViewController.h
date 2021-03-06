#import <Foundation/Foundation.h>

@class UIScrollView;

@protocol ARMenuAwareViewController <NSObject>

@optional
/** Hide the bottom menu */
@property (readonly, nonatomic, assign) BOOL hidesToolbarMenu;
/** A fallback for the back button, usage is a bit confusing  */
@property (readonly, nonatomic, assign) BOOL hidesNavigationButtons;
/** Hide the back button menu */
@property (readonly, nonatomic, assign) BOOL hidesBackButton;
/** Hide the black bar at the top */
@property (readonly, nonatomic, assign) BOOL hidesStatusBarBackground;

/**
 * The scrollview returned by this getter will have its delegate proxied through the ARScrollNavigationChief so that the
 * menu automatically gets hidden/shown on scroll.
 */
@property (readonly, nonatomic, weak) UIScrollView *menuAwareScrollView;

@end
