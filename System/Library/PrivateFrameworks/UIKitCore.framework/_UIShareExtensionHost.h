/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIShareExtensionHost <NSObject>
@required
-(void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
-(void)shareExtensionServiceChangeSheetDismissButtonHidden:(BOOL)arg1;
-(void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
-(void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
-(void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
-(void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;

@end

