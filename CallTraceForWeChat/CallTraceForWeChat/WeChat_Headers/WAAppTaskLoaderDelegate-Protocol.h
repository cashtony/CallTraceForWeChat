//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIViewController, WAContact, WAPackageConfig, WAWebViewController;

@protocol WAAppTaskLoaderDelegate <NSObject>
- (void)fetchPreloadAppServiceIfPossibleWithContact:(WAContact *)arg1;
- (void)onDidShowLoadingWithPresentingViewController:(UIViewController *)arg1;
- (void)onWillShowLoadingWithPresentingViewController:(UIViewController *)arg1;
- (void)onDidPresentWithPresentingViewController:(UIViewController *)arg1;
- (void)setupTaskForSpecificPageMode;
- (NSArray *)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(WAWebViewController *)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(WAWebViewController *)arg1;
- (void)removeChildWebView:(WAWebViewController *)arg1 fromParentWebView:(WAWebViewController *)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(NSString *)arg2 childExtraInfo:(NSDictionary *)arg3 fromParentWebView:(WAWebViewController *)arg4;
- (void)setupAppServiceAndWebViewWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 baseURL:(NSString *)arg4 pageRelativeURL:(NSString *)arg5 getWebView:(id *)arg6;
@end

