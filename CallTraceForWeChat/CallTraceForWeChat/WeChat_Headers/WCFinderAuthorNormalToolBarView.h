//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderFeedToolbarActionExt-Protocol.h"

@class MMUIButton, NSString, UIImageView, UILabel;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderAuthorNormalToolBarView : UIView <WCFinderFeedToolbarActionExt>
{
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    NSString *_tid;
    UIView *_topLine;
    UIImageView *_viewIconView;
    UILabel *_viewNumLabel;
    unsigned long long _viewCount;
    UIImageView *_likeIconView;
    UILabel *_likeNumLabel;
    unsigned long long _likeCount;
    UIImageView *_commentIconView;
    UILabel *_commentLabel;
    unsigned long long _commentCount;
    UIView *_forwardIconView;
    UILabel *_forwardLabel;
    unsigned long long _forwardCount;
    UILabel *_viewCommentDetailLabel;
    UILabel *_commentCloseLabel;
    MMUIButton *_moreBtn;
}

@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *commentCloseLabel; // @synthesize commentCloseLabel=_commentCloseLabel;
@property(retain, nonatomic) UILabel *viewCommentDetailLabel; // @synthesize viewCommentDetailLabel=_viewCommentDetailLabel;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) UILabel *forwardLabel; // @synthesize forwardLabel=_forwardLabel;
@property(retain, nonatomic) UIView *forwardIconView; // @synthesize forwardIconView=_forwardIconView;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIImageView *commentIconView; // @synthesize commentIconView=_commentIconView;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) UIImageView *viewIconView; // @synthesize viewIconView=_viewIconView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toolBarStyleChangedViewCount:(long long)arg1 likeCount:(long long)arg2 commentCount:(long long)arg3 forwardCount:(long long)arg4;
- (void)didClickMoreBtn:(id)arg1;
- (void)updateCommmentCloseStatus:(_Bool)arg1;
- (void)bindWithTid:(id)arg1;
- (void)updateUIWith:(unsigned long long)arg1 likeCount:(unsigned long long)arg2 commentCount:(unsigned long long)arg3 forwardCount:(unsigned long long)arg4;
- (void)onClickCommentDetail:(id)arg1;
- (void)updatForwardContainer;
- (void)updateCommentContainer;
- (void)updateLikeContainer;
- (void)updateViewContainer;
- (void)forwardContainerSetup;
- (void)commentContainerSetup;
- (void)likeContainerSetup;
- (void)viewContainerSetup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

