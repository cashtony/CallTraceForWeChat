//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWAJSContextBlueToothProtocol-Protocol.h"

@class NSString;

@interface WAJSEventHandler_addBLEPeripheralService : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString *serverId;
    NSString *serviceUUID;
}

- (void).cxx_destruct;
- (void)onBluetoothDidAddService:(id)arg1 serverID:(id)arg2 errMsg:(id)arg3 errCode:(int)arg4 appid:(id)arg5;
- (id)bleInstance;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

