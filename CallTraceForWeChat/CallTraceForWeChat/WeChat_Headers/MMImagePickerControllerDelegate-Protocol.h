//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAsset, MMImagePickerController, NSArray, NSDictionary, SightDraft, UINavigationController, WCFinderDataItem;

@protocol MMImagePickerControllerDelegate <NSObject>
- (void)MMImagePickerControllerDidCancel:(MMImagePickerController *)arg1;
- (void)MMImagePickerManager:(UINavigationController *)arg1 didFinishPickingAssetWithDataItem:(WCFinderDataItem *)arg2 GPSInfoArrayOfAsset:(NSArray *)arg3;
- (void)MMImagePickerController:(MMImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSArray *)arg2;

@optional
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingVideoWithAsset:(MMAsset *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingSightWithInfo:(SightDraft *)arg2;
- (void)MMVideoPickerController:(UINavigationController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
@end
