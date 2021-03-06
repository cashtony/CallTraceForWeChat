//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface WCFinderUserMentionModel : NSObject <PBCoding>
{
    NSData *lastLikeBuffer;
    NSData *lastCommentBuffer;
    NSData *lastNotifyBuffer;
    unsigned long long unreadLikeCount;
    unsigned long long unreadCommentCount;
    unsigned long long unreadNotifyCount;
    unsigned long long lastReadLikeMaxId;
    unsigned long long lastReadCommentMaxId;
    unsigned long long lastReadNotifyMaxId;
    NSString *lastHeadImageURL;
    unsigned long long lastWechatReadMaxId;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastWechatReadMaxId;
+ (void)PBArrayAdd_lastHeadImageURL;
+ (void)PBArrayAdd_lastReadNotifyMaxId;
+ (void)PBArrayAdd_lastReadCommentMaxId;
+ (void)PBArrayAdd_lastReadLikeMaxId;
+ (void)PBArrayAdd_unreadNotifyCount;
+ (void)PBArrayAdd_unreadCommentCount;
+ (void)PBArrayAdd_unreadLikeCount;
+ (void)PBArrayAdd_lastNotifyBuffer;
+ (void)PBArrayAdd_lastCommentBuffer;
+ (void)PBArrayAdd_lastLikeBuffer;
@property(nonatomic) unsigned long long lastWechatReadMaxId; // @synthesize lastWechatReadMaxId;
@property(copy, nonatomic) NSString *lastHeadImageURL; // @synthesize lastHeadImageURL;
@property(nonatomic) unsigned long long lastReadNotifyMaxId; // @synthesize lastReadNotifyMaxId;
@property(nonatomic) unsigned long long lastReadCommentMaxId; // @synthesize lastReadCommentMaxId;
@property(nonatomic) unsigned long long lastReadLikeMaxId; // @synthesize lastReadLikeMaxId;
@property(nonatomic) unsigned long long unreadNotifyCount; // @synthesize unreadNotifyCount;
@property(nonatomic) unsigned long long unreadCommentCount; // @synthesize unreadCommentCount;
@property(nonatomic) unsigned long long unreadLikeCount; // @synthesize unreadLikeCount;
@property(retain, nonatomic) NSData *lastNotifyBuffer; // @synthesize lastNotifyBuffer;
@property(retain, nonatomic) NSData *lastCommentBuffer; // @synthesize lastCommentBuffer;
@property(retain, nonatomic) NSData *lastLikeBuffer; // @synthesize lastLikeBuffer;
- (void).cxx_destruct;
- (void)cleanMentionBuffer;
- (void)updateWechatReadMaxId:(unsigned long long)arg1;
- (void)updateUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateLastReadMaxMentionID:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateLastBufferWithType:(unsigned long long)arg1 lastBuffer:(id)arg2;
- (unsigned long long)getUnreadCountWithType:(unsigned long long)arg1;
- (unsigned long long)getLastReadMaxIdWithType:(unsigned long long)arg1;
- (id)getLastBufferWithType:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

