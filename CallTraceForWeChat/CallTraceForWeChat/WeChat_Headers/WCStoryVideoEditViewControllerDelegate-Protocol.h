//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditVideoAttr, NSString, UIImage, WCStoryVideoEditViewController;

@protocol WCStoryVideoEditViewControllerDelegate <NSObject>

@optional
- (void)storyVideoEditDidClickDone:(WCStoryVideoEditViewController *)arg1 videoPath:(NSString *)arg2 thumbImg:(UIImage *)arg3 editVideoAttr:(EditVideoAttr *)arg4;
- (void)storyVideoEditDidClickCancel:(WCStoryVideoEditViewController *)arg1 editVideoAttr:(EditVideoAttr *)arg2;
- (void)storyVideoEditDidClickDone:(WCStoryVideoEditViewController *)arg1;
@end

