//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingBase.h"

@class EJBindingCanvasContextWebGL;

@interface EJBindingWebGLExtension : EJBindingBase
{
    EJBindingCanvasContextWebGL *webglContext;
}

+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3;
- (void)dealloc;
- (id)initWithWebGLContext:(id)arg1;

@end

