//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSString, WASubscriptionMessagePageSheetViewModel;

@interface WASubscriptionMessageRequestSubscribeCgi : WCBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_username;
    unsigned long long _scene;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
}

@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)subscribeStatusInBrand:(id)arg1;
- (id)subscribeStatusInWeapp:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithViewModel:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end
