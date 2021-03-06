//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCPayAddPayCardDelegate-Protocol.h"
#import "WCPayLQTDepositAddPlanCgiDelegate-Protocol.h"
#import "WCPayLQTDepositEntryViewControllerDelegate-Protocol.h"
#import "WCPayLQTDepositFillInfoViewControllerDelegate-Protocol.h"
#import "WCPayLQTDepositManagePlanCgiDelegate-Protocol.h"
#import "WCPayLQTDepositModifyPlanCgiDelegate-Protocol.h"
#import "WCPayLQTDepositPlanIndexCgiDelegate-Protocol.h"
#import "WCPayLQTDepositPlanListViewControllerDelegate-Protocol.h"
#import "WCPayLQTDepositPreAddPlanCgiDelegate-Protocol.h"

@class NSString, WCPayLQTDepositAddPlanCgi, WCPayLQTDepositManagePlanCgi, WCPayLQTDepositModifyPlanCgi, WCPayLQTDepositPlanIndexCgi, WCPayLQTDepositPreAddPlanCgi, WCPayPayPwdViewController;

@interface WCPayLQTDepositControlLogic : WCPayControlLogic <WCPayLQTDepositPlanIndexCgiDelegate, WCPayLQTDepositPreAddPlanCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTDepositAddPlanCgiDelegate, WCPayLQTDepositFillInfoViewControllerDelegate, WCPayLQTDepositEntryViewControllerDelegate, WCPayLQTDepositPlanListViewControllerDelegate, WCPayLQTDepositModifyPlanCgiDelegate, WCPayLQTDepositManagePlanCgiDelegate, MMTipsViewControllerDelegate>
{
    long long m_logicState;
    _Bool _hasDeleteAllPlan;
    _Bool _isRefetchUsrPlanId;
    unsigned long long _entryScene;
    WCPayLQTDepositPlanIndexCgi *_planIndexCgi;
    WCPayLQTDepositPreAddPlanCgi *_preAddPlanCgi;
    NSString *_bindSerialFromNewCard;
    WCPayPayPwdViewController *_pwdVC;
    WCPayLQTDepositAddPlanCgi *_addPlanCgi;
    WCPayLQTDepositManagePlanCgi *_managePlanCgi;
    WCPayLQTDepositModifyPlanCgi *_modifyPlanCgi;
}

@property(nonatomic) _Bool isRefetchUsrPlanId; // @synthesize isRefetchUsrPlanId=_isRefetchUsrPlanId;
@property _Bool hasDeleteAllPlan; // @synthesize hasDeleteAllPlan=_hasDeleteAllPlan;
@property(retain, nonatomic) WCPayLQTDepositModifyPlanCgi *modifyPlanCgi; // @synthesize modifyPlanCgi=_modifyPlanCgi;
@property(retain, nonatomic) WCPayLQTDepositManagePlanCgi *managePlanCgi; // @synthesize managePlanCgi=_managePlanCgi;
@property(retain, nonatomic) WCPayLQTDepositAddPlanCgi *addPlanCgi; // @synthesize addPlanCgi=_addPlanCgi;
@property(retain, nonatomic) WCPayPayPwdViewController *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(retain, nonatomic) WCPayLQTDepositPreAddPlanCgi *preAddPlanCgi; // @synthesize preAddPlanCgi=_preAddPlanCgi;
@property(retain, nonatomic) WCPayLQTDepositPlanIndexCgi *planIndexCgi; // @synthesize planIndexCgi=_planIndexCgi;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
- (void).cxx_destruct;
- (void)popCount:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onWCPayLQTDepositModifyPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositModifyPlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositManagePlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositManagePlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositPlanListViewControllerOpearte:(id)arg1 operateType:(int)arg2;
- (void)onWCPayLQTDepositPlanListViewControllerClickAddPlan;
- (void)onWCPayLQTDepositPlanListViewControllerBack;
- (void)onWCPayLQTDepositAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositAddPlanCgiResponseOK:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)onWCPayLQTDepositFillInfoViewControllerNext;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)onWCPayLQTDepositFillInfoViewControllerChooseAddCard;
- (void)onWCPayLQTDepositFillInfoViewControllerCancel;
- (void)onWCPayLQTDepositEntryViewControllerCancel;
- (void)onWCPayLQTDepositPreAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPreAddPlanCgiReponseOK:(id)arg1;
- (void)onWCPayLQTDepositEntryViewControllerNewPlan;
- (void)startBlockedWithTip:(id)arg1 delay:(double)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiResponseOK:(id)arg1 fromServer:(_Bool)arg2;
- (void)startLogic;
- (_Bool)AddScene;
- (void)setExtraInfo:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

