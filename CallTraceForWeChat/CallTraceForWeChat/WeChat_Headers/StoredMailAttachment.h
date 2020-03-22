//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface StoredMailAttachment : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int dataSize;
    NSString *objectId;
    NSString *objectName;
    NSData *data;
    NSString *attachID;
}

@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
