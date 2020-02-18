#import <UIKit/UIKit.h>

@interface UIApplication (Private)
-(void) suspend;
-(void) terminateWithSuccess;
-(void) popup;
@end

@interface UIApplication (KarenPrefsAnimatedExitToSpringBoard)
-(void) karenPrefsAnimatedExit;
@end
