//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSObject, NSString, WCEliminatedSlotMMKV;
@protocol OS_dispatch_queue;

@interface MMWebOptimizationMgr : MMService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableArray *_arrA8keyLiteWaitingQueue;
    NSMutableSet *_setA8keyLiteRequestingUrlString;
    NSMutableSet *_setRequestingDomainString;
    NSObject<OS_dispatch_queue> *_doDNSWorkQueue;
    WCEliminatedSlotMMKV *_webControlDataSlotKv;
    WCEliminatedSlotMMKV *_domainControlDataSlotKv;
    WCEliminatedSlotMMKV *_domainPreDNSResultSlotKv;
}

+ (_Bool)canApplyWebOptimizationWithDataItem:(id)arg1;
+ (_Bool)canApplyWebOptimizationWithMessageWrap:(id)arg1;
+ (_Bool)isWebCheckPerformanceEnable;
+ (_Bool)isWebPreDoDNSEnable;
+ (_Bool)isWebGetA8keyLiteEnable;
+ (id)netTypeString;
+ (unsigned int)generateSendSequence;
+ (_Bool)isMPDomainURL:(id)arg1;
@property(retain, nonatomic) WCEliminatedSlotMMKV *domainPreDNSResultSlotKv; // @synthesize domainPreDNSResultSlotKv=_domainPreDNSResultSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *domainControlDataSlotKv; // @synthesize domainControlDataSlotKv=_domainControlDataSlotKv;
@property(retain, nonatomic) WCEliminatedSlotMMKV *webControlDataSlotKv; // @synthesize webControlDataSlotKv=_webControlDataSlotKv;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *doDNSWorkQueue; // @synthesize doDNSWorkQueue=_doDNSWorkQueue;
@property(retain, nonatomic) NSMutableSet *setRequestingDomainString; // @synthesize setRequestingDomainString=_setRequestingDomainString;
@property(retain, nonatomic) NSMutableSet *setA8keyLiteRequestingUrlString; // @synthesize setA8keyLiteRequestingUrlString=_setA8keyLiteRequestingUrlString;
@property(retain, nonatomic) NSMutableArray *arrA8keyLiteWaitingQueue; // @synthesize arrA8keyLiteWaitingQueue=_arrA8keyLiteWaitingQueue;
- (void).cxx_destruct;
- (id)urlStringWithoutFragmentFromOriginalUrlString:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doPrefetchControlDataForWCDataItems:(id)arg1 getA8keyScene:(unsigned int)arg2;
- (void)doPrefetchControlDataForMessageWraps:(id)arg1 getA8keyScene:(unsigned int)arg2;
- (void)setDnsResult:(id)arg1 forDomain:(id)arg2;
- (void)setDomainControlData:(id)arg1 forDomain:(id)arg2;
- (id)domainControlDataForDomain:(id)arg1;
- (void)setAuthControlData:(id)arg1 forURL:(id)arg2;
- (id)authControlDataForUrlString:(id)arg1;
- (_Bool)hasCacheDnsResultForDomain:(id)arg1;
- (_Bool)hasAllowanceAsyncA8KeyForUrlString:(id)arg1 andGetNewRespUrlString:(id *)arg2;
- (id)tryGetWebFirstScreenOptimazationExtInfoForKeyUrlString:(id)arg1;
- (void)initSlotKV;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;
- (id)mainThread_filterDoDNSParamsListToDomainList:(id)arg1;
- (id)mainThread_filterA8KeyLiteParamsList:(id)arg1;
- (void)processGetA8KeyLiteResponse:(id)arg1 requestId2Params:(id)arg2;
- (void)processGetA8KeyLiteResponseFailWithRequestId2Params:(id)arg1;
- (void)onResponseGetA8KeyLite:(id)arg1;
- (void)mainThread_requestGet8KeyLiteWithReqParams:(id)arg1;
- (void)mainThread_checkA8KeyLiteWaitingQueue;
- (void)mainThread_pushA8KeyLiteQueue:(id)arg1;
- (void)batchGetA8KeyLiteForUrlParams:(id)arg1;
- (void)batchDoDNSForUrlParams:(id)arg1;
- (void)batchFetchControlDataForUrlParams:(id)arg1;
- (void)onServiceClearA8KeyLite;
- (void)onServiceReloadA8KeyLite;
- (void)onServiceInitA8KeyLite;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
