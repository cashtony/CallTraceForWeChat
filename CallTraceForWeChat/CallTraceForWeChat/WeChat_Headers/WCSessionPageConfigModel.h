//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCSessionPageConfigModel : MMObject <PBCoding>
{
    NSMutableArray *pagePaths;
    NSMutableDictionary *_pagePathsDicForKey;
    NSMutableDictionary *_pagePathsDicForSid;
}

+ (void)initialize;
+ (void)PBArrayAdd_pagePaths;
@property(retain, nonatomic) NSMutableDictionary *pagePathsDicForSid; // @synthesize pagePathsDicForSid=_pagePathsDicForSid;
@property(retain, nonatomic) NSMutableDictionary *pagePathsDicForKey; // @synthesize pagePathsDicForKey=_pagePathsDicForKey;
@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths;
- (void).cxx_destruct;
- (id)toString;
- (void)initCacheDictionary;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

