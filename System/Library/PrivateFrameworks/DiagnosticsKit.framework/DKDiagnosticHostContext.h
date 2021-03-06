/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSString;

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {

	id<DKExtensionHostAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1 ;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(id<DKExtensionHostAdapterDelegate>)delegate;
@end

