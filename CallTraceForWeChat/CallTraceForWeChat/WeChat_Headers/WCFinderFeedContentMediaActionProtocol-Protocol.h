//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderMediaInfo;

@protocol WCFinderFeedContentMediaActionProtocol <NSObject>

@optional
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)retryLoadingCoverImg;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2;
- (void)contentMediaDidEndPlay;
- (void)didSelectPhotoMediaSource:(NSArray *)arg1 originRect:(struct CGRect)arg2;
- (void)didFeedDoubleTapAction;
- (_Bool)isEnableDoubleLikeAction;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)didSelectVideoMediaSource:(WCFinderMediaInfo *)arg1 originRect:(struct CGRect)arg2;
@end

