//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class HardDevice, ModContact, NSString;

@interface BatchSearchHardDeviceResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bindTicket; // @dynamic bindTicket;
@property(retain, nonatomic) ModContact *contact; // @dynamic contact;
@property(retain, nonatomic) HardDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *mac; // @dynamic mac;
@property(nonatomic) unsigned int ret; // @dynamic ret;

@end

