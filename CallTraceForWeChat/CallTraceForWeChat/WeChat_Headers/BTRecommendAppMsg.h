//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppMsgShareItem, NSString;

@interface BTRecommendAppMsg : NSObject
{
    unsigned int _createTime;
    unsigned int _flag;
    NSString *_title;
    NSString *_digest;
    NSString *_contentUrl;
    NSString *_thumbUrl;
    NSString *_thumbUrl_1_1;
    NSString *_thumbUrl_235_1;
    AppMsgShareItem *_shareItem;
}

@property(retain, nonatomic) AppMsgShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *thumbUrl_235_1; // @synthesize thumbUrl_235_1=_thumbUrl_235_1;
@property(copy, nonatomic) NSString *thumbUrl_1_1; // @synthesize thumbUrl_1_1=_thumbUrl_1_1;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

