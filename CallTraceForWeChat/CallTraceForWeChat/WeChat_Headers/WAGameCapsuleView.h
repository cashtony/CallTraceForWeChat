//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, UIImageView, UILongPressGestureRecognizer, UIView, WAPopOverTaskBarlogic, WAPopOverView, WAWebViewController;
@protocol WAWebViewMutiFuncMenuViewDelegate;

@interface WAGameCapsuleView : MMUIView
{
    UIView *_menuView;
    MMUIButton *_menuMoreButton;
    MMUIButton *_menuExitButton;
    MMUIButton *_menuStateButton;
    UIImageView *_menuIconView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    _Bool _isTrigerMoreLongPress;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    double _lastSystemNavigationBarHeight;
    int _navMode;
    WAWebViewController *_webview;
    id <WAWebViewMutiFuncMenuViewDelegate> _delegate;
    long long _menuState;
}

+ (_Bool)shouldUseSmallMenu;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) int navMode; // @synthesize navMode=_navMode;
@property(nonatomic) __weak id <WAWebViewMutiFuncMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)onLongPressMoreItem:(id)arg1;
- (void)onLongPressExitItem:(id)arg1;
- (id)getMenuMoreButton;
- (id)genStateButton;
- (id)genMenuView;
- (void)onReturn;
- (void)onExit;
- (void)onMore;
- (id)getIconNameForCurrentNavMode:(id)arg1 HighLight:(_Bool)arg2;
- (id)getIconNameForCurrentNavMode:(id)arg1;
- (id)stateBackgroundIconName;
- (id)voiceRecordStateIconName;
- (id)POIStateIconName;
- (id)videoRecordStateIconName;
- (id)exitButtonHighLightIconName;
- (id)exitButtonIconName;
- (id)moreButtonIconName;
- (void)changeMenuStateWithIcon:(id)arg1 AccessbilityLabel:(id)arg2;
- (void)changeMenuStateToRecordingVideo;
- (void)changeMenuStateToRecordingVoice;
- (void)changeMenuStateToLocation;
- (void)changeMenuStateToNormal;
- (void)resetMenuViewIcon;
- (void)onWebViewDidAppear;
- (void)fsmenu_updateContent;
- (void)resetMenuState;
- (void)layoutSubviews;
- (void)updateMenuViewWitNavMode:(int)arg1;
- (id)initWithNavMode:(int)arg1;

@end
