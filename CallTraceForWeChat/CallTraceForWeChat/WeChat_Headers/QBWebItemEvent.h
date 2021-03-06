//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface QBWebItemEvent : NSObject
{
    int _apnType;
    long long _eventType;
    double _timestamp;
    NSDictionary *_userInfo;
    NSURL *_URL;
    NSURL *_mainDocumentURL;
    NSString *_HTTPMethod;
    NSString *_errorDescription;
    long long _statusCode;
    long long _directType;
    id _webview;
}

+ (id)descriptionForTimestamp:(double)arg1;
+ (id)eventWithType:(long long)arg1 userInfo:(id)arg2;
@property(nonatomic) __weak id webview; // @synthesize webview=_webview;
@property(nonatomic) int apnType; // @synthesize apnType=_apnType;
@property(nonatomic) long long directType; // @synthesize directType=_directType;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(retain, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)validJSONUserInfo;
- (id)eventName;
- (id)JSONInfo;

@end

