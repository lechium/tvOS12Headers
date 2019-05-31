/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderHostProtocol.h>

@protocol NEFilterDataExtensionProviderHostDelegate;
@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol> {

	id<NEFilterDataExtensionProviderHostDelegate> _data_delegate;

}

@property (__weak) id<NEFilterDataExtensionProviderHostDelegate> data_delegate;              //@synthesize data_delegate=_data_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)startedWithError:(id)arg1 ;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRulesChanged;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<NEFilterDataExtensionProviderHostDelegate>)data_delegate;
-(void)setData_delegate:(id<NEFilterDataExtensionProviderHostDelegate>)arg1 ;
-(void)report:(id)arg1 ;
@end

